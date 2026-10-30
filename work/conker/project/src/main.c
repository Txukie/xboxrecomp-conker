/*
 * Conker: Live and Reloaded -- host entry point.
 *
 * Boot order follows external/xboxrecomp/templates/new-game/src/main.c:
 * fault handler, XBE, memory layout, kernel, paths, kernel bridge, stack,
 * flat dispatch, watchdog, entry point. Everything OS-specific (fault
 * handling, symbol lookup, default save folder) is in host_win32.c /
 * host_posix.c behind conker_host.h.
 *
 * XBE: title ID 0x4D530051, XDK 5849, entry 0x0042F0E9, 27 sections,
 * 145 kernel imports, statically linked D3D8LTCG (so rendering goes through
 * the toolkit's pushbuffer executor, RECOMP_PB_EXEC).
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <xbox/xboxrecomp.h>
#include "conker_host.h"
#include "conker_install.h"
#include "conker_mods.h"
#include "conker_settings.h"
#include "ohci.h"
#ifdef CONKER_HAVE_VULKAN
#include "nv2a_vk.h"
#endif

#define CONKER_ENTRY_POINT 0x0042F0E9u

#ifndef MAX_PATH
#define MAX_PATH 260
#endif

/* The register file is thread-local in the runtime; a plain extern would
 * resolve to the TLS template rather than this thread's copy. */
extern RECOMP_TLS uint32_t g_eax, g_ecx, g_edx, g_esp;
extern RECOMP_TLS uint32_t g_ebx, g_esi, g_edi, g_seh_ebp;
extern ptrdiff_t g_xbox_mem_offset;

typedef void (*recomp_func_t)(void);
recomp_func_t recomp_lookup(uint32_t xbox_va);
int recomp_dispatch_init(void);

typedef struct MCPXAPUState MCPXAPUState;
extern MCPXAPUState *mcpx_apu_init_standalone(uint8_t *ram_ptr);
extern MCPXAPUState *g_apu_state;

void conker_dump_xbox_state(void)
{
    fprintf(stderr,
            "[CONKER] xbox regs eax=%08X ecx=%08X edx=%08X esp=%08X "
            "ebx=%08X esi=%08X edi=%08X ebp=%08X\n",
            g_eax, g_ecx, g_edx, g_esp, g_ebx, g_esi, g_edi, g_seh_ebp);

    /* Lifted calls push their guest return address, so return addresses
     * on the guest stack recover the guest call chain (FPO frames have no
     * ebp chain to walk; this over-reports, which is fine at a crash). */
    if (g_xbox_mem_offset && g_esp) {
        const uint32_t *sp = (const uint32_t *)((uintptr_t)g_xbox_mem_offset + g_esp);
        int i, shown = 0;
        fprintf(stderr, "[CONKER] guest stack (return addresses, innermost first):");
        for (i = 0; i < 256 && shown < 24; i++) {
            if (sp[i] > g_xbox_code_lo && sp[i] < g_xbox_code_hi) {
                fprintf(stderr, " %08X", sp[i]);
                shown++;
            }
        }
        fprintf(stderr, shown ? "\n" : " (none in range)\n");
    }
    fflush(stderr);
}

static int load_file(const char *path, void **data_out, size_t *size_out)
{
    FILE *file = fopen(path, "rb");
    long file_size;
    void *data;

    if (!file) {
        fprintf(stderr, "[CONKER] cannot open %s\n", path);
        return 0;
    }
    if (fseek(file, 0, SEEK_END) != 0 || (file_size = ftell(file)) <= 0 ||
        fseek(file, 0, SEEK_SET) != 0) {
        fclose(file);
        return 0;
    }

    data = malloc((size_t)file_size);
    if (!data || fread(data, 1, (size_t)file_size, file) != (size_t)file_size) {
        free(data);
        fclose(file);
        return 0;
    }
    fclose(file);
    *data_out = data;
    *size_out = (size_t)file_size;
    return 1;
}

/* src/video/fb_present_sdl.c, on every host (Windows builds it with
 * XBOXRECOMP_WIN32_SDL). With RECOMP_FB_WINDOW set it opens the SDL window
 * on the process main thread (where macOS requires it) and runs the boot on
 * a second thread; otherwise it calls the boot directly. */
extern int xbox_HostWindowMain(int (*guest_main)(void));

static const char *s_game_dir;
static const char *s_save_path;

/* Everything from the XBE to the entry point, on the thread that runs the
 * guest: its registers are thread-local, so ESP is set here. */
