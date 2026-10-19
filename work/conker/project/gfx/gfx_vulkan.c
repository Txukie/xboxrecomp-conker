/*
 * Vulkan backend for xbox_gfx (Windows, Linux, and macOS via MoltenVK).
 *
 * Model: everything renders into an offscreen colour+depth surface at the
 * NV2A surface resolution, inside one long render pass with LOAD ops, so
 * clears and draws accumulate exactly as they do on the console between
 * flips. present() blits that surface, letterboxed, into the swapchain.
 * Headless mode skips the window and swapchain entirely.
 *
 * Known simplifications (see docs/technical/porting.md):
 *   - only texture stage 0 is sampled; NV2A combiners are not translated yet
 *   - texture uploads use a blocking one-shot command buffer
 *   - BC textures require textureCompressionBC (no software fallback yet)
 */

#include "gfx_internal.h"
#include "gfx_vulkan_shaders.h"

#include <vulkan/vulkan.h>
#include <SDL.h>
#include <SDL_vulkan.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FRAMES_IN_FLIGHT 2
#define VB_SIZE          (8u << 20)
#define MAX_SC_IMAGES    8
#define MAX_PIPELINES    256
#define MAX_TEXTURES     4096

#define VK_LOG(...) fprintf(stderr, "[GFX-VK] " __VA_ARGS__)
#define VK_CHECK(expr) do { VkResult r_ = (expr); if (r_ != VK_SUCCESS) { \
    VK_LOG("%s failed: %d\n", #expr, (int)r_); return 0; } } while (0)

typedef struct {
    xbox_gfx_texture base;
    VkImage image;
    VkDeviceMemory memory;
    VkImageView view;
    VkDescriptorSet set;
} vk_texture;

typedef struct {
    xbox_gfx_state state;
    uint32_t prim;
} pipeline_key;

typedef struct {
    pipeline_key key;
    VkPipeline pipeline;
} pipeline_entry;

typedef struct {
    VkCommandBuffer cb;
    VkFence fence;
    VkSemaphore acquired;
    VkBuffer vb;
    VkDeviceMemory vb_mem;
    uint8_t *vb_map;
    VkDeviceSize vb_used;
} frame_t;

typedef struct {
    float surface_w, surface_h;
    uint32_t alpha_func;
    float alpha_ref;
} push_t;

static struct {
    int headless, vsync;
    SDL_Window *window;

    VkInstance instance;
    VkSurfaceKHR surface;
    VkPhysicalDevice phys;
    VkPhysicalDeviceMemoryProperties mem_props;
    VkDevice device;
    uint32_t queue_family;
    VkQueue queue;
    VkCommandPool pool;
    int bc_supported;

    VkSwapchainKHR swapchain;
    VkFormat sc_format;
    VkExtent2D sc_extent;
    uint32_t sc_count;
    VkImage sc_images[MAX_SC_IMAGES];
    VkSemaphore sc_done[MAX_SC_IMAGES];
    int sc_dirty;

    /* Offscreen NV2A surface */
    uint32_t sw, sh;
    VkFormat depth_format;
    VkImage color, depth;
    VkDeviceMemory color_mem, depth_mem;
    VkImageView color_view, depth_view;
    VkFramebuffer framebuffer;
    VkRenderPass render_pass;

    VkDescriptorSetLayout set_layout;
    VkPipelineLayout pipeline_layout;
    VkShaderModule vs, fs;
    VkDescriptorPool desc_pool;
    VkSampler sampler;
    pipeline_entry pipelines[MAX_PIPELINES];
    uint32_t pipeline_count;

    vk_texture *white;
    vk_texture *bound;
    xbox_gfx_state state;

    frame_t frames[FRAMES_IN_FLIGHT];
    uint32_t cur;
    int recording, in_pass;
} vk;

/* ── Helpers ───────────────────────────────────────────────────────── */

static int find_memory(uint32_t type_bits, VkMemoryPropertyFlags want, uint32_t *out)
{
    uint32_t i;
    for (i = 0; i < vk.mem_props.memoryTypeCount; i++) {
        if ((type_bits & (1u << i)) &&
            (vk.mem_props.memoryTypes[i].propertyFlags & want) == want) {
            *out = i;
            return 1;
        }
    }
    return 0;
}

static int create_buffer(VkDeviceSize size, VkBufferUsageFlags usage,
                         VkBuffer *buf, VkDeviceMemory *mem, void **map)
{
    VkBufferCreateInfo bi = { VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO };
    VkMemoryRequirements req;
    VkMemoryAllocateInfo ai = { VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO };
    bi.size = size;
    bi.usage = usage;
    bi.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    VK_CHECK(vkCreateBuffer(vk.device, &bi, NULL, buf));
    vkGetBufferMemoryRequirements(vk.device, *buf, &req);
    ai.allocationSize = req.size;
    if (!find_memory(req.memoryTypeBits, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                     VK_MEMORY_PROPERTY_HOST_COHERENT_BIT, &ai.memoryTypeIndex))
        return 0;
    VK_CHECK(vkAllocateMemory(vk.device, &ai, NULL, mem));
    VK_CHECK(vkBindBufferMemory(vk.device, *buf, *mem, 0));
    if (map)
        VK_CHECK(vkMapMemory(vk.device, *mem, 0, size, 0, map));
    return 1;
}

static int create_image(uint32_t w, uint32_t h, VkFormat fmt, VkImageUsageFlags usage,
                        VkImageAspectFlags aspect, VkImage *img,
                        VkDeviceMemory *mem, VkImageView *view)
{
    VkImageCreateInfo ii = { VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO };
    VkMemoryRequirements req;
    VkMemoryAllocateInfo ai = { VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO };
    VkImageViewCreateInfo vi = { VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO };

    ii.imageType = VK_IMAGE_TYPE_2D;
    ii.format = fmt;
    ii.extent.width = w;
    ii.extent.height = h;
    ii.extent.depth = 1;
    ii.mipLevels = 1;
    ii.arrayLayers = 1;
    ii.samples = VK_SAMPLE_COUNT_1_BIT;
    ii.tiling = VK_IMAGE_TILING_OPTIMAL;
    ii.usage = usage;
    ii.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    ii.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    VK_CHECK(vkCreateImage(vk.device, &ii, NULL, img));
    vkGetImageMemoryRequirements(vk.device, *img, &req);
    ai.allocationSize = req.size;
    if (!find_memory(req.memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT,
                     &ai.memoryTypeIndex))
        return 0;
    VK_CHECK(vkAllocateMemory(vk.device, &ai, NULL, mem));
    VK_CHECK(vkBindImageMemory(vk.device, *img, *mem, 0));

    vi.image = *img;
    vi.viewType = VK_IMAGE_VIEW_TYPE_2D;
    vi.format = fmt;
    vi.subresourceRange.aspectMask = aspect;
    vi.subresourceRange.levelCount = 1;
    vi.subresourceRange.layerCount = 1;
    VK_CHECK(vkCreateImageView(vk.device, &vi, NULL, view));
    return 1;
}

static void barrier(VkCommandBuffer cb, VkImage img, VkImageAspectFlags aspect,
                    VkImageLayout from, VkImageLayout to,
                    VkAccessFlags src_access, VkAccessFlags dst_access,
                    VkPipelineStageFlags src_stage, VkPipelineStageFlags dst_stage)
{
    VkImageMemoryBarrier b = { VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER };
    b.srcAccessMask = src_access;
    b.dstAccessMask = dst_access;
    b.oldLayout = from;
    b.newLayout = to;
    b.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    b.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    b.image = img;
    b.subresourceRange.aspectMask = aspect;
    b.subresourceRange.levelCount = 1;
    b.subresourceRange.layerCount = 1;
    vkCmdPipelineBarrier(cb, src_stage, dst_stage, 0, 0, NULL, 0, NULL, 1, &b);
}

/* Blocking one-shot command buffer for setup work and texture uploads. */
static VkCommandBuffer oneshot_begin(void)
{
    VkCommandBufferAllocateInfo ai = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO };
    VkCommandBufferBeginInfo bi = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO };
    VkCommandBuffer cb = VK_NULL_HANDLE;
    ai.commandPool = vk.pool;
    ai.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    ai.commandBufferCount = 1;
    if (vkAllocateCommandBuffers(vk.device, &ai, &cb) != VK_SUCCESS)
        return VK_NULL_HANDLE;
    bi.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    vkBeginCommandBuffer(cb, &bi);
    return cb;
}

