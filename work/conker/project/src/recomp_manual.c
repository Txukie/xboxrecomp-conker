#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if defined(_MSC_VER)
#include <intrin.h>   /* _InterlockedDecrement */
#endif

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

/* An indirect call to code the dispatch table does not know: usually a
 * function start the disassembler missed (add it to seed_callbacks.json).
 * Reported per address at the 1st, 10th, 100th... failure, like the
 * not-code log below: a flat cap of 128 lines hid 0x00016620 failing 4.3e9
 * times inside XACT's polling loop. */
void recomp_icall_fail_log(uint32_t xbox_va)
{
    enum { SLOTS = 32 };
    static uint32_t seen[SLOTS];
    static uint64_t hits[SLOTS];
    static int count;
    uint64_t n;
    int i;

    for (i = 0; i < count; i++)
        if (seen[i] == xbox_va)
            break;
    if (i == count) {
        if (count == SLOTS)
            return;
        seen[count] = xbox_va;
        hits[count] = 0;
        count++;
    }
    n = ++hits[i];
    while (n >= 10 && n % 10 == 0)
        n /= 10;
    if (n != 1)
        return;
    fprintf(stderr, "[CONKER][ICALL] unresolved target %08X failed %llu time(s) "
            "(call %llu)\n", xbox_va, (unsigned long long)hits[i],
            (unsigned long long)g_icall_count);
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

/* ── D3D8LTCG deferred pushbuffer patches ────────────────────────────────
 *
 * RunPushBuffer (sub_0053AE30) makes a precompiled pushbuffer return to the
 * ring by patching its closing JUMP, and applies the run's fixups, before
 * the GPU gets there. When the GPU may still be reading the pushbuffer from
 * an earlier run it cannot patch yet: it writes NO_OPERATION(param) ahead of
 * the JUMP into the pushbuffer and leaves the patch in an entry, and the
 * GPU, trapping that software method, has D3D's interrupt handler apply it
 * (ServiceGrInterrupt 0x005411D0 -> sub_00541410, cases 12 and 13):
 *
 *   param & 0x1F == 13: the entry is slot param >> 5 of device+0x264 (20 bytes)
 *   param & 0x1F == 12: the entry is at 0x80000000 | (param >> 5), in the ring
 *
 * Both decrement the pending count at device+0x50 and run sub_0053AD90 on
 * the entry: write the return JUMP into the pushbuffer's last word, copy the
 * fixup records ({size, offset, data}, ended by 0xFFFFFFFF) into it when bit
 * 29 asks for them, free the slot (bit 30) when bit 31 marks one, and follow
 * the chain at +4. The executor delivers no GPU interrupts, so it calls this
 * when it reaches the NO_OPERATION, which is where the console's GPU stalls
 * for the handler (nv2a_pb_set_swmethod_hook). Unapplied, the pushbuffer
 * returned to wherever it was last called from: the walk replayed already-run
 * commands, a million draws a frame, and the front end never got past its
 * black loading frames. */
#define CONKER_D3D_DEFERRED_SLOTS 0x264u
#define CONKER_D3D_DEFERRED_COUNT 0x50u

static void conker_d3d_apply_deferred(uint32_t entry)
{
    int guard = 0;

    while (entry != 0 && entry != 0xFFFFFFFFu && guard++ < 4096) {
        uint32_t ctl = MEM32(entry), next;

        MEM32(MEM32(entry + 8)) = (ctl & 0x0FFFFFFFu) + 1u;   /* return JUMP */
        if (ctl & 0x20000000u) {
            uint32_t pb = MEM32(entry + 0x10), rec = MEM32(entry + 0xC), size;
            while ((size = MEM32(rec)) != 0xFFFFFFFFu) {
                memcpy((void *)XBOX_PTR(pb + MEM32(rec + 4)),
                       (const void *)XBOX_PTR(rec + 8), size);
                rec += 8 + size;
            }
        }
        next = MEM32(entry + 4);
        MEM32(entry + 4) = 0xFFFFFFFFu;
        if (ctl & 0x80000000u)
            MEM32(entry) = ctl & 0xBFFFFFFFu;                   /* slot free */
        entry = next;
    }
}

static void conker_d3d_swmethod(uint32_t param)
{
    const uint32_t device = MEM32(CONKER_D3D_DEVICE_PTR);
    uint32_t entry;

    if (!device)
        return;
    switch (param & 0x1Fu) {
    case 13: entry = device + CONKER_D3D_DEFERRED_SLOTS + 20u * (param >> 5); break;
    case 12: entry = 0x80000000u | (param >> 5); break;
    default: return;
    }
    /* Interlocked: RunPushBuffer raises the count with xadd on the title's
     * thread meanwhile. */
#if defined(_MSC_VER)
    _InterlockedDecrement((volatile long *)XBOX_PTR(device + CONKER_D3D_DEFERRED_COUNT));
#else
    __atomic_sub_fetch((volatile uint32_t *)XBOX_PTR(device + CONKER_D3D_DEFERRED_COUNT),
                       1u, __ATOMIC_SEQ_CST);
#endif
    conker_d3d_apply_deferred(entry);
}

void conker_install_d3d_hooks(void)
{
    nv2a_pb_set_swmethod_hook(conker_d3d_swmethod);
}

/* ── APU EP DSP heartbeat ─────────────────────────────────────────────────
 *
 * DirectSoundDoWork ends in sub_004C7FFF, which checks a word in the EP
 * (encode processor) DSP's memory -- *[0x004E1C60], 0xFE85A018 in practice --
 * for 0xCCCCCC, the signature the running EP program keeps there. Anything
 * else means "the DSP died", and DirectSound restarts the whole audio
 * pipeline: both AC'97 channels, both DSPs, a 10 ms stall (sub_004C7DBF,
 * counted at [0x004E1634]). The toolkit's EP is a passthrough stub that runs
 * no DSP code, so the signature never appears and Conker restarted audio on
 * every DoWork (87 times in 110 s), stuck after its loading screen.
 *
 * Until the EP program is emulated, report it alive: write the signature
 * where DirectSound will look, just before it looks. EP memory is plain RAM
 * in the toolkit (only the APU registers are trapped). */
#define CONKER_DSOUND_EP_ALIVE_PTR 0x004E1C60u
#define CONKER_DSP_ALIVE_SIGNATURE 0x00CCCCCCu

void sub_004C7FFF_enter(void)
{
    const uint32_t alive = MEM32(CONKER_DSOUND_EP_ALIVE_PTR);

    if (alive >= 0xFE800000u && alive < 0xFE880000u)   /* inside the APU window */
        MEM32(alive) = CONKER_DSP_ALIVE_SIGNATURE;
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

/* ── Widescreen (Hor+) ───────────────────────────────────────────────────
 *
 * Conker has no widescreen mode: XGetVideoFlags is read for 480p and PAL-60
 * only, and the projection is built for a 4:3 picture. Each player's camera
 * keeps its field of view as two angles, horizontal and vertical (record
 * [0x84A13C] + 0x2B0*player, +0x260 and +0x264), and sub_000645C0 hands the
 * pair to the camera object (+0x104 the vertical angle, +0x108 their ratio)
 * that its projection matrix and its culling frustum come from. Widening the
 * horizontal angle by the target aspect over 4:3 is Hor+: the vertical view
 * stays, the sides open up, and the culling follows. The 640x480 frame is
 * then shown stretched to that aspect (RECOMP_DISPLAY_ASPECT, which main.c
 * sets from CONKER_ASPECT), so the 3D comes out unstretched. 2D overlays
 * drawn in screen space are stretched with it.
 *
 * CONKER_ASPECT: "16:9", "16:10", "21:9", "4:3" or a ratio (1.7778). Unset,
 * the picture is the original 4:3. */
static float conker_hor_plus(void)
{
    static float scale = -1.0f;
    if (scale < 0.0f) {
        const char *e = getenv("CONKER_ASPECT");
        char *end = NULL;
        double a = 0.0;
        if (e && *e) {
            a = strtod(e, &end);
            if (end && *end == ':') {
                double b = strtod(end + 1, NULL);
                a = b > 0.0 ? a / b : 0.0;
            }
        }
        scale = (a > 0.25 && a < 8.0) ? (float)(a / (4.0 / 3.0)) : 0.0f;
        if (scale > 0.0f)
            fprintf(stderr, "[CONKER] widescreen: aspect %.4f, horizontal view x%.4f\n",
                    a, scale);
    }
    return scale;
}

/* sub_000645C0(player edx, horizontal angle xmm1, vertical angle xmm0). */
void sub_000645C0_enter(void)
{
    float s = conker_hor_plus();
    if (s > 0.0f)
        g_xmm1.f[0] *= s;
}