static int conker_boot(void)
{
    const char *game_dir = s_game_dir, *save_path = s_save_path;
    char xbe_path[MAX_PATH];
    void *xbe_data = NULL;
    size_t xbe_size = 0;
    recomp_func_t entry;

    if (snprintf(xbe_path, sizeof(xbe_path), "%s/default.xbe", game_dir) < 0)
        return 1;

#ifndef CONKER_VERSION
#define CONKER_VERSION "dev"
#endif
    printf("=== Conker: Live and Reloaded static recompilation %s ===\n",
           CONKER_VERSION);
    printf("[CONKER] game directory: %s\n", game_dir);
    printf("[CONKER] save directory: %s\n", save_path);
    if (!load_file(xbe_path, &xbe_data, &xbe_size))
        return 1;
    printf("[CONKER] loaded XBE: %zu bytes\n", xbe_size);

    /* Conker's allocations during bring-up exceed retail 64 MB; give it the
     * devkit's 128 MB (heap top and mirror stride follow this). */
    xbox_SetTotalRam(XBOX_DEVKIT_RAM);
    if (!xbox_MemoryLayoutInit(xbe_data, xbe_size)) {
        fprintf(stderr, "[CONKER] Xbox memory initialization failed\n");
        free(xbe_data);
        return 1;
    }
    g_xbox_mem_offset = xbox_GetMemoryOffset();
    /* Recomp Options in the front end's Options page (conker_menu.c). */
    {
        extern void conker_menu_install(void);
        conker_menu_install();
    }
    /* The USB host controllers' registers are trapped once guest memory is
     * mapped; nothing happens unless RECOMP_USB is set. */
    xbox_OhciInit();

    /* The APU model and its register trap come as a pair (RECOMP_AC97_READY
     * unmaps the registers so they fault into the model). */
    if (getenv("RECOMP_AC97_READY")) {
        g_apu_state = mcpx_apu_init_standalone((uint8_t *)xbox_GetMemoryBase());
        fprintf(stderr, "[CONKER] emulated APU %s\n",
                g_apu_state ? "up" : "FAILED to initialise");
    }

    /* D3D's software-method work, which the console does in the GPU
     * interrupt handler (recomp_manual.c). */
    {
        extern void conker_install_d3d_hooks(void);
        conker_install_d3d_hooks();
    }

    /* RECOMP_RENDERER: vulkan (the default) draws on the host GPU, and the
     * CPU rasteriser takes over when no Vulkan device is usable; cpu draws
     * on the CPU from the start. The CPU rasteriser is correct but slow,
     * and its intro video came out washed out. */
    {
        const char *r = getenv("RECOMP_RENDERER");
        if (!r || !*r || !strcmp(r, "vulkan")) {
#ifdef CONKER_HAVE_VULKAN
            nv2a_vk_install();
#else
            fprintf(stderr, "[CONKER] built without the Vulkan renderer\n");
#endif
        }
    }

    xbox_kernel_init();
    xbox_path_init(game_dir, save_path);
    xbox_kernel_bridge_init();
    g_esp = XBOX_STACK_TOP;

    if (!recomp_dispatch_init())
        fprintf(stderr, "[CONKER] flat dispatch unavailable; "
                        "indirect calls use the binary search\n");
    /* CONKER_UNPACK_IN/_OUT: unpack one CAFF package with the game's own
     * decompressor (conker_caff.c) and stop, without starting the game. */
    {
        extern int conker_caff_unpack(const char *in, const char *out);
        const char *in = getenv("CONKER_UNPACK_IN"), *out = getenv("CONKER_UNPACK_OUT");
        if (in && *in && out && *out) {
            int rc = conker_caff_unpack(in, out);
            xbox_kernel_shutdown();
            xbox_MemoryLayoutShutdown();
            free(xbe_data);
            return rc;
        }
    }
    {
        extern void conker_weapon_boot(const char *game_dir);
        conker_weapon_boot(game_dir);
    }
    xbox_WatchdogStart();

    entry = recomp_lookup(CONKER_ENTRY_POINT);
    if (!entry) {
        fprintf(stderr, "[CONKER] entry point %08X is absent from dispatch\n",
                CONKER_ENTRY_POINT);
        xbox_kernel_shutdown();
        xbox_MemoryLayoutShutdown();
        free(xbe_data);
        return 1;
    }

    printf("[CONKER] starting at %08X, ESP=%08X\n", CONKER_ENTRY_POINT, g_esp);
    entry();
    printf("[CONKER] game entry point returned, eax=%08X\n", g_eax);
    xbox_OhciReport();

    xbox_kernel_shutdown();
    xbox_MemoryLayoutShutdown();
    free(xbe_data);
    return 0;
}

