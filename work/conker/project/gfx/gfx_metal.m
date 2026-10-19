/*
 * Metal backend for xbox_gfx (macOS) -- SKELETON.
 *
 * Status: window, device, offscreen NV2A surface, clear and present are
 * written; textures, pipeline state and draws are not. It has not been
 * compiled yet (it was written on Linux). Until it is finished, macOS builds
 * should use the Vulkan backend through MoltenVK (XBOX_GFX_BACKEND=vulkan),
 * which xbox_gfx_init falls back to automatically.
 *
 * The intended shape mirrors gfx_vulkan.c so both stay easy to compare:
 *   - one offscreen colour + depth texture at NV2A surface size
 *   - a render command encoder kept open between clears/draws (LOAD actions)
 *   - present() blits the surface into the CAMetalLayer drawable
 *   - shaders: the same GLSL as Vulkan, cross-compiled to MSL with
 *     SPIRV-Cross at build time (see docs/technical/porting.md)
 */

#import <Metal/Metal.h>
#import <QuartzCore/CAMetalLayer.h>
#include <SDL.h>
#include <SDL_metal.h>

#include "gfx_internal.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MTL_LOG(...) fprintf(stderr, "[GFX-MTL] " __VA_ARGS__)

static struct {
    int headless;
    SDL_Window *window;
    SDL_MetalView view;
    CAMetalLayer *layer;
    id<MTLDevice> device;
    id<MTLCommandQueue> queue;
    id<MTLTexture> color;
    id<MTLTexture> depth;
    id<MTLCommandBuffer> cmd;
    uint32_t sw, sh;
} mtl;

static int create_surface_targets(uint32_t w, uint32_t h)
{
    MTLTextureDescriptor *cd = [MTLTextureDescriptor
        texture2DDescriptorWithPixelFormat:MTLPixelFormatRGBA8Unorm
                                     width:w height:h mipmapped:NO];
    cd.usage = MTLTextureUsageRenderTarget | MTLTextureUsageShaderRead;
    cd.storageMode = MTLStorageModePrivate;
    mtl.color = [mtl.device newTextureWithDescriptor:cd];

    /* Apple GPUs have no D24S8; D32Float_S8 is the portable choice. */
    MTLTextureDescriptor *dd = [MTLTextureDescriptor
        texture2DDescriptorWithPixelFormat:MTLPixelFormatDepth32Float_Stencil8
                                     width:w height:h mipmapped:NO];
    dd.usage = MTLTextureUsageRenderTarget;
    dd.storageMode = MTLStorageModePrivate;
    mtl.depth = [mtl.device newTextureWithDescriptor:dd];

    mtl.sw = w;
    mtl.sh = h;
    return mtl.color != nil && mtl.depth != nil;
}

static id<MTLCommandBuffer> cmd(void)
{
    if (!mtl.cmd)
        mtl.cmd = [mtl.queue commandBuffer];
    return mtl.cmd;
}

static int mtl_init(const xbox_gfx_config *cfg)
{
    memset(&mtl, 0, sizeof(mtl));
    mtl.headless = cfg->headless;
    mtl.device = MTLCreateSystemDefaultDevice();
    if (!mtl.device) {
        MTL_LOG("no Metal device\n");
        return 0;
    }
    mtl.queue = [mtl.device newCommandQueue];

    if (!mtl.headless) {
        if (SDL_InitSubSystem(SDL_INIT_VIDEO) != 0)
            return 0;
        mtl.window = SDL_CreateWindow(cfg->window_title, SDL_WINDOWPOS_CENTERED,
                                      SDL_WINDOWPOS_CENTERED, (int)cfg->width,
                                      (int)cfg->height,
                                      SDL_WINDOW_METAL | SDL_WINDOW_RESIZABLE |
                                      SDL_WINDOW_ALLOW_HIGHDPI);
        if (!mtl.window)
            return 0;
        mtl.view = SDL_Metal_CreateView(mtl.window);
        mtl.layer = (__bridge CAMetalLayer *)SDL_Metal_GetLayer(mtl.view);
        mtl.layer.device = mtl.device;
        mtl.layer.pixelFormat = MTLPixelFormatBGRA8Unorm;
        mtl.layer.framebufferOnly = NO;   /* present() blits into it */
        mtl.layer.displaySyncEnabled = cfg->vsync ? YES : NO;
    }
    MTL_LOG("device: %s\n", [[mtl.device name] UTF8String]);
    return create_surface_targets(640, 480);
}

static void mtl_shutdown(void)
{
    mtl.cmd = nil;
    mtl.color = nil;
    mtl.depth = nil;
    mtl.queue = nil;
    mtl.device = nil;
    if (mtl.view)
        SDL_Metal_DestroyView(mtl.view);
    if (mtl.window) {
        SDL_DestroyWindow(mtl.window);
        SDL_QuitSubSystem(SDL_INIT_VIDEO);
    }
    memset(&mtl, 0, sizeof(mtl));
}

