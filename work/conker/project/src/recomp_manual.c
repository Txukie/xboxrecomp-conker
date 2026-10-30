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
#include "conker_settings.h"

static void conker_sub_0047C29B(void);
recomp_func_t conker_menu_lookup(uint32_t xbox_va);     /* conker_menu.c */
void conker_menu_keep_demo_item(void);

recomp_func_t recomp_lookup_manual(uint32_t xbox_va)
{
    if (xbox_va == 0x0047C29Bu)
        return conker_sub_0047C29B;
    return conker_menu_lookup(xbox_va);
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

    conker_menu_keep_demo_item();
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

/* sub_0003D200 pushes a camera mode on the player camera's stack (edx the
 * camera, ecx the slot; on the guest stack the mode mask and two more
 * words), and does nothing when the slot is taken. The weapon's
 * over-the-shoulder camera is pushed into slot 1, the only push there,
 * from 0x0003D143 with mask 0x100 (Aim), every frame the weapon is out; the
 * aim camera pops it when the weapon goes away.
 *
 * While the Swing Button has the weapon out (conker_swing.c), slot 1 is
 * marked taken -- holding a copy of the mode in use, in case anything pops
 * it -- so the push does nothing and the camera is not touched. The mark
 * goes at the next push the button does not want kept. */
#define CAM_SLOT1_USED    0x27Au
#define CAM_SLOT1_MARK    0xC35Bu
void sub_0003D200_enter(void)
{
    extern int conker_swing_keep_camera(void);
    const uint32_t cam = g_edx;

    if (g_ecx != 1)
        return;
    if (MEM32(g_esp) == 0x0003D148u && MEM32(g_esp + 4) == 0x100u
            && conker_swing_keep_camera()) {
        if (MEM16(cam + CAM_SLOT1_USED) == 0) {
            MEM16(cam + 0x98) = MEM16(cam + 0x94);
            MEM32(cam + 0xC8) = MEM32(cam + 0xC0);
            MEM32(cam + 0x120) = MEM32(cam + 0x118);
            MEM32(cam + 0x178) = MEM32(cam + 0x170);
            MEM32(cam + 0x1D0) = MEM32(cam + 0x1C8);
            /* The distance index too: cutscenes pop slot 1, and 999 here
             * (unset) reads past the table at 0x58BF00, distance about 0:
             * a first-person view nothing resets. */
            MEM16(cam + 0x224) = MEM16(cam + 0x220);
            MEM16(cam + 0x250) = MEM16(cam + 0x24C);
            MEM16(cam + CAM_SLOT1_USED) = CAM_SLOT1_MARK;
        }
    } else if (MEM16(cam + CAM_SLOT1_USED) == CAM_SLOT1_MARK) {
        MEM16(cam + CAM_SLOT1_USED) = 0;
    }
}

/* A level load starts here (conker_menu.c). */
void sub_002AB0C0_enter(void)
{
    extern void conker_loading_screen(void);
    conker_loading_screen();
}

/* ── The save slots' titles (sub_00204E80, sub_00204EE0, sub_00204F40) ─────
 *
 * The text the pub draws for Game 1..3, with its colour. The game gives the
 * save's own name (+8 of the slot, Name= in SaveMeta.xbx, in the language the
 * save was made in), or for an empty slot the default in this launch's
 * language (+0x2C4). Here the default always: the game has no way to rename a
 * save. Only the drawing changes: the game finds a save on disk by its name
 * (sub_0034FC90), so +8 itself must stay as saved.
 */
extern void sub_0046E49A(void);

static void slot_title_text(uint32_t slot)
{
    uint32_t title = MEM32(slot * 4 + 0x84B120);
    uint32_t name = MEM32(title + 0x2C4);

    eax = MEM32(esp + 0xC);
    MEMF(eax) = MEMF(0x649114);
    MEMF(eax + 4) = MEMF(0x649110);
    MEMF(eax + 8) = MEMF(0x6494E8);
    if (!name)
        name = MEM32(title + 8);
    PUSH32(esp, name);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00204EC5u); RECOMP_ABI_CALL(0x0046E49Au, sub_0046E49A); /* call 0x0046E49A */
    esp = esp + 8;
    esp += 4; /* ret */
}

void sub_00204E80(void) { slot_title_text(0); }
void sub_00204EE0(void) { slot_title_text(1); }
void sub_00204F40(void) { slot_title_text(2); }

/* ── Swing Button: running with the weapon out (sub_002DEF80) ──────────────
 *
 * sub_002DEF80 (ecx the character, eax a heading) moves a character along
 * the heading the player update (sub_002D6570) has worked out: the stick's
 * angle from the camera's heading, or with a weapon out from the heading
 * Conker had when it came out. For a weapon the Swing Button brought out,
 * conker_swing_heading (conker_swing.c) gives the camera's again and turns
 * Conker to face it, so he runs with the weapon as he does without it. */