int main(int argc, char **argv)
{
    static char default_save[4096], data_dir[4096], exe_dir[4096], game_dir[4096];
    char *slash;

    conker_host_open_log();
    s_save_path = argc > 2 ? argv[2] : getenv("CONKER_SAVE_DIR");

    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    conker_host_install_fault_handler();

    /* Toolkit switches Conker needs; any can be overridden from outside.
     *   RECOMP_PB_EXEC       D3D8LTCG frames only exist as push buffers
     *   RECOMP_TITLE_KEVENTS D3D waits on a KEVENT it builds itself (0x5492FC)
     *   RECOMP_VBLANK        its GPU ISR (vector 3) needs vblank interrupts
 *   RECOMP_FLIP_PACING   a flip completes on the vblank the title's
 *                        presentation interval names, as on the console
 *                        (Conker asks for every second one: 30 fps).
 *                        Without it each flip completed at once: the
 *                        front end ran at ~43 and title cards far faster,
 *                        unevenly from scene to scene
     *   RECOMP_AC97_READY    DirectSound resets the AC'97 bus master and the
     *                        codec, and talks to the APU directly: this arms
     *                        the AC'97 write trap and the emulated APU
     *   RECOMP_USB           XAPI drives the USB host controllers directly;
     *                        the OHCI model is what lets it find a pad
     *   RECOMP_KEYBOARD      the keyboard is pad 0 (Enter = START, Z = A),
     *                        through the framebuffer window (RECOMP_FB_WINDOW),
     *                        which also reads SDL game controllers
     *   RECOMP_DISPATCH_GATE the USB model's interrupt runs on the guest
     *                        thread at a safe point, never beside the USB
     *                        driver's DPC: running both at once corrupted
     *                        the driver's memory, and the pad stopped (or
     *                        the game froze in the menu) after a while */
    conker_host_setenv_default("RECOMP_PB_EXEC", "1");
    conker_host_setenv_default("RECOMP_TITLE_KEVENTS", "1");
    conker_host_setenv_default("RECOMP_VBLANK", "paced");
    conker_host_setenv_default("RECOMP_FLIP_PACING", "1");
    conker_host_setenv_default("RECOMP_AC97_READY", "1");
    conker_host_setenv_default("RECOMP_USB", "1");
    conker_host_setenv_default("RECOMP_KEYBOARD", "1");
    conker_host_setenv_default("RECOMP_DISPATCH_GATE", "1");
#if defined(_WIN32)
    /* RECOMP_WIN_PLACEHOLDER holds the whole 4 GB guest window before
     * mapping into it. Without it the tiled aperture (0xF0000000) landed on
     * host memory already taken under Wine and the first frame faulted. */
    conker_host_setenv_default("RECOMP_WIN_PLACEHOLDER", "1");
    /* The game window, which the AppImage's AppRun turns on elsewhere. */
    conker_host_setenv_default("RECOMP_FB_WINDOW", "1");
#endif
    /* Recomp Options (the front end's Options page): the cfg file sets the
     * window, aspect (Hor+, recomp_manual.c), render scale and frame limit
     * before anything opens; the submenu takes the pad while it shows. */
    conker_settings_load();
    conker_settings_install_input();

    /* The game: the argument, CONKER_GAME_DIR, the copy installed on first
     * launch, or the setup window asks for the player's disc and installs
     * it (conker_install.c). The data folder is the one above saves/. */
    conker_host_default_save_dir(default_save, sizeof(default_save));
    snprintf(data_dir, sizeof data_dir, "%s", default_save);
    if ((slash = strrchr(data_dir, '/')) || (slash = strrchr(data_dir, '\\')))
        *slash = 0;
    conker_host_exe_dir(exe_dir, sizeof exe_dir);
    if (conker_find_game(argc > 1 ? argv[1] : NULL, data_dir, exe_dir,
                         game_dir, sizeof game_dir) != 0)
        return 1;
    s_game_dir = game_dir;
    if (!s_save_path || !*s_save_path)
        s_save_path = default_save;
    /* Mods in <data>/mods, laid over the game's files (conker_mods.c), and
     * the frying pan's folder when it is chosen (conker_weapon.c). */
    {
        extern void conker_weapon_init(const char *data_dir);
        conker_weapon_init(data_dir);
    }
    conker_mods_init(data_dir, s_save_path);
    /* The Vulkan renderer's list of the pipelines the game has used, built
     * again at every start so that nothing compiles while it plays. */
    {
        static char list[4200];
        snprintf(list, sizeof list, "%s/pipelines.bin", data_dir);
        conker_host_setenv_default("RECOMP_VK_PIPELINE_LIST", list);
    }

    return xbox_HostWindowMain(conker_boot);
}
