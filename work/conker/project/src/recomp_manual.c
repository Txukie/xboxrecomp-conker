#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include "conker_host.h"

static void conker_sub_0047C29B(void);

recomp_func_t recomp_lookup_manual(uint32_t xbox_va)
{
    if (xbox_va == 0x0047C29Bu)
        return conker_sub_0047C29B;
    return NULL;
}

static void conker_sub_0047C29B(void)
{
    uint32_t saved_esp = g_esp;
    PUSH32(g_esp, MEM32(g_esp + 4));
    PUSH32(g_esp, 0);
    RECOMP_ICALL_SAFE(MEM32(0x561000), saved_esp);
    g_eax = 1;
    g_esp += 12; /* ret 8 */
}

void recomp_icall_fail_log(uint32_t xbox_va)
{
    static unsigned int reports;
    if (reports++ < 128) {
        fprintf(stderr, "[CONKER][ICALL] unresolved target %08X (call %llu)\n",
                xbox_va, (unsigned long long)g_icall_count);
    }
}

/* An indirect call whose target is not code (null or wild pointer). Skipped,
 * but reported at the 1st, 10th, 100th... hit per address so a skip inside a
 * spin loop reads as the hang it causes. Same as the toolkit template. */
void recomp_icall_not_code_log(uint32_t va)
{
    enum { SLOTS = 16 };
    static uint32_t seen[SLOTS];
    static uint64_t hits[SLOTS];
    static int count;
    uint64_t n;
    int i;

    for (i = 0; i < count; i++)
        if (seen[i] == va)
            break;
    if (i == count) {
        if (count == SLOTS)
            return;
        seen[count] = va;
        hits[count] = 0;
        count++;
    }
    n = ++hits[i];
    while (n >= 10 && n % 10 == 0)
        n /= 10;
    if (n != 1)
        return;
    fprintf(stderr, "[CONKER][ICALL] target %08X is not code -- skipped %llu time(s)\n",
            va, (unsigned long long)hits[i]);
}

/* The lifter emits RECOMP_UNIMPL(text, va) for instructions it cannot
 * translate; they stay no-ops. RECOMP_UNIMPL_TRAP=1 aborts at the first. */
void recomp_unimpl(const char *text, uint32_t va)
{
    static int printed;
    const char *trap = getenv("RECOMP_UNIMPL_TRAP");
    int stop = trap && *trap && *trap != '0';

    if (printed < 50 || stop) {
        printed++;
        fprintf(stderr, "[CONKER][UNIMPL] `%s` at %08X reached (no-op)\n", text, va);
    }
    if (stop)
        abort();
}

/* ── D3D8LTCG GPU progress ────────────────────────────────────────────────
 *
 * sub_0053C190 is D3D_BlockOnTime(fence, flags): it returns once the GPU
 * semaphore (*[device+0x30]) has passed `fence`, kicking off the pushbuffer
 * first when the fence is the newest one (device+0x2C), and otherwise spins
 * on the semaphore at 0x0053C2C0. The pushbuffer executor writes semaphore
 * releases (method 0x1D70) only where the title registers, so without this
 * the spin never ends -- it hung right after D3D's first flip.
 *
 * An entry hook (the recompiler calls it at the top of the generated body,
 * from every caller) so the original wait, kickoff and make-space logic all
 * stay generated and simply see real progress. Re-checked on every call:
 * D3D rewrites device+0x30 when the device is reset. */
#include "nv2a_backend.h"

#define CONKER_D3D_DEVICE_PTR 0x005499E8u   /* D3D's g_pDevice */

void sub_0053C190_enter(void)
{
    static uint32_t s_semaphore;
    const uint32_t device = MEM32(CONKER_D3D_DEVICE_PTR);
    const uint32_t semaphore = device ? MEM32(device + 0x30) : 0;

    if (semaphore && semaphore != s_semaphore) {
        s_semaphore = semaphore;
        nv2a_pb_set_semaphore_target(semaphore);
        fprintf(stderr, "[CONKER][D3D] GPU semaphore at 0x%08X (device 0x%08X)\n",
                semaphore, device);
    }
}

void conker_debug_string(uint32_t xbox_va)
{
    const char *message = (const char *)((uintptr_t)xbox_va + g_xbox_mem_offset);
    fprintf(stderr, "[CONKER][XBOX DEBUG] %.*s", 2048, message);
    if (!strchr(message, '\n'))
        fputc('\n', stderr);
    fflush(stderr);
}

void conker_trace_point(uint32_t xbox_va)
{
    static unsigned int reports;
    static int captured_malloc_stack;
    static unsigned int malloc_calls;
    if (reports++ < 64 || (xbox_va & 0xFFFF0000u) == 0x53D70000u) {
        fprintf(stderr,
                "[CONKER][TRACE] %08X eax=%08X ecx=%08X edx=%08X esp=%08X "
                "ebx=%08X esi=%08X edi=%08X ebp=%08X\n",
                xbox_va, g_eax, g_ecx, g_edx, g_esp,
                g_ebx, g_esi, g_edi, g_seh_ebp);
        fflush(stderr);
    }
    if (xbox_va == 0x004718C5 || xbox_va == 0x00431E6A)
        malloc_calls++;
    if ((xbox_va == 0x004718C5 || xbox_va == 0x00431E6A) &&
        malloc_calls == 50 && !captured_malloc_stack) {
        captured_malloc_stack = 1;
        conker_host_print_native_stack("[CONKER][NATIVE_STACK]", 62);
    }
}