static void oneshot_end(VkCommandBuffer cb)
{
    VkSubmitInfo si = { VK_STRUCTURE_TYPE_SUBMIT_INFO };
    vkEndCommandBuffer(cb);
    si.commandBufferCount = 1;
    si.pCommandBuffers = &cb;
    vkQueueSubmit(vk.queue, 1, &si, VK_NULL_HANDLE);
    vkQueueWaitIdle(vk.queue);
    vkFreeCommandBuffers(vk.device, vk.pool, 1, &cb);
}

static int has_extension(const VkExtensionProperties *props, uint32_t n, const char *name)
{
    uint32_t i;
    for (i = 0; i < n; i++)
        if (!strcmp(props[i].extensionName, name))
            return 1;
    return 0;
}

/* ── Instance / device ─────────────────────────────────────────────── */

static int create_instance(int validation)
{
    const char *exts[16];
    uint32_t n_exts = 0;
    VkExtensionProperties *avail = NULL;
    uint32_t n_avail = 0;
    VkApplicationInfo app = { VK_STRUCTURE_TYPE_APPLICATION_INFO };
    VkInstanceCreateInfo ci = { VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO };
    static const char *layer = "VK_LAYER_KHRONOS_validation";
    VkResult r;

    if (!vk.headless) {
        unsigned int n = 0;
        if (!SDL_Vulkan_GetInstanceExtensions(vk.window, &n, NULL) || n > 12) {
            VK_LOG("SDL_Vulkan_GetInstanceExtensions: %s\n", SDL_GetError());
            return 0;
        }
        SDL_Vulkan_GetInstanceExtensions(vk.window, &n, exts);
        n_exts = n;
    }

    vkEnumerateInstanceExtensionProperties(NULL, &n_avail, NULL);
    avail = calloc(n_avail ? n_avail : 1, sizeof(*avail));
    if (!avail) return 0;
    vkEnumerateInstanceExtensionProperties(NULL, &n_avail, avail);
#if defined(VK_KHR_portability_enumeration)
    /* MoltenVK only enumerates when the app opts into portability drivers. */
    if (has_extension(avail, n_avail, VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME)) {
        exts[n_exts++] = VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME;
        ci.flags |= VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR;
    }
#endif
    free(avail);

    app.pApplicationName = "xboxrecomp";
    app.apiVersion = VK_API_VERSION_1_1;
    ci.pApplicationInfo = &app;
    ci.enabledExtensionCount = n_exts;
    ci.ppEnabledExtensionNames = exts;
    if (validation) {
        ci.enabledLayerCount = 1;
        ci.ppEnabledLayerNames = &layer;
    }
    r = vkCreateInstance(&ci, NULL, &vk.instance);
    if (r == VK_ERROR_LAYER_NOT_PRESENT && validation) {
        VK_LOG("validation layer not installed, continuing without it\n");
        ci.enabledLayerCount = 0;
        r = vkCreateInstance(&ci, NULL, &vk.instance);
    }
    if (r != VK_SUCCESS) {
        VK_LOG("vkCreateInstance failed: %d\n", (int)r);
        return 0;
    }
    return 1;
}

static int pick_device(void)
{
    VkPhysicalDevice devs[16];
    uint32_t n = 16, i, best_score = 0;
    vkEnumeratePhysicalDevices(vk.instance, &n, devs);

    for (i = 0; i < n; i++) {
        VkQueueFamilyProperties qf[16];
        VkPhysicalDeviceProperties props;
        uint32_t nq = 16, q, score;
        vkGetPhysicalDeviceProperties(devs[i], &props);
        vkGetPhysicalDeviceQueueFamilyProperties(devs[i], &nq, qf);
        for (q = 0; q < nq; q++) {
            VkBool32 present = VK_TRUE;
            if (!(qf[q].queueFlags & VK_QUEUE_GRAPHICS_BIT))
                continue;
            if (!vk.headless)
                vkGetPhysicalDeviceSurfaceSupportKHR(devs[i], q, vk.surface, &present);
            if (!present)
                continue;
            score = props.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU ? 3 :
                    props.deviceType == VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU ? 2 : 1;
            if (score > best_score) {
                best_score = score;
                vk.phys = devs[i];
                vk.queue_family = q;
            }
            break;
        }
    }
    if (!vk.phys) {
        VK_LOG("no suitable GPU\n");
        return 0;
    }
    {
        VkPhysicalDeviceProperties props;
        vkGetPhysicalDeviceProperties(vk.phys, &props);
        VK_LOG("device: %s\n", props.deviceName);
    }
    vkGetPhysicalDeviceMemoryProperties(vk.phys, &vk.mem_props);
    return 1;
}

static int create_device(void)
{
    float prio = 1.0f;
    VkDeviceQueueCreateInfo qi = { VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO };
    VkDeviceCreateInfo ci = { VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO };
    VkPhysicalDeviceFeatures have, want;
    VkExtensionProperties *avail;
    uint32_t n_avail = 0, n_exts = 0;
    const char *exts[4];

    vkEnumerateDeviceExtensionProperties(vk.phys, NULL, &n_avail, NULL);
    avail = calloc(n_avail ? n_avail : 1, sizeof(*avail));
    if (!avail) return 0;
    vkEnumerateDeviceExtensionProperties(vk.phys, NULL, &n_avail, avail);
    if (!vk.headless)
        exts[n_exts++] = VK_KHR_SWAPCHAIN_EXTENSION_NAME;
    /* Required by the spec whenever the implementation exposes it (MoltenVK). */
    if (has_extension(avail, n_avail, "VK_KHR_portability_subset"))
        exts[n_exts++] = "VK_KHR_portability_subset";
    free(avail);

    vkGetPhysicalDeviceFeatures(vk.phys, &have);
    memset(&want, 0, sizeof(want));
    want.textureCompressionBC = have.textureCompressionBC;
    vk.bc_supported = have.textureCompressionBC;

    qi.queueFamilyIndex = vk.queue_family;
    qi.queueCount = 1;
    qi.pQueuePriorities = &prio;
    ci.queueCreateInfoCount = 1;
    ci.pQueueCreateInfos = &qi;
    ci.enabledExtensionCount = n_exts;
    ci.ppEnabledExtensionNames = exts;
    ci.pEnabledFeatures = &want;
    VK_CHECK(vkCreateDevice(vk.phys, &ci, NULL, &vk.device));
    vkGetDeviceQueue(vk.device, vk.queue_family, 0, &vk.queue);
    return 1;
}

/* ── Swapchain ─────────────────────────────────────────────────────── */