static int mtl_pump_events(void)
{
    SDL_Event e;
    int running = 1;
    while (!mtl.headless && SDL_PollEvent(&e))
        if (e.type == SDL_QUIT)
            running = 0;
    return running;
}

static void mtl_set_surface_size(uint32_t w, uint32_t h)
{
    if (w != mtl.sw || h != mtl.sh)
        create_surface_targets(w, h);
}

static void mtl_clear(uint32_t flags, uint32_t argb, float depth, uint32_t stencil)
{
    /* TODO: keep one encoder open and clear with a full-surface quad so a
     * clear does not split the pass; this version opens a pass per clear. */
    MTLRenderPassDescriptor *rp = [MTLRenderPassDescriptor renderPassDescriptor];
    rp.colorAttachments[0].texture = mtl.color;
    rp.colorAttachments[0].loadAction = (flags & XBOX_GFX_CLEAR_COLOR)
        ? MTLLoadActionClear : MTLLoadActionLoad;
    rp.colorAttachments[0].clearColor = MTLClearColorMake(
        ((argb >> 16) & 0xFF) / 255.0, ((argb >> 8) & 0xFF) / 255.0,
        (argb & 0xFF) / 255.0, ((argb >> 24) & 0xFF) / 255.0);
    rp.colorAttachments[0].storeAction = MTLStoreActionStore;
    rp.depthAttachment.texture = mtl.depth;
    rp.depthAttachment.loadAction = (flags & XBOX_GFX_CLEAR_DEPTH)
        ? MTLLoadActionClear : MTLLoadActionLoad;
    rp.depthAttachment.clearDepth = depth;
    rp.depthAttachment.storeAction = MTLStoreActionStore;
    rp.stencilAttachment.texture = mtl.depth;
    rp.stencilAttachment.loadAction = (flags & XBOX_GFX_CLEAR_STENCIL)
        ? MTLLoadActionClear : MTLLoadActionLoad;
    rp.stencilAttachment.clearStencil = stencil;
    rp.stencilAttachment.storeAction = MTLStoreActionStore;
    [[cmd() renderCommandEncoderWithDescriptor:rp] endEncoding];
}

/* TODO(metal): pipeline state cache keyed like gfx_vulkan.c get_pipeline(). */
static void mtl_set_state(const xbox_gfx_state *st) { (void)st; }

/* TODO(metal): MTLPixelFormatBC1_RGBA etc. are available on all Macs. */
static xbox_gfx_texture *mtl_texture_create(uint32_t w, uint32_t h, xbox_gfx_format fmt)
{
    (void)w; (void)h; (void)fmt;
    return NULL;
}

static int mtl_texture_upload(xbox_gfx_texture *t, const void *d, size_t s, uint32_t p)
{
    (void)t; (void)d; (void)s; (void)p;
    return 0;
}

static void mtl_texture_destroy(xbox_gfx_texture *t) { free(t); }
static void mtl_bind_texture(uint32_t stage, xbox_gfx_texture *t) { (void)stage; (void)t; }

/* TODO(metal): encode into the open render encoder with setVertexBytes /
 * a per-frame MTLBuffer ring, same vertex layout as gfx_vulkan.c. */
static void mtl_draw(xbox_gfx_primitive prim, const xbox_gfx_vertex *v, uint32_t n)
{
    (void)prim; (void)v; (void)n;
}

static void mtl_present(void)
{
    id<MTLCommandBuffer> cb = cmd();
    if (mtl.layer) {
        id<CAMetalDrawable> drawable = [mtl.layer nextDrawable];
        if (drawable) {
            /* TODO(metal): letterboxed scale like the Vulkan blit; a blit
             * encoder cannot scale, so this needs a full-screen quad pass. */
            id<MTLBlitCommandEncoder> blit = [cb blitCommandEncoder];
            NSUInteger w = MIN(mtl.sw, drawable.texture.width);
            NSUInteger h = MIN(mtl.sh, drawable.texture.height);
            [blit copyFromTexture:mtl.color sourceSlice:0 sourceLevel:0
                     sourceOrigin:MTLOriginMake(0, 0, 0)
                       sourceSize:MTLSizeMake(w, h, 1)
                        toTexture:drawable.texture destinationSlice:0
                 destinationLevel:0 destinationOrigin:MTLOriginMake(0, 0, 0)];
            [blit endEncoding];
            [cb presentDrawable:drawable];
        }
    }
    [cb commit];
    mtl.cmd = nil;
}

const xbox_gfx_backend_ops xbox_gfx_metal_ops = {
    "metal",
    mtl_init, mtl_shutdown, mtl_pump_events, mtl_set_surface_size,
    mtl_clear, mtl_set_state,
    mtl_texture_create, mtl_texture_upload, mtl_texture_destroy,
    mtl_bind_texture, mtl_draw, mtl_present,
    NULL,
};
