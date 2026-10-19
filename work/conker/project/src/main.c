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

#define CONKER_ENTRY_POINT 0x0042F0E9u
/* Used when neither argv[1] nor CONKER_GAME_DIR names the extracted disc. */
#define CONKER_DEFAULT_GAME_DIR "game_files/Conker"

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

int main(int argc, char **argv)
{
    const char *game_dir = argc > 1 ? argv[1] : getenv("CONKER_GAME_DIR");
    const char *save_path = argc > 2 ? argv[2] : getenv("CONKER_SAVE_DIR");
    char xbe_path[MAX_PATH];
    char default_save[MAX_PATH];
    void *xbe_data = NULL;
    size_t xbe_size = 0;
    recomp_func_t entry;

    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    conker_host_install_fault_handler();

    /* Toolkit switches Conker needs; any can be overridden from outside.
     *   RECOMP_PB_EXEC       D3D8LTCG frames only exist as push buffers
     *   RECOMP_TITLE_KEVENTS D3D waits on a KEVENT it builds itself (0x5492FC)
     *   RECOMP_VBLANK        its GPU ISR (vector 3) needs vblank interrupts
     *   RECOMP_AC97_READY    DirectSound resets the AC'97 bus master and the
     *                        codec, and talks to the APU directly: this arms
     *                        the AC'97 write trap and the emulated APU */
    conker_host_setenv_default("RECOMP_PB_EXEC", "1");
    conker_host_setenv_default("RECOMP_TITLE_KEVENTS", "1");
    conker_host_setenv_default("RECOMP_VBLANK", "paced");
    conker_host_setenv_default("RECOMP_AC97_READY", "1");

    if (!game_dir || !*game_dir)
        game_dir = CONKER_DEFAULT_GAME_DIR;
    if (!save_path || !*save_path) {
        conker_host_default_save_dir(default_save, sizeof(default_save));
        save_path = default_save;
    }
    if (snprintf(xbe_path, sizeof(xbe_path), "%s/default.xbe", game_dir) < 0)
        return 1;

    printf("=== Conker: Live and Reloaded static recompilation ===\n");
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

    /* The APU model and its register trap come as a pair (RECOMP_AC97_READY
     * unmaps the registers so they fault into the model). */
    if (getenv("RECOMP_AC97_READY")) {
        g_apu_state = mcpx_apu_init_standalone((uint8_t *)xbox_GetMemoryBase());
        fprintf(stderr, "[CONKER] emulated APU %s\n",
                g_apu_state ? "up" : "FAILED to initialise");
    }

    xbox_kernel_init();
    xbox_path_init(game_dir, save_path);
    xbox_kernel_bridge_init();
    g_esp = XBOX_STACK_TOP;

    if (!recomp_dispatch_init())
        fprintf(stderr, "[CONKER] flat dispatch unavailable; "
                        "indirect calls use the binary search\n");
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

    xbox_kernel_shutdown();
    xbox_MemoryLayoutShutdown();
    free(xbe_data);
    return 0;
}