static void destroy_swapchain(void)
{
    uint32_t i;
    for (i = 0; i < vk.sc_count; i++) {
        if (vk.sc_done[i]) vkDestroySemaphore(vk.device, vk.sc_done[i], NULL);
        vk.sc_done[i] = VK_NULL_HANDLE;
    }
    if (vk.swapchain)
        vkDestroySwapchainKHR(vk.device, vk.swapchain, NULL);
    vk.swapchain = VK_NULL_HANDLE;
    vk.sc_count = 0;
}

static int create_swapchain(void)
{
    VkSurfaceCapabilitiesKHR caps;
    VkSurfaceFormatKHR fmts[32];
    VkPresentModeKHR modes[8];
    uint32_t n_fmts = 32, n_modes = 8, i;
    VkSwapchainCreateInfoKHR ci = { VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR };
    VkSemaphoreCreateInfo si = { VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO };
    int w = 0, h = 0;

    vkDeviceWaitIdle(vk.device);
    destroy_swapchain();

    vkGetPhysicalDeviceSurfaceCapabilitiesKHR(vk.phys, vk.surface, &caps);
    vkGetPhysicalDeviceSurfaceFormatsKHR(vk.phys, vk.surface, &n_fmts, fmts);
    vkGetPhysicalDeviceSurfacePresentModesKHR(vk.phys, vk.surface, &n_modes, modes);
    if (!n_fmts) return 0;

    ci.imageFormat = fmts[0].format;
    ci.imageColorSpace = fmts[0].colorSpace;
    for (i = 0; i < n_fmts; i++) {
        if (fmts[i].format == VK_FORMAT_B8G8R8A8_UNORM) {
            ci.imageFormat = fmts[i].format;
            ci.imageColorSpace = fmts[i].colorSpace;
            break;
        }
    }
    ci.presentMode = VK_PRESENT_MODE_FIFO_KHR;   /* always available */
    if (!vk.vsync) {
        for (i = 0; i < n_modes; i++)
            if (modes[i] == VK_PRESENT_MODE_MAILBOX_KHR ||
                modes[i] == VK_PRESENT_MODE_IMMEDIATE_KHR)
                ci.presentMode = modes[i];
    }

    if (caps.currentExtent.width != 0xFFFFFFFFu) {
        vk.sc_extent = caps.currentExtent;
    } else {
        SDL_Vulkan_GetDrawableSize(vk.window, &w, &h);
        vk.sc_extent.width = (uint32_t)w;
        vk.sc_extent.height = (uint32_t)h;
    }
    if (!vk.sc_extent.width || !vk.sc_extent.height)
        return 0;   /* minimised; retried on the next present */

    if (!(caps.supportedUsageFlags & VK_IMAGE_USAGE_TRANSFER_DST_BIT)) {
        VK_LOG("swapchain images cannot be blit targets\n");
        return 0;
    }
    ci.surface = vk.surface;
    ci.minImageCount = caps.minImageCount + 1;
    if (caps.maxImageCount && ci.minImageCount > caps.maxImageCount)
        ci.minImageCount = caps.maxImageCount;
    ci.imageExtent = vk.sc_extent;
    ci.imageArrayLayers = 1;
    ci.imageUsage = VK_IMAGE_USAGE_TRANSFER_DST_BIT;
    ci.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
    ci.preTransform = caps.currentTransform;
    ci.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    if (!(caps.supportedCompositeAlpha & ci.compositeAlpha)) {
        for (i = 0; i < 4; i++)
            if (caps.supportedCompositeAlpha & (1u << i)) {
                ci.compositeAlpha = (VkCompositeAlphaFlagBitsKHR)(1u << i);
                break;
            }
    }
    ci.clipped = VK_TRUE;
    VK_CHECK(vkCreateSwapchainKHR(vk.device, &ci, NULL, &vk.swapchain));
    vk.sc_format = ci.imageFormat;

    vk.sc_count = MAX_SC_IMAGES;
    vkGetSwapchainImagesKHR(vk.device, vk.swapchain, &vk.sc_count, vk.sc_images);
    for (i = 0; i < vk.sc_count; i++)
        VK_CHECK(vkCreateSemaphore(vk.device, &si, NULL, &vk.sc_done[i]));
    vk.sc_dirty = 0;
    return 1;
}

/* ── Offscreen NV2A surface ────────────────────────────────────────── */

static VkFormat pick_depth_format(void)
{
    /* NV2A surfaces are Z24S8 or Z16; AMD and Apple GPUs lack D24S8. */
    static const VkFormat candidates[] = {
        VK_FORMAT_D24_UNORM_S8_UINT, VK_FORMAT_D32_SFLOAT_S8_UINT,
        VK_FORMAT_D16_UNORM_S8_UINT,
    };
    size_t i;
    for (i = 0; i < sizeof(candidates) / sizeof(candidates[0]); i++) {
        VkFormatProperties p;
        vkGetPhysicalDeviceFormatProperties(vk.phys, candidates[i], &p);
        if (p.optimalTilingFeatures & VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT)
            return candidates[i];
    }
    return VK_FORMAT_UNDEFINED;
}

static void destroy_surface_targets(void)
{
    if (vk.framebuffer) vkDestroyFramebuffer(vk.device, vk.framebuffer, NULL);
    if (vk.color_view)  vkDestroyImageView(vk.device, vk.color_view, NULL);
    if (vk.depth_view)  vkDestroyImageView(vk.device, vk.depth_view, NULL);
    if (vk.color)       vkDestroyImage(vk.device, vk.color, NULL);
    if (vk.depth)       vkDestroyImage(vk.device, vk.depth, NULL);
    if (vk.color_mem)   vkFreeMemory(vk.device, vk.color_mem, NULL);
    if (vk.depth_mem)   vkFreeMemory(vk.device, vk.depth_mem, NULL);
    vk.framebuffer = VK_NULL_HANDLE;
    vk.color_view = vk.depth_view = VK_NULL_HANDLE;
    vk.color = vk.depth = VK_NULL_HANDLE;
    vk.color_mem = vk.depth_mem = VK_NULL_HANDLE;
}

static int create_surface_targets(uint32_t w, uint32_t h)
{
    VkFramebufferCreateInfo fi = { VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO };
    VkImageView views[2];
    VkCommandBuffer cb;
    VkClearColorValue black;
    VkClearDepthStencilValue ds;
    VkImageSubresourceRange cr = { VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1 };
    VkImageSubresourceRange dr = { VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT,
                                   0, 1, 0, 1 };

    if (!create_image(w, h, VK_FORMAT_R8G8B8A8_UNORM,
                      VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT |
                      VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                      VK_IMAGE_ASPECT_COLOR_BIT, &vk.color, &vk.color_mem, &vk.color_view))
        return 0;
    if (!create_image(w, h, vk.depth_format,
                      VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT |
                      VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                      VK_IMAGE_ASPECT_DEPTH_BIT, &vk.depth, &vk.depth_mem, &vk.depth_view))
        return 0;

    views[0] = vk.color_view;
    views[1] = vk.depth_view;
    fi.renderPass = vk.render_pass;
    fi.attachmentCount = 2;
    fi.pAttachments = views;
    fi.width = w;
    fi.height = h;
    fi.layers = 1;
    VK_CHECK(vkCreateFramebuffer(vk.device, &fi, NULL, &vk.framebuffer));

    /* Start defined: black colour, far depth, in attachment layouts. */
    cb = oneshot_begin();
    if (!cb) return 0;
    memset(&black, 0, sizeof(black));
    ds.depth = 1.0f;
    ds.stencil = 0;
    barrier(cb, vk.color, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_UNDEFINED,
            VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 0, VK_ACCESS_TRANSFER_WRITE_BIT,
            VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT);
    barrier(cb, vk.depth, dr.aspectMask, VK_IMAGE_LAYOUT_UNDEFINED,
            VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 0, VK_ACCESS_TRANSFER_WRITE_BIT,
            VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT);
    vkCmdClearColorImage(cb, vk.color, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, &black, 1, &cr);
    vkCmdClearDepthStencilImage(cb, vk.depth, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, &ds, 1, &dr);
    barrier(cb, vk.color, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
            VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL, VK_ACCESS_TRANSFER_WRITE_BIT,
            VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT,
            VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT);
    barrier(cb, vk.depth, dr.aspectMask, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
            VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL, VK_ACCESS_TRANSFER_WRITE_BIT,
            VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT,
            VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT);
    oneshot_end(cb);

    vk.sw = w;
    vk.sh = h;
    return 1;
}

