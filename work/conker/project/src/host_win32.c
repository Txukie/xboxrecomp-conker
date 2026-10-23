#include <windows.h>
#include <dbghelp.h>
#include <shlobj.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <xbox/xboxrecomp.h>
#include "conker_host.h"

extern ptrdiff_t g_xbox_mem_offset;

/* Generated functions are real symbols (sub_0042F0E9 ...), so the PDB maps
 * a host address back to the guest function it was lifted from. */
static void print_symbol(const char *prefix, void *addr)
{
    char buf[sizeof(SYMBOL_INFO) + 256];
    SYMBOL_INFO *sym = (SYMBOL_INFO *)buf;
    DWORD64 disp = 0;

    memset(buf, 0, sizeof(buf));
    sym->SizeOfStruct = sizeof(SYMBOL_INFO);
    sym->MaxNameLen = 255;
    if (SymFromAddr(GetCurrentProcess(), (DWORD64)(uintptr_t)addr, &disp, sym))
        fprintf(stderr, "%s%s+0x%llX", prefix, sym->Name, (unsigned long long)disp);
    else
        fprintf(stderr, "%s%p", prefix, addr);
}

static LONG CALLBACK conker_exception_handler(PEXCEPTION_POINTERS ep)
{
    const DWORD code = ep->ExceptionRecord->ExceptionCode;

    if (code == EXCEPTION_ACCESS_VIOLATION) {
        const ULONG_PTR operation = ep->ExceptionRecord->ExceptionInformation[0];
        const ULONG_PTR address = ep->ExceptionRecord->ExceptionInformation[1];

        /* Trapped device registers: decoded, emulated, instruction skipped. */
        if (xbox_VehMmioFault(ep))
            return EXCEPTION_CONTINUE_EXECUTION;

        fprintf(stderr, "[CONKER] access violation: %s address=%p xbox_va=%08X\n",
                operation == 0 ? "read" : operation == 1 ? "write" : "execute",
                (void *)address, (uint32_t)(address - (uintptr_t)g_xbox_mem_offset));
    } else if (code == EXCEPTION_BREAKPOINT) {
        fprintf(stderr, "[CONKER] breakpoint\n");
    } else {
        fprintf(stderr, "[CONKER] native exception code=0x%08lX\n", (unsigned long)code);
    }
    print_symbol("[CONKER] at ", ep->ExceptionRecord->ExceptionAddress);
    fputc('\n', stderr);
    conker_dump_xbox_state();
    conker_host_print_native_stack("[CONKER] native stack:", 32);
    return EXCEPTION_CONTINUE_SEARCH;
}

void conker_host_install_fault_handler(void)
{
    /* Load symbols now: at fault time the process is already in a bad way. */
    SymSetOptions(SYMOPT_DEFERRED_LOADS | SYMOPT_UNDNAME);
    SymInitialize(GetCurrentProcess(), NULL, TRUE);
    AddVectoredExceptionHandler(1, conker_exception_handler);
}

void conker_host_print_native_stack(const char *tag, int max_frames)
{
    void *frames[62];
    USHORT count;
    USHORT i;
    if (max_frames > 62)
        max_frames = 62;
    count = CaptureStackBackTrace(0, (DWORD)max_frames, frames, NULL);
    fprintf(stderr, "%s", tag);
    for (i = 0; i < count; ++i)
        print_symbol(" ", frames[i]);
    fputc('\n', stderr);
    fflush(stderr);
}

void conker_host_default_save_dir(char *buf, size_t size)
{
    char base[MAX_PATH];
    if (SUCCEEDED(SHGetFolderPathA(NULL, CSIDL_LOCAL_APPDATA, NULL, 0, base)))
        snprintf(buf, size, "%s\\ConkerRecomp\\saves", base);
    else
        snprintf(buf, size, "saves");
    /* POSIX xbox_path_init() creates the directory; the Win32 one does not. */
    SHCreateDirectoryExA(NULL, buf, NULL);
}

void conker_host_exe_dir(char *buf, size_t size)
{
    DWORD n = size ? GetModuleFileNameA(NULL, buf, (DWORD)size) : 0;
    char *slash;
    if (n == 0 || n >= size) {
        if (size)
            buf[0] = 0;
        return;
    }
    if ((slash = strrchr(buf, '\\')))
        slash[1] = 0;
}

void conker_host_config_path(char *buf, size_t size)
{
    char base[MAX_PATH], dir[MAX_PATH];
    if (!SUCCEEDED(SHGetFolderPathA(NULL, CSIDL_LOCAL_APPDATA, NULL, 0, base))) {
        snprintf(buf, size, "settings.cfg");
        return;
    }
    snprintf(dir, sizeof dir, "%s\\ConkerRecomp", base);
    SHCreateDirectoryExA(NULL, dir, NULL);
    snprintf(buf, size, "%s\\settings.cfg", dir);
}

void conker_host_setenv_default(const char *name, const char *value)
{
    if (!getenv(name))
        _putenv_s(name, value);
}