void sub_002DEF80_enter(void)
{
    extern int conker_swing_heading(uint32_t character, uint32_t *heading);
    uint32_t heading;

    if (conker_swing_heading(g_ecx, &heading))
        g_eax = heading;
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
 * The shape is Recomp Options' Aspect Ratio (conker_settings.c; CONKER_ASPECT
 * picks one at start), and changes while the game runs: the camera takes the
 * new angle at its next update. 4:3 is the original picture. */

/* sub_000645C0(player edx, horizontal angle xmm1, vertical angle xmm0). */
void sub_000645C0_enter(void)
{
    float s = conker_settings_hor_plus();
    if (s > 0.0f)
        g_xmm1.f[0] *= s;
}

/* ── D3D's wait for the GPU to go idle (sub_0053C450, sub_0053C630) ───────
 *
 * The generated functions, with a pause on each pass of their waits: it polls
 * the FIFO's put and get (+0x3240, +0x3244) and PGRAPH's status (+0x400700)
 * until the executor has caught up, and spun a core at 100% doing it -- most
 * of the frame, since the frame waits on the executor. On the Steam Deck,
 * with the 30 fps cap, the game drew 13 W spinning and 5 W pausing, which is
 * battery life. The first polls stay a spin, so a short wait costs nothing more;
 * after them it sleeps 50 us a pass. Both are excluded from the generated
 * code (regenerate.sh --exclude-manual). */
#include "platform/host_time.h"   /* xbox_HostSleepNs */

static void gpu_wait_pause(unsigned *polls)
{
    if (++*polls > 64)
        xbox_HostSleepNs(50000);
}

/* The flush it starts with (sub_0053C630): sets PFB's flush bit and waits
 * for the GPU to clear it. The executor clears it once the flip it is
 * holding for its vblank is let go, so with flip pacing this is where the
 * frame spends its spare time, and it gets the same pause. */
void sub_0053C630(void)
{
    unsigned polls = 0;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053C630: ;
    eax = MEM32(0x5499E8);
    eax = MEM32(eax + 0x1C28);
    (void)0; /* sfence: cache/ordering hint, nothing to model */
    ecx = MEM32(eax + 0x100410);
    ecx = ecx | 0x10000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x100410) = ecx;

loc_0053C650: ;
    _fa = (uint32_t)(MEM32(eax + 0x100410)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x100410), 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) { gpu_wait_pause(&polls); goto loc_0053C650; } /* jne */

loc_0053C65C: ;
    esp += 4; return; /* ret */

}


void sub_0053C450(void)
{
    unsigned polls = 0;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053C450: ;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0053C460; /* je: equal / zero */

loc_0053C458: ;
    esi = MEM32(edx + 0x770);
    goto loc_0053C462;

loc_0053C460: ;
    esi = MEM32(edx);

loc_0053C462: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0053C4B8; /* jne: not equal / not zero */

loc_0053C467: ;
    PUSH32(esp, 0x0053C46Cu); RECOMP_ABI_CALL(0x0053C630u, sub_0053C630); /* call 0x0053C630 */

loc_0053C46C: ;
    eax = MEM32(edx + 0x1C20);
    esi = esi & 0xFFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x40) = esi;
    eax = MEM32(0x547530);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053C4F0; /* je: equal / zero */

loc_0053C484: ;
    ecx = MEM32(0x5499E8);
    eax = MEM32(ecx + 0x934);

loc_0053C490: ;
    ecx = MEM32(eax + 0x3240);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x3244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x3244) (32-bit) */
    if (CMP_NE(_fa, _fb)) { gpu_wait_pause(&polls); goto loc_0053C490; } /* jne */

loc_0053C49E: ;
    esi = MEM32(eax + 0x400700);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { gpu_wait_pause(&polls); goto loc_0053C490; } /* jne */

loc_0053C4AF: ;
    MEM32(edx + 8) = MEM32(edx + 8) | 0x2000;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0053C4B8: ;
    eax = MEM32(edx);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0x5499E0;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx + 0x1C20) = ecx;
    MEM32(ecx + 0x40) = eax;
    ecx = MEM32(edx + 0x1C20);
    MEM32(ecx + 0x44) = eax;
    eax = MEM32(edx + 0x2C);
    ecx = MEM32(edx + 0x30);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = eax;
    eax = MEM32(edx + 0x2478);
    MEM32(edx + 0x1DE4) = eax;

loc_0053C4F0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