static int create_render_pass(void)
{
    VkAttachmentDescription att[2];
    VkAttachmentReference cref = { 0, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL };
    VkAttachmentReference dref = { 1, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL };
    VkSubpassDescription sub;
    VkRenderPassCreateInfo ci = { VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO };

    memset(att, 0, sizeof(att));
    att[0].format = VK_FORMAT_R8G8B8A8_UNORM;
    att[0].samples = VK_SAMPLE_COUNT_1_BIT;
    att[0].loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
    att[0].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    att[0].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    att[0].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    att[0].initialLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    att[0].finalLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    att[1] = att[0];
    att[1].format = vk.depth_format;
    att[1].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
    att[1].stencilStoreOp = VK_ATTACHMENT_STORE_OP_STORE;
    att[1].initialLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    att[1].finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

    memset(&sub, 0, sizeof(sub));
    sub.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    sub.colorAttachmentCount = 1;
    sub.pColorAttachments = &cref;
    sub.pDepthStencilAttachment = &dref;

    ci.attachmentCount = 2;
    ci.pAttachments = att;
    ci.subpassCount = 1;
    ci.pSubpasses = &sub;
    VK_CHECK(vkCreateRenderPass(vk.device, &ci, NULL, &vk.render_pass));
    return 1;
}

/* ── Pipelines ─────────────────────────────────────────────────────── */

static VkShaderModule make_module(const uint32_t *code, size_t size)
{
    VkShaderModuleCreateInfo ci = { VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO };
    VkShaderModule m = VK_NULL_HANDLE;
    ci.codeSize = size;
    ci.pCode = code;
    vkCreateShaderModule(vk.device, &ci, NULL, &m);
    return m;
}

static int create_layouts(void)
{
    VkDescriptorSetLayoutBinding b = { 0 };
    VkDescriptorSetLayoutCreateInfo li = { VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO };
    VkPushConstantRange pr;
    VkPipelineLayoutCreateInfo pi = { VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO };
    VkDescriptorPoolSize ps;
    VkDescriptorPoolCreateInfo dpi = { VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO };
    VkSamplerCreateInfo si = { VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO };

    b.binding = 0;
    b.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    b.descriptorCount = 1;
    b.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
    li.bindingCount = 1;
    li.pBindings = &b;
    VK_CHECK(vkCreateDescriptorSetLayout(vk.device, &li, NULL, &vk.set_layout));

    pr.stageFlags = VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT;
    pr.offset = 0;
    pr.size = sizeof(push_t);
    pi.setLayoutCount = 1;
    pi.pSetLayouts = &vk.set_layout;
    pi.pushConstantRangeCount = 1;
    pi.pPushConstantRanges = &pr;
    VK_CHECK(vkCreatePipelineLayout(vk.device, &pi, NULL, &vk.pipeline_layout));

    ps.type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    ps.descriptorCount = MAX_TEXTURES;
    dpi.flags = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
    dpi.maxSets = MAX_TEXTURES;
    dpi.poolSizeCount = 1;
    dpi.pPoolSizes = &ps;
    VK_CHECK(vkCreateDescriptorPool(vk.device, &dpi, NULL, &vk.desc_pool));

    si.magFilter = VK_FILTER_LINEAR;
    si.minFilter = VK_FILTER_LINEAR;
    si.mipmapMode = VK_SAMPLER_MIPMAP_MODE_NEAREST;
    si.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    si.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    si.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    si.maxLod = 0.0f;
    VK_CHECK(vkCreateSampler(vk.device, &si, NULL, &vk.sampler));

    vk.vs = make_module(gfx_spv_screen_vert, sizeof(gfx_spv_screen_vert));
    vk.fs = make_module(gfx_spv_screen_frag, sizeof(gfx_spv_screen_frag));
    return vk.vs && vk.fs;
}

static VkBlendFactor blend_to_vk(uint16_t gl)
{
    switch (gl) {
    case XBOX_GFX_BLEND_ZERO:                return VK_BLEND_FACTOR_ZERO;
    case XBOX_GFX_BLEND_ONE:                 return VK_BLEND_FACTOR_ONE;
    case XBOX_GFX_BLEND_SRC_COLOR:           return VK_BLEND_FACTOR_SRC_COLOR;
    case XBOX_GFX_BLEND_ONE_MINUS_SRC_COLOR: return VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
    case XBOX_GFX_BLEND_SRC_ALPHA:           return VK_BLEND_FACTOR_SRC_ALPHA;
    case XBOX_GFX_BLEND_ONE_MINUS_SRC_ALPHA: return VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    case XBOX_GFX_BLEND_DST_ALPHA:           return VK_BLEND_FACTOR_DST_ALPHA;
    case XBOX_GFX_BLEND_ONE_MINUS_DST_ALPHA: return VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
    case XBOX_GFX_BLEND_DST_COLOR:           return VK_BLEND_FACTOR_DST_COLOR;
    case XBOX_GFX_BLEND_ONE_MINUS_DST_COLOR: return VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR;
    case XBOX_GFX_BLEND_SRC_ALPHA_SATURATE:  return VK_BLEND_FACTOR_SRC_ALPHA_SATURATE;
    }
    return VK_BLEND_FACTOR_ONE;
}

static VkCompareOp cmp_to_vk(uint16_t gl)
{
    /* GL NEVER..ALWAYS and VkCompareOp share the same order. */
    if (gl >= XBOX_GFX_CMP_NEVER && gl <= XBOX_GFX_CMP_ALWAYS)
        return (VkCompareOp)(gl - XBOX_GFX_CMP_NEVER);
    return VK_COMPARE_OP_ALWAYS;
}

static VkPrimitiveTopology prim_to_vk(uint32_t prim)
{
    switch (prim) {
    case XBOX_GFX_PRIM_POINTS:         return VK_PRIMITIVE_TOPOLOGY_POINT_LIST;
    case XBOX_GFX_PRIM_LINES:          return VK_PRIMITIVE_TOPOLOGY_LINE_LIST;
    case XBOX_GFX_PRIM_LINE_STRIP:     return VK_PRIMITIVE_TOPOLOGY_LINE_STRIP;
    case XBOX_GFX_PRIM_TRIANGLE_STRIP: return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP;
    default:                           return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    }
}

