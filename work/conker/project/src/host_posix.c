/* Linux and macOS host services: SIGSEGV/SIGBUS replace the Win32 VEH. */

#if !defined(__APPLE__) && !defined(_GNU_SOURCE)
#define _GNU_SOURCE   /* dladdr */
#endif

#include <dlfcn.h>
#include <execinfo.h>
#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#if defined(__APPLE__)
#include <mach-o/dyld.h>
#endif

#include <xbox/xboxrecomp.h>
#include "conker_host.h"

extern ptrdiff_t g_xbox_mem_offset;

/* With -rdynamic the generated functions (sub_0042F0E9 ...) are dynamic
 * symbols, so dladdr names the guest function a host address belongs to. */
static void print_symbol(const char *prefix, void *addr)
{
    Dl_info info;
    if (dladdr(addr, &info) && info.dli_sname)
        fprintf(stderr, "%s%s+0x%llX", prefix, info.dli_sname,
                (unsigned long long)((uintptr_t)addr - (uintptr_t)info.dli_saddr));
    else if (dladdr(addr, &info) && info.dli_fbase)
        fprintf(stderr, "%s+0x%llX", prefix,
                (unsigned long long)((uintptr_t)addr - (uintptr_t)info.dli_fbase));
    else
        fprintf(stderr, "%s%p", prefix, addr);
}

static void conker_fault_handler(int sig, siginfo_t *si, void *uctx)
{
    const uintptr_t address = (uintptr_t)si->si_addr;

    /* Trapped device registers: decoded, emulated, instruction skipped.
     * Only hosts with a decoder (arm64 today) trap anything. */
    if (xbox_PosixMmioFault(uctx, address))
        return;

    fprintf(stderr, "[CONKER] %s at address=%p xbox_va=%08X\n",
            sig == SIGBUS ? "bus error" : "access violation", (void *)address,
            (uint32_t)(address - (uintptr_t)g_xbox_mem_offset));
    conker_dump_xbox_state();
    conker_host_print_native_stack("[CONKER] native stack:", 32);

    /* Re-fault with the default action so the OS produces a core dump. */
    signal(sig, SIG_DFL);
}

void conker_host_install_fault_handler(void)
{
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = conker_fault_handler;
    sa.sa_flags = SA_SIGINFO | SA_NODEFER;
    sigemptyset(&sa.sa_mask);
    sigaction(SIGSEGV, &sa, NULL);
    /* macOS reports unmapped/protected device pages as SIGBUS. */
    sigaction(SIGBUS, &sa, NULL);
}

void conker_host_print_native_stack(const char *tag, int max_frames)
{
    void *frames[62];
    int count;
    int i;
    if (max_frames > 62)
        max_frames = 62;
    count = backtrace(frames, max_frames);
    fprintf(stderr, "%s", tag);
    for (i = 0; i < count; ++i)
        print_symbol(" ", frames[i]);
    fputc('\n', stderr);
    fflush(stderr);
}

void conker_host_default_save_dir(char *buf, size_t size)
{
    const char *home = getenv("HOME");
#if defined(__APPLE__)
    snprintf(buf, size, "%s/Library/Application Support/ConkerRecomp/saves",
             home ? home : ".");
#else
    const char *xdg = getenv("XDG_DATA_HOME");
    if (xdg && *xdg)
        snprintf(buf, size, "%s/conker-recomp/saves", xdg);
    else
        snprintf(buf, size, "%s/.local/share/conker-recomp/saves",
                 home ? home : ".");
#endif
}

void conker_host_exe_dir(char *buf, size_t size)
{
    char *slash;
    ssize_t n = -1;
#if defined(__APPLE__)
    uint32_t len = (uint32_t)size;
    if (size && _NSGetExecutablePath(buf, &len) == 0)
        n = (ssize_t)strlen(buf);
#else
    if (size)
        n = readlink("/proc/self/exe", buf, size - 1);
#endif
    if (n <= 0) {
        if (size)
            buf[0] = 0;
        return;
    }
    buf[n] = 0;
    if ((slash = strrchr(buf, '/')))
        slash[1] = 0;
}

void conker_host_config_path(char *buf, size_t size)
{
    const char *home = getenv("HOME");
    char dir[1024];
#if defined(__APPLE__)
    snprintf(dir, sizeof dir, "%s/Library/Application Support/ConkerRecomp",
             home ? home : ".");
#else
    const char *xdg = getenv("XDG_CONFIG_HOME");
    char parent[1024];
    if (xdg && *xdg) {
        snprintf(dir, sizeof dir, "%s/conker-recomp", xdg);
    } else {
        snprintf(parent, sizeof parent, "%s/.config", home ? home : ".");
        mkdir(parent, 0755);
        snprintf(dir, sizeof dir, "%s/conker-recomp", parent);
    }
#endif
    mkdir(dir, 0755);
    snprintf(buf, size, "%s/settings.cfg", dir);
}

void conker_host_open_log(void)
{
}

void conker_host_setenv_default(const char *name, const char *value)
{
    setenv(name, value, 0);
}