static VkPipeline get_pipeline(uint32_t prim)
{
    pipeline_key key;
    uint32_t i;
    VkPipelineShaderStageCreateInfo stages[2];
    VkVertexInputBindingDescription bind = { 0, sizeof(xbox_gfx_vertex),
                                             VK_VERTEX_INPUT_RATE_VERTEX };
    VkVertexInputAttributeDescription attrs[3] = {
        { 0, 0, VK_FORMAT_R32G32B32A32_SFLOAT, offsetof(xbox_gfx_vertex, x) },
        { 1, 0, VK_FORMAT_R32G32_SFLOAT,       offsetof(xbox_gfx_vertex, u) },
        { 2, 0, VK_FORMAT_B8G8R8A8_UNORM,      offsetof(xbox_gfx_vertex, color) },
    };
    VkPipelineVertexInputStateCreateInfo vi = { VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO };
    VkPipelineInputAssemblyStateCreateInfo ia = { VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO };
    VkPipelineViewportStateCreateInfo vp = { VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO };
    VkPipelineRasterizationStateCreateInfo rs = { VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO };
    VkPipelineMultisampleStateCreateInfo ms = { VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO };
    VkPipelineDepthStencilStateCreateInfo ds = { VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO };
    VkPipelineColorBlendAttachmentState cba;
    VkPipelineColorBlendStateCreateInfo cb = { VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO };
    VkDynamicState dyn[2] = { VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR };
    VkPipelineDynamicStateCreateInfo dy = { VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO };
    VkGraphicsPipelineCreateInfo pi = { VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO };
    VkPipeline p = VK_NULL_HANDLE;

    /* alpha test lives in push constants, so it is not part of the key */
    memset(&key, 0, sizeof(key));
    key.state = vk.state;
    key.state.alpha_test = 0;
    key.state.alpha_func = 0;
    key.state.alpha_ref = 0.0f;
    key.prim = prim;
    for (i = 0; i < vk.pipeline_count; i++)
        if (!memcmp(&vk.pipelines[i].key, &key, sizeof(key)))
            return vk.pipelines[i].pipeline;
    if (vk.pipeline_count == MAX_PIPELINES) {
        VK_LOG("pipeline cache full\n");
        return vk.pipelines[0].pipeline;
    }

    memset(stages, 0, sizeof(stages));
    stages[0].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    stages[0].module = vk.vs;
    stages[0].pName = "main";
    stages[1] = stages[0];
    stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    stages[1].module = vk.fs;

    vi.vertexBindingDescriptionCount = 1;
    vi.pVertexBindingDescriptions = &bind;
    vi.vertexAttributeDescriptionCount = 3;
    vi.pVertexAttributeDescriptions = attrs;
    ia.topology = prim_to_vk(prim);
    vp.viewportCount = 1;
    vp.scissorCount = 1;

    rs.polygonMode = VK_POLYGON_MODE_FILL;
    rs.cullMode = key.state.cull == XBOX_GFX_CULL_BACK ? VK_CULL_MODE_BACK_BIT :
                  key.state.cull == XBOX_GFX_CULL_FRONT ? VK_CULL_MODE_FRONT_BIT :
                  VK_CULL_MODE_NONE;
    rs.frontFace = key.state.front_ccw ? VK_FRONT_FACE_COUNTER_CLOCKWISE
                                       : VK_FRONT_FACE_CLOCKWISE;
    rs.lineWidth = 1.0f;
    ms.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;

    ds.depthTestEnable = key.state.depth_test;
    ds.depthWriteEnable = key.state.depth_test && key.state.depth_write;
    ds.depthCompareOp = cmp_to_vk(key.state.depth_func);

    memset(&cba, 0, sizeof(cba));
    cba.blendEnable = key.state.blend_enable;
    cba.srcColorBlendFactor = blend_to_vk(key.state.blend_src);
    cba.dstColorBlendFactor = blend_to_vk(key.state.blend_dst);
    cba.colorBlendOp = VK_BLEND_OP_ADD;
    cba.srcAlphaBlendFactor = cba.srcColorBlendFactor;
    cba.dstAlphaBlendFactor = cba.dstColorBlendFactor;
    cba.alphaBlendOp = VK_BLEND_OP_ADD;
    cba.colorWriteMask = key.state.color_write_mask & 0xF;
    cb.attachmentCount = 1;
    cb.pAttachments = &cba;

    dy.dynamicStateCount = 2;
    dy.pDynamicStates = dyn;

    pi.stageCount = 2;
    pi.pStages = stages;
    pi.pVertexInputState = &vi;
    pi.pInputAssemblyState = &ia;
    pi.pViewportState = &vp;
    pi.pRasterizationState = &rs;
    pi.pMultisampleState = &ms;
    pi.pDepthStencilState = &ds;
    pi.pColorBlendState = &cb;
    pi.pDynamicState = &dy;
    pi.layout = vk.pipeline_layout;
    pi.renderPass = vk.render_pass;
    if (vkCreateGraphicsPipelines(vk.device, VK_NULL_HANDLE, 1, &pi, NULL, &p) != VK_SUCCESS) {
        VK_LOG("vkCreateGraphicsPipelines failed\n");
        return VK_NULL_HANDLE;
    }
    vk.pipelines[vk.pipeline_count].key = key;
    vk.pipelines[vk.pipeline_count].pipeline = p;
    vk.pipeline_count++;
    return p;
}

/* ── Frame recording ───────────────────────────────────────────────── */

static frame_t *cur_frame(void) { return &vk.frames[vk.cur]; }

static void ensure_recording(void)
{
    frame_t *f = cur_frame();
    VkCommandBufferBeginInfo bi = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO };
    if (vk.recording)
        return;
    vkWaitForFences(vk.device, 1, &f->fence, VK_TRUE, UINT64_MAX);
    vkResetFences(vk.device, 1, &f->fence);
    vkResetCommandBuffer(f->cb, 0);
    bi.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    vkBeginCommandBuffer(f->cb, &bi);
    f->vb_used = 0;
    vk.recording = 1;
}

static void ensure_pass(void)
{
    frame_t *f;
    VkRenderPassBeginInfo bi = { VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO };
    VkViewport v;
    VkRect2D sc;
    ensure_recording();
    if (vk.in_pass)
        return;
    f = cur_frame();
    bi.renderPass = vk.render_pass;
    bi.framebuffer = vk.framebuffer;
    bi.renderArea.extent.width = vk.sw;
    bi.renderArea.extent.height = vk.sh;
    vkCmdBeginRenderPass(f->cb, &bi, VK_SUBPASS_CONTENTS_INLINE);
    v.x = 0.0f;
    v.y = 0.0f;
    v.width = (float)vk.sw;
    v.height = (float)vk.sh;
    v.minDepth = 0.0f;
    v.maxDepth = 1.0f;
    sc.offset.x = sc.offset.y = 0;
    sc.extent.width = vk.sw;
    sc.extent.height = vk.sh;
    vkCmdSetViewport(f->cb, 0, 1, &v);
    vkCmdSetScissor(f->cb, 0, 1, &sc);
    vk.in_pass = 1;
}

static void end_pass(void)
{
    if (vk.in_pass) {
        vkCmdEndRenderPass(cur_frame()->cb);
        vk.in_pass = 0;
    }
}

/* Submit what has been recorded and wait for it (used mid-frame). */
static void flush_and_wait(void)
{
    frame_t *f = cur_frame();
    VkSubmitInfo si = { VK_STRUCTURE_TYPE_SUBMIT_INFO };
    if (!vk.recording)
        return;
    end_pass();
    vkEndCommandBuffer(f->cb);
    si.commandBufferCount = 1;
    si.pCommandBuffers = &f->cb;
    vkQueueSubmit(vk.queue, 1, &si, f->fence);
    vkWaitForFences(vk.device, 1, &f->fence, VK_TRUE, UINT64_MAX);
    vk.recording = 0;
}

/* ── Backend ops ───────────────────────────────────────────────────── */

static void vk_shutdown(void);
static xbox_gfx_texture *vk_texture_create(uint32_t w, uint32_t h, xbox_gfx_format fmt);
static int vk_texture_upload(xbox_gfx_texture *base, const void *data, size_t size,
                             uint32_t pitch);

static int create_frames(void)
{
    VkCommandPoolCreateInfo pi = { VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO };
    VkCommandBufferAllocateInfo ai = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO };
    VkFenceCreateInfo fi = { VK_STRUCTURE_TYPE_FENCE_CREATE_INFO };
    VkSemaphoreCreateInfo si = { VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO };
    uint32_t i;

    pi.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    pi.queueFamilyIndex = vk.queue_family;
    VK_CHECK(vkCreateCommandPool(vk.device, &pi, NULL, &vk.pool));
    ai.commandPool = vk.pool;
    ai.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    ai.commandBufferCount = 1;
    fi.flags = VK_FENCE_CREATE_SIGNALED_BIT;
    for (i = 0; i < FRAMES_IN_FLIGHT; i++) {
        frame_t *f = &vk.frames[i];
        VK_CHECK(vkAllocateCommandBuffers(vk.device, &ai, &f->cb));
        VK_CHECK(vkCreateFence(vk.device, &fi, NULL, &f->fence));
        VK_CHECK(vkCreateSemaphore(vk.device, &si, NULL, &f->acquired));
        if (!create_buffer(VB_SIZE, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,
                           &f->vb, &f->vb_mem, (void **)&f->vb_map))
            return 0;
    }
    return 1;
}

static int vk_init(const xbox_gfx_config *cfg)
{
    static const uint32_t white = 0xFFFFFFFFu;

    memset(&vk, 0, sizeof(vk));
    vk.headless = cfg->headless;
    vk.vsync = cfg->vsync;

    if (!vk.headless) {
        if (SDL_InitSubSystem(SDL_INIT_VIDEO) != 0) {
            VK_LOG("SDL video init failed: %s\n", SDL_GetError());
            return 0;
        }
        vk.window = SDL_CreateWindow(cfg->window_title, SDL_WINDOWPOS_CENTERED,
                                     SDL_WINDOWPOS_CENTERED, (int)cfg->width,
                                     (int)cfg->height,
                                     SDL_WINDOW_VULKAN | SDL_WINDOW_RESIZABLE |
                                     SDL_WINDOW_ALLOW_HIGHDPI);
        if (!vk.window) {
            VK_LOG("SDL_CreateWindow failed: %s\n", SDL_GetError());
            SDL_QuitSubSystem(SDL_INIT_VIDEO);
            return 0;
        }
    }

    if (!create_instance(cfg->validation))
        goto fail;
    if (!vk.headless && !SDL_Vulkan_CreateSurface(vk.window, vk.instance, &vk.surface)) {
        VK_LOG("SDL_Vulkan_CreateSurface failed: %s\n", SDL_GetError());
        goto fail;
    }
    if (!pick_device() || !create_device())
        goto fail;
    vk.depth_format = pick_depth_format();
    if (vk.depth_format == VK_FORMAT_UNDEFINED) {
        VK_LOG("no depth/stencil format\n");
        goto fail;
    }
    if (!create_frames() || !create_render_pass() || !create_layouts())
        goto fail;
    if (!create_surface_targets(640, 480))
        goto fail;
    if (!vk.headless && !create_swapchain())
        vk.sc_dirty = 1;

    xbox_gfx_state_default(&vk.state);
    vk.white = (vk_texture *)vk_texture_create(1, 1, XBOX_GFX_FMT_RGBA8);
    if (!vk.white)
        goto fail;
    vk.white->base.width = vk.white->base.height = 1;
    vk.white->base.format = XBOX_GFX_FMT_RGBA8;
    vk_texture_upload(&vk.white->base, &white, sizeof(white), 4);
    return 1;

fail:
    vk_shutdown();
    return 0;
}

static void vk_shutdown(void)
{
    uint32_t i;
    if (vk.device) {
        vkDeviceWaitIdle(vk.device);
        if (vk.white) {
            vkDestroyImageView(vk.device, vk.white->view, NULL);
            vkDestroyImage(vk.device, vk.white->image, NULL);
            vkFreeMemory(vk.device, vk.white->memory, NULL);
            free(vk.white);
        }
        for (i = 0; i < vk.pipeline_count; i++)
            vkDestroyPipeline(vk.device, vk.pipelines[i].pipeline, NULL);
        for (i = 0; i < FRAMES_IN_FLIGHT; i++) {
            frame_t *f = &vk.frames[i];
            if (f->vb) vkDestroyBuffer(vk.device, f->vb, NULL);
            if (f->vb_mem) vkFreeMemory(vk.device, f->vb_mem, NULL);
            if (f->fence) vkDestroyFence(vk.device, f->fence, NULL);
            if (f->acquired) vkDestroySemaphore(vk.device, f->acquired, NULL);
        }
        destroy_surface_targets();
        destroy_swapchain();
        if (vk.vs) vkDestroyShaderModule(vk.device, vk.vs, NULL);
        if (vk.fs) vkDestroyShaderModule(vk.device, vk.fs, NULL);
        if (vk.sampler) vkDestroySampler(vk.device, vk.sampler, NULL);
        if (vk.desc_pool) vkDestroyDescriptorPool(vk.device, vk.desc_pool, NULL);
        if (vk.pipeline_layout) vkDestroyPipelineLayout(vk.device, vk.pipeline_layout, NULL);
        if (vk.set_layout) vkDestroyDescriptorSetLayout(vk.device, vk.set_layout, NULL);
        if (vk.render_pass) vkDestroyRenderPass(vk.device, vk.render_pass, NULL);
        if (vk.pool) vkDestroyCommandPool(vk.device, vk.pool, NULL);
        vkDestroyDevice(vk.device, NULL);
    }
    if (vk.surface) vkDestroySurfaceKHR(vk.instance, vk.surface, NULL);
    if (vk.instance) vkDestroyInstance(vk.instance, NULL);
    if (vk.window) {
        SDL_DestroyWindow(vk.window);
        SDL_QuitSubSystem(SDL_INIT_VIDEO);
    }
    memset(&vk, 0, sizeof(vk));
}

static int vk_pump_events(void)
{
    SDL_Event e;
    int running = 1;
    if (vk.headless)
        return 1;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT)
            running = 0;
        else if (e.type == SDL_WINDOWEVENT &&
                 e.window.event == SDL_WINDOWEVENT_SIZE_CHANGED)
            vk.sc_dirty = 1;
    }
    return running;
}

static void vk_set_surface_size(uint32_t w, uint32_t h)
{
    if (w == vk.sw && h == vk.sh)
        return;
    flush_and_wait();
    vkDeviceWaitIdle(vk.device);
    destroy_surface_targets();
    if (!create_surface_targets(w, h))
        VK_LOG("failed to resize NV2A surface to %ux%u\n", w, h);
}

static void vk_clear(uint32_t flags, uint32_t argb, float depth, uint32_t stencil)
{
    VkClearAttachment att[2];
    VkClearRect rect;
    uint32_t n = 0;

    ensure_pass();
    memset(att, 0, sizeof(att));
    if (flags & XBOX_GFX_CLEAR_COLOR) {
        att[n].aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        att[n].colorAttachment = 0;
        att[n].clearValue.color.float32[0] = ((argb >> 16) & 0xFF) / 255.0f;
        att[n].clearValue.color.float32[1] = ((argb >> 8) & 0xFF) / 255.0f;
        att[n].clearValue.color.float32[2] = (argb & 0xFF) / 255.0f;
        att[n].clearValue.color.float32[3] = ((argb >> 24) & 0xFF) / 255.0f;
        n++;
    }
    if (flags & (XBOX_GFX_CLEAR_DEPTH | XBOX_GFX_CLEAR_STENCIL)) {
        if (flags & XBOX_GFX_CLEAR_DEPTH)   att[n].aspectMask |= VK_IMAGE_ASPECT_DEPTH_BIT;
        if (flags & XBOX_GFX_CLEAR_STENCIL) att[n].aspectMask |= VK_IMAGE_ASPECT_STENCIL_BIT;
        att[n].clearValue.depthStencil.depth = depth;
        att[n].clearValue.depthStencil.stencil = stencil;
        n++;
    }
    if (!n) return;
    rect.rect.offset.x = rect.rect.offset.y = 0;
    rect.rect.extent.width = vk.sw;
    rect.rect.extent.height = vk.sh;
    rect.baseArrayLayer = 0;
    rect.layerCount = 1;
    vkCmdClearAttachments(cur_frame()->cb, n, att, 1, &rect);
}

static void vk_set_state(const xbox_gfx_state *st)
{
    vk.state = *st;
}

static VkFormat fmt_to_vk(xbox_gfx_format f)
{
    switch (f) {
    case XBOX_GFX_FMT_BGRA8: return VK_FORMAT_B8G8R8A8_UNORM;
    case XBOX_GFX_FMT_RGBA8: return VK_FORMAT_R8G8B8A8_UNORM;
    case XBOX_GFX_FMT_BC1:   return VK_FORMAT_BC1_RGBA_UNORM_BLOCK;
    case XBOX_GFX_FMT_BC2:   return VK_FORMAT_BC2_UNORM_BLOCK;
    case XBOX_GFX_FMT_BC3:   return VK_FORMAT_BC3_UNORM_BLOCK;
    }
    return VK_FORMAT_UNDEFINED;
}

static xbox_gfx_texture *vk_texture_create(uint32_t w, uint32_t h, xbox_gfx_format fmt)
{
    vk_texture *t;
    VkDescriptorSetAllocateInfo ai = { VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO };
    VkDescriptorImageInfo ii;
    VkWriteDescriptorSet wr = { VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET };
    VkCommandBuffer cb;

    if (xbox_gfx_format_is_compressed(fmt) && !vk.bc_supported) {
        VK_LOG("BC textures unsupported on this device\n");
        return NULL;
    }
    t = (vk_texture *)calloc(1, sizeof(*t));
    if (!t) return NULL;
    if (!create_image(w, h, fmt_to_vk(fmt),
                      VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                      VK_IMAGE_ASPECT_COLOR_BIT, &t->image, &t->memory, &t->view)) {
        free(t);
        return NULL;
    }
    /* Sampleable from the start, even before the first upload. */
    cb = oneshot_begin();
    barrier(cb, t->image, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_UNDEFINED,
            VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, 0, VK_ACCESS_SHADER_READ_BIT,
            VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);
    oneshot_end(cb);

    ai.descriptorPool = vk.desc_pool;
    ai.descriptorSetCount = 1;
    ai.pSetLayouts = &vk.set_layout;
    if (vkAllocateDescriptorSets(vk.device, &ai, &t->set) != VK_SUCCESS) {
        VK_LOG("descriptor pool exhausted\n");
        vkDestroyImageView(vk.device, t->view, NULL);
        vkDestroyImage(vk.device, t->image, NULL);
        vkFreeMemory(vk.device, t->memory, NULL);
        free(t);
        return NULL;
    }
    ii.sampler = vk.sampler;
    ii.imageView = t->view;
    ii.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    wr.dstSet = t->set;
    wr.descriptorCount = 1;
    wr.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    wr.pImageInfo = &ii;
    vkUpdateDescriptorSets(vk.device, 1, &wr, 0, NULL);
    return &t->base;
}

static int vk_texture_upload(xbox_gfx_texture *base, const void *data, size_t size,
                             uint32_t pitch)
{
    vk_texture *t = (vk_texture *)base;
    int compressed = xbox_gfx_format_is_compressed(base->format);
    uint32_t block_bytes = base->format == XBOX_GFX_FMT_BC1 ? 8 : 16;
    uint32_t rows = compressed ? (base->height + 3) / 4 : base->height;
    VkBuffer staging;
    VkDeviceMemory staging_mem;
    void *map;
    VkDeviceSize bytes;
    VkBufferImageCopy region;
    VkCommandBuffer cb;
    (void)size;

    if (!pitch)
        pitch = compressed ? (base->width + 3) / 4 * block_bytes : base->width * 4;
    bytes = (VkDeviceSize)pitch * rows;

    /* Draws already recorded must sample the old contents first. */
    flush_and_wait();
    if (!create_buffer(bytes, VK_BUFFER_USAGE_TRANSFER_SRC_BIT, &staging, &staging_mem, &map))
        return 0;
    memcpy(map, data, (size_t)bytes);

    memset(&region, 0, sizeof(region));
    region.bufferRowLength = compressed ? pitch / block_bytes * 4 : pitch / 4;
    region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    region.imageSubresource.layerCount = 1;
    region.imageExtent.width = base->width;
    region.imageExtent.height = base->height;
    region.imageExtent.depth = 1;

    cb = oneshot_begin();
    barrier(cb, t->image, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
            VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_ACCESS_SHADER_READ_BIT,
            VK_ACCESS_TRANSFER_WRITE_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
            VK_PIPELINE_STAGE_TRANSFER_BIT);
    vkCmdCopyBufferToImage(cb, staging, t->image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                           1, &region);
    barrier(cb, t->image, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
            VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, VK_ACCESS_TRANSFER_WRITE_BIT,
            VK_ACCESS_SHADER_READ_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT,
            VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);
    oneshot_end(cb);

    vkDestroyBuffer(vk.device, staging, NULL);
    vkFreeMemory(vk.device, staging_mem, NULL);
    return 1;
}

static void vk_texture_destroy(xbox_gfx_texture *base)
{
    vk_texture *t = (vk_texture *)base;
    flush_and_wait();
    vkDeviceWaitIdle(vk.device);
    if (vk.bound == t)
        vk.bound = NULL;
    vkFreeDescriptorSets(vk.device, vk.desc_pool, 1, &t->set);
    vkDestroyImageView(vk.device, t->view, NULL);
    vkDestroyImage(vk.device, t->image, NULL);
    vkFreeMemory(vk.device, t->memory, NULL);
    free(t);
}

static void vk_bind_texture(uint32_t stage, xbox_gfx_texture *tex)
{
    if (stage == 0)
        vk.bound = (vk_texture *)tex;
}

static void vk_draw(xbox_gfx_primitive prim, const xbox_gfx_vertex *v, uint32_t n)
{
    frame_t *f;
    VkDeviceSize bytes = (VkDeviceSize)n * sizeof(*v);
    VkDeviceSize offset;
    VkPipeline p;
    push_t pc;
    vk_texture *tex = vk.bound ? vk.bound : vk.white;

    if (bytes > VB_SIZE)
        return;
    ensure_pass();
    f = cur_frame();
    if (f->vb_used + bytes > VB_SIZE) {
        /* Out of vertex space this frame: drain the GPU and reuse it. */
        flush_and_wait();
        ensure_pass();
        f = cur_frame();
    }
    p = get_pipeline(prim);
    if (!p) return;

    offset = f->vb_used;
    memcpy(f->vb_map + offset, v, (size_t)bytes);
    f->vb_used = (offset + bytes + 15) & ~(VkDeviceSize)15;

    pc.surface_w = (float)vk.sw;
    pc.surface_h = (float)vk.sh;
    pc.alpha_func = vk.state.alpha_test && vk.state.alpha_func >= XBOX_GFX_CMP_NEVER &&
                    vk.state.alpha_func <= XBOX_GFX_CMP_ALWAYS
                    ? (uint32_t)(vk.state.alpha_func - XBOX_GFX_CMP_NEVER) : 7u;
    pc.alpha_ref = vk.state.alpha_ref;

    vkCmdBindPipeline(f->cb, VK_PIPELINE_BIND_POINT_GRAPHICS, p);
    vkCmdBindDescriptorSets(f->cb, VK_PIPELINE_BIND_POINT_GRAPHICS, vk.pipeline_layout,
                            0, 1, &tex->set, 0, NULL);
    vkCmdPushConstants(f->cb, vk.pipeline_layout,
                       VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT,
                       0, sizeof(pc), &pc);
    vkCmdBindVertexBuffers(f->cb, 0, 1, &f->vb, &offset);
    vkCmdDraw(f->cb, n, 1, 0, 0);
}

/* Record the letterboxed blit of the NV2A surface into swapchain image idx. */
static void record_blit(VkCommandBuffer cb, uint32_t idx)
{
    VkImage dst = vk.sc_images[idx];
    VkClearColorValue black;
    VkImageSubresourceRange range = { VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1 };
    VkImageBlit blit;
    float scale_x = (float)vk.sc_extent.width / vk.sw;
    float scale_y = (float)vk.sc_extent.height / vk.sh;
    float scale = scale_x < scale_y ? scale_x : scale_y;
    int32_t out_w = (int32_t)(vk.sw * scale), out_h = (int32_t)(vk.sh * scale);
    int32_t x0 = ((int32_t)vk.sc_extent.width - out_w) / 2;
    int32_t y0 = ((int32_t)vk.sc_extent.height - out_h) / 2;

    barrier(cb, vk.color, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL,
            VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT,
            VK_ACCESS_TRANSFER_READ_BIT, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
            VK_PIPELINE_STAGE_TRANSFER_BIT);
    barrier(cb, dst, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_UNDEFINED,
            VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 0, VK_ACCESS_TRANSFER_WRITE_BIT,
            VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT);
    memset(&black, 0, sizeof(black));
    vkCmdClearColorImage(cb, dst, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, &black, 1, &range);

    memset(&blit, 0, sizeof(blit));
    blit.srcSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    blit.srcSubresource.layerCount = 1;
    blit.srcOffsets[1].x = (int32_t)vk.sw;
    blit.srcOffsets[1].y = (int32_t)vk.sh;
    blit.srcOffsets[1].z = 1;
    blit.dstSubresource = blit.srcSubresource;
    blit.dstOffsets[0].x = x0;
    blit.dstOffsets[0].y = y0;
    blit.dstOffsets[1].x = x0 + out_w;
    blit.dstOffsets[1].y = y0 + out_h;
    blit.dstOffsets[1].z = 1;
    {
        /* Order the clear before the blit that overwrites part of it. */
        VkMemoryBarrier mb = { VK_STRUCTURE_TYPE_MEMORY_BARRIER };
        mb.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        mb.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        vkCmdPipelineBarrier(cb, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT,
                             0, 1, &mb, 0, NULL, 0, NULL);
    }
    vkCmdBlitImage(cb, vk.color, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                   dst, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &blit, VK_FILTER_LINEAR);

    barrier(cb, dst, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
            VK_IMAGE_LAYOUT_PRESENT_SRC_KHR, VK_ACCESS_TRANSFER_WRITE_BIT, 0,
            VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT);
    barrier(cb, vk.color, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
            VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL, VK_ACCESS_TRANSFER_READ_BIT,
            VK_ACCESS_COLOR_ATTACHMENT_READ_BIT | VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT,
            VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT);
}

static void vk_present(void)
{
    frame_t *f;
    uint32_t idx = 0;
    int have_image = 0;
    VkSubmitInfo si = { VK_STRUCTURE_TYPE_SUBMIT_INFO };
    VkPipelineStageFlags wait_stage = VK_PIPELINE_STAGE_TRANSFER_BIT;

    ensure_recording();
    end_pass();
    f = cur_frame();

    if (!vk.headless) {
        if (vk.sc_dirty)
            create_swapchain();
        if (vk.swapchain) {
            VkResult r = vkAcquireNextImageKHR(vk.device, vk.swapchain, UINT64_MAX,
                                               f->acquired, VK_NULL_HANDLE, &idx);
            if (r == VK_SUCCESS || r == VK_SUBOPTIMAL_KHR) {
                have_image = 1;
                if (r == VK_SUBOPTIMAL_KHR)
                    vk.sc_dirty = 1;
            } else {
                vk.sc_dirty = 1;
            }
        }
    }
    if (have_image)
        record_blit(f->cb, idx);

    vkEndCommandBuffer(f->cb);
    si.commandBufferCount = 1;
    si.pCommandBuffers = &f->cb;
    if (have_image) {
        si.waitSemaphoreCount = 1;
        si.pWaitSemaphores = &f->acquired;
        si.pWaitDstStageMask = &wait_stage;
        si.signalSemaphoreCount = 1;
        si.pSignalSemaphores = &vk.sc_done[idx];
    }
    vkQueueSubmit(vk.queue, 1, &si, f->fence);
    vk.recording = 0;

    if (have_image) {
        VkPresentInfoKHR pi = { VK_STRUCTURE_TYPE_PRESENT_INFO_KHR };
        VkResult r;
        pi.waitSemaphoreCount = 1;
        pi.pWaitSemaphores = &vk.sc_done[idx];
        pi.swapchainCount = 1;
        pi.pSwapchains = &vk.swapchain;
        pi.pImageIndices = &idx;
        r = vkQueuePresentKHR(vk.queue, &pi);
        if (r == VK_ERROR_OUT_OF_DATE_KHR || r == VK_SUBOPTIMAL_KHR)
            vk.sc_dirty = 1;
    }
    vk.cur = (vk.cur + 1) % FRAMES_IN_FLIGHT;
}

static int vk_read_surface(uint8_t *rgba, size_t size)
{
    VkDeviceSize bytes = (VkDeviceSize)vk.sw * vk.sh * 4;
    VkBuffer buf;
    VkDeviceMemory mem;
    void *map;
    VkBufferImageCopy region;
    VkCommandBuffer cb;

    if (size < bytes)
        return 0;
    flush_and_wait();
    if (!create_buffer(bytes, VK_BUFFER_USAGE_TRANSFER_DST_BIT, &buf, &mem, &map))
        return 0;
    memset(&region, 0, sizeof(region));
    region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    region.imageSubresource.layerCount = 1;
    region.imageExtent.width = vk.sw;
    region.imageExtent.height = vk.sh;
    region.imageExtent.depth = 1;

    cb = oneshot_begin();
    barrier(cb, vk.color, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL,
            VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT,
            VK_ACCESS_TRANSFER_READ_BIT, VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
            VK_PIPELINE_STAGE_TRANSFER_BIT);
    vkCmdCopyImageToBuffer(cb, vk.color, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, buf, 1, &region);
    barrier(cb, vk.color, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
            VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL, VK_ACCESS_TRANSFER_READ_BIT,
            VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT,
            VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT);
    oneshot_end(cb);

    memcpy(rgba, map, (size_t)bytes);
    vkDestroyBuffer(vk.device, buf, NULL);
    vkFreeMemory(vk.device, mem, NULL);
    return 1;
}

const xbox_gfx_backend_ops xbox_gfx_vulkan_ops = {
    "vulkan",
    vk_init, vk_shutdown, vk_pump_events, vk_set_surface_size,
    vk_clear, vk_set_state,
    vk_texture_create, vk_texture_upload, vk_texture_destroy,
    vk_bind_texture, vk_draw, vk_present,
    vk_read_surface,
};
