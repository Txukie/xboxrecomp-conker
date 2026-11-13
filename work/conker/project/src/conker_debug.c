/*
 * The debug build (cmake -DCONKER_DEBUG=ON, packaged as
 * Conker-Recomp-<version>-debug): a readout over the picture and a log, so a
 * screenshot of a bug says where it happened and the log says what led to it.
 *
 * The readout, top left, a line each:
 *   version, time since start (s), the game's frame counter (0x7F9F60), the
 *   window's frames a second, the frame rate setting and this frame's ticks (0x6C0268)
 *   the level (0x7FA1F8) and the level package last opened, the save slot
 *   Conker's position (player +0x30/+0x34/+0x38), facing (+0x170, degrees)
 *   and state (+0xA4)
 *   the cutscene (0x76F0E0 playing, 0x76F0F8 frame, 0x76F0E8 its end)
 * The time and the frame counter are in the log too, so a screenshot finds its
 * place there.
 *
 * Each run has a folder of its own, named by its start time, in
 * $XDG_DATA_HOME/conker-recomp/debug (~/.local/share/...) or
 * %LOCALAPPDATA%\ConkerRecomp\debug: log.txt, the sound of each level
 * (conker_debug_audio.c) and the marks. The log takes everything the game
 * prints.
 * To that it adds a [DBG] line a second with the readout, and one at each
 * change of level, level package, cutscene and Conker's state. On Linux it
 * also samples where the process spends its CPU time (SIGPROF every 5 ms of
 * CPU) and writes the busiest functions, by thread, every 10 s ([PROF]).
 *
 * F12 is a mark: a [MARK] line in the log and the window as it is, in the
 * run's folder (mark-NN.bmp), for "it happened here".
 */
#if !defined(_WIN32)
#define _GNU_SOURCE           /* dladdr, REG_RIP */
#endif
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#if defined(_WIN32)
#include <direct.h>
#include <io.h>
#include <windows.h>
#define dup2 _dup2
#define fileno _fileno
#else
#include <dlfcn.h>
#include <elf.h>
#include <signal.h>
#include <sys/stat.h>
#include <sys/syscall.h>
#include <sys/prctl.h>
#include <sys/time.h>
#include <ucontext.h>
#include <unistd.h>
#endif

#include "conker_settings.h"
#include "video_player.h"

extern ptrdiff_t g_xbox_mem_offset;
extern void (*g_xbox_path_hook)(const char *xbox_path);
const uint8_t *conker_font_glyph(int ch);    /* conker_firstrun.c */

#define LEVEL         0x007FA1F8u
#define FRAME_COUNT   0x007F9F60u
#define TICKS         0x006C0268u
#define PLAYER        0x0084A5F8u
#define CUT_PLAYING   0x0076F0E0u
#define CUT_FRAME     0x0076F0F8u
#define CUT_END       0x0076F0E8u
#define GUEST_TOP     0x08000000u        /* 128 MB */

static uint64_t s_start_ms;
static char s_log_path[1024];
static char s_run_dir[960];
static char s_package[2][64];          /* written by the guest thread, read by the window's */
static volatile int s_package_cur;

static uint64_t now_ms(void)
{
    return SDL_GetTicks64();
}

static int guest_ok(uint32_t va, uint32_t size)
{
    return g_xbox_mem_offset && va >= 0x10000u && va < GUEST_TOP - size;
}

static uint32_t g32(uint32_t va)
{
    return guest_ok(va, 4) ? *(volatile uint32_t *)(g_xbox_mem_offset + va) : 0;
}

static float gf(uint32_t va)
{
    return guest_ok(va, 4) ? *(volatile float *)(g_xbox_mem_offset + va) : 0.0f;
}

/* ── The log ──────────────────────────────────────────────────────────── */

static void make_dir(const char *path)
{
#if defined(_WIN32)
    _mkdir(path);
#else
    mkdir(path, 0755);
#endif
}

void conker_debug_open_log(void)
{
    char dir[900];
    const char *base;
    time_t t = time(NULL);
    struct tm tm;

#if defined(_WIN32)
    base = getenv("LOCALAPPDATA");
    if (!base || !*base)
        return;
    snprintf(dir, sizeof dir, "%s\\ConkerRecomp", base);
    make_dir(dir);
    snprintf(dir, sizeof dir, "%s\\ConkerRecomp\\debug", base);
    make_dir(dir);
    localtime_s(&tm, &t);
#else
    char data[700];
    base = getenv("XDG_DATA_HOME");
    if (base && *base)
        snprintf(data, sizeof data, "%s", base);
    else if ((base = getenv("HOME")) && *base)
        snprintf(data, sizeof data, "%s/.local/share", base);
    else
        return;
    snprintf(dir, sizeof dir, "%s/conker-recomp", data);
    make_dir(dir);
    snprintf(dir, sizeof dir, "%s/conker-recomp/debug", data);
    make_dir(dir);
    localtime_r(&t, &tm);
#endif
    snprintf(s_run_dir, sizeof s_run_dir, "%s/conker-%04d%02d%02d-%02d%02d%02d", dir,
             tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    make_dir(s_run_dir);
    snprintf(s_log_path, sizeof s_log_path, "%s/log.txt", s_run_dir);
    if (!freopen(s_log_path, "w", stderr)) {
        s_run_dir[0] = 0;
        s_log_path[0] = 0;
        return;
    }
    dup2(fileno(stderr), fileno(stdout));
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    s_start_ms = now_ms();
    fprintf(stderr, "[DBG] debug build, log %s\n", s_log_path);
}

/* The level packages the game opens (D:\dvddata\aid\zpackage\Level\<name>\...),
 * from the kernel's path translation, on the guest thread. */
static void path_hook(const char *p)
{
    const char *k = strstr(p, "zpackage\\Level\\");
    int next = !s_package_cur;
    size_t n;

    if (!k)
        return;
    k += strlen("zpackage\\Level\\");
    for (n = 0; k[n] && k[n] != '\\' && n + 1 < sizeof s_package[0]; n++)
        s_package[next][n] = k[n];
    s_package[next][n] = 0;
    if (strcmp(s_package[next], s_package[s_package_cur])) {
        s_package_cur = next;
        fprintf(stderr, "[DBG] t=%.1f level package %s\n",
                (now_ms() - s_start_ms) / 1000.0, s_package[next]);
    }
}

/* For conker_debug_audio.c. */
const char *conker_debug_run_dir(void)
{
    return s_run_dir;
}

double conker_debug_time(void)
{
    return (now_ms() - s_start_ms) / 1000.0;
}

uint32_t conker_debug_level(void)
{
    return g32(LEVEL);
}

const char *conker_debug_level_name(void)
{
    return s_package[s_package_cur];
}

/* ── Where the CPU time goes (Linux) ─────────────────────────────────────── */

#if !defined(_WIN32)
typedef struct { uint64_t start, end; const char *name; } Func;

static Func *s_funcs;
static size_t s_nfuncs;
static uintptr_t s_base;
#define SAMPLES 16384
static volatile uint64_t s_sample_pc[SAMPLES];
static volatile uint32_t s_sample_tid[SAMPLES];
static volatile uint32_t s_samples;     /* written by the signal handler only */

static int func_cmp(const void *a, const void *b)
{
    const Func *x = a, *y = b;
    return x->start < y->start ? -1 : x->start > y->start;
}

/* The functions of our own executable, from its symbol table. */
static void load_symbols(void)
{
    Dl_info info;
    FILE *f = fopen("/proc/self/exe", "rb");
    long size;
    uint8_t *img;
    const Elf64_Ehdr *eh;
    const Elf64_Shdr *sh;
    int i;

    if (!f || !dladdr((void *)load_symbols, &info)) {
        if (f)
            fclose(f);
        return;
    }
    s_base = (uintptr_t)info.dli_fbase;
    fseek(f, 0, SEEK_END);
    size = ftell(f);
    fseek(f, 0, SEEK_SET);
    img = malloc((size_t)size);
    if (!img || fread(img, 1, (size_t)size, f) != (size_t)size) {
        free(img);
        fclose(f);
        return;
    }
    fclose(f);
    eh = (const Elf64_Ehdr *)img;
    sh = (const Elf64_Shdr *)(img + eh->e_shoff);
    for (i = 0; i < eh->e_shnum; i++) {
        const Elf64_Sym *sym;
        const char *str;
        size_t n, j;

        if (sh[i].sh_type != SHT_SYMTAB)
            continue;
        sym = (const Elf64_Sym *)(img + sh[i].sh_offset);
        str = (const char *)(img + sh[sh[i].sh_link].sh_offset);
        n = sh[i].sh_size / sizeof *sym;
        s_funcs = malloc(n * sizeof *s_funcs);
        for (j = 0; s_funcs && j < n; j++)
            if (ELF64_ST_TYPE(sym[j].st_info) == STT_FUNC && sym[j].st_value) {
                s_funcs[s_nfuncs].start = sym[j].st_value;
                s_funcs[s_nfuncs].end = sym[j].st_value + (sym[j].st_size ? sym[j].st_size : 1);
                s_funcs[s_nfuncs].name = strdup(str + sym[j].st_name);
                s_nfuncs++;
            }
        break;
    }
    free(img);
    if (s_nfuncs)
        qsort(s_funcs, s_nfuncs, sizeof *s_funcs, func_cmp);
}

static const char *func_name(uint64_t pc)
{
    size_t lo = 0, hi = s_nfuncs;
    uint64_t off = pc - s_base;

    if (pc < s_base)
        return NULL;
    while (lo < hi) {
        size_t mid = (lo + hi) / 2;
        if (s_funcs[mid].start <= off)
            lo = mid + 1;
        else
            hi = mid;
    }
    if (lo && off < s_funcs[lo - 1].end)
        return s_funcs[lo - 1].name;
    return NULL;
}

/* Outside our executable: the library's own export, or else its file. */
static const char *lib_name(uint64_t pc)
{
    Dl_info info;
    const char *slash;

    if (!dladdr((void *)(uintptr_t)pc, &info))
        return NULL;
    if (info.dli_sname)
        return info.dli_sname;
    if (!info.dli_fname)
        return NULL;
    slash = strrchr(info.dli_fname, '/');
    return slash ? slash + 1 : info.dli_fname;
}

static void on_prof(int sig, siginfo_t *si, void *ctx)
{
    ucontext_t *uc = ctx;
    uint32_t i = __atomic_fetch_add(&s_samples, 1, __ATOMIC_RELAXED) % SAMPLES;

    (void)sig;
    (void)si;
    s_sample_pc[i] = (uint64_t)uc->uc_mcontext.gregs[REG_RIP];
    s_sample_tid[i] = (uint32_t)syscall(SYS_gettid);
}

static void profile_start(void)
{
    struct sigaction sa;
    struct itimerval it;

    load_symbols();
    memset(&sa, 0, sizeof sa);
    sa.sa_sigaction = on_prof;
    sa.sa_flags = SA_SIGINFO | SA_RESTART;
    sigemptyset(&sa.sa_mask);
    sigaction(SIGPROF, &sa, NULL);
    it.it_interval.tv_sec = 0;
    it.it_interval.tv_usec = 5000;
    it.it_value = it.it_interval;
    setitimer(ITIMER_PROF, &it, NULL);
}

typedef struct { uint32_t tid; const char *name; uint64_t pc; unsigned n; } Hit;

static int hit_cmp(const void *a, const void *b)
{
    const Hit *x = a, *y = b;
    return (int)y->n - (int)x->n;
}

/* The samples since the last report, by thread and function: the threads
 * with their share of the CPU, then the twelve busiest functions. */
static void profile_report(double t)
{
    static uint32_t last;
    uint32_t now = s_samples, i, n = now - last;
    static Hit hits[4096];
    size_t nh = 0, k;
    struct { uint32_t tid; unsigned n; } th[32];
    size_t nt = 0;

    if (n > SAMPLES)
        n = SAMPLES;
    for (i = now - n; i != now; i++) {
        uint32_t tid = s_sample_tid[i % SAMPLES];
        uint64_t pc = s_sample_pc[i % SAMPLES];
        const char *name = func_name(pc);
        if (!name)
            name = lib_name(pc);
        for (k = 0; k < nt && th[k].tid != tid; k++)
            ;
        if (k == nt && nt < 32)
            th[nt++] = (typeof(th[0])){ tid, 0 };
        if (k < nt)
            th[k].n++;
        for (k = 0; k < nh; k++)
            if (hits[k].tid == tid && (name ? hits[k].name == name : !hits[k].name && hits[k].pc >> 12 == pc >> 12))
                break;
        if (k == nh) {
            if (nh == sizeof hits / sizeof hits[0])
                continue;
            hits[nh++] = (Hit){ tid, name, pc, 0 };
        }
        hits[k].n++;
    }
    last = now;
    if (!n)
        return;
    fprintf(stderr, "[PROF] t=%.1f %u samples (5 ms of CPU each):", t, n);
    for (k = 0; k < nt; k++) {
        char path[64], comm[32] = "?";
        FILE *f;
        snprintf(path, sizeof path, "/proc/self/task/%u/comm", th[k].tid);
        if ((f = fopen(path, "r"))) {
            if (fgets(comm, sizeof comm, f))
                comm[strcspn(comm, "\n")] = 0;
            fclose(f);
        }
        fprintf(stderr, " %s/%u %u%%", comm, th[k].tid, th[k].n * 100 / n);
    }
    fprintf(stderr, "\n");
    qsort(hits, nh, sizeof *hits, hit_cmp);
    for (k = 0; k < nh && k < 12; k++) {
        if (hits[k].name)
            fprintf(stderr, "[PROF]   %5.1f%% %u %s\n", hits[k].n * 100.0 / n, hits[k].tid, hits[k].name);
        else
            fprintf(stderr, "[PROF]   %5.1f%% %u (outside, 0x%llx)\n", hits[k].n * 100.0 / n, hits[k].tid,
                    (unsigned long long)hits[k].pc);
    }
}
#else
static void profile_start(void) {}
static void profile_report(double t) { (void)t; }
#endif

/* ── The readout ──────────────────────────────────────────────────────── */

typedef struct {
    uint32_t level, frame, ticks, state, cut_playing, cut_frame, cut_end;
    int has_player, heading;
    float x, y, z;
} Snapshot;

static void snapshot(Snapshot *s)
{
    uint32_t pl;

    memset(s, 0, sizeof *s);
    s->level = g32(LEVEL);
    s->frame = g32(FRAME_COUNT);
    s->ticks = guest_ok(TICKS, 1) ? *(volatile uint8_t *)(g_xbox_mem_offset + TICKS) : 0;
    pl = g32(PLAYER);
    if (guest_ok(pl, 0x200)) {
        s->has_player = 1;
        s->x = gf(pl + 0x30);
        s->y = gf(pl + 0x34);
        s->z = gf(pl + 0x38);
        s->heading = (int)((g32(pl + 0x170) & 0xFFFF) * 360u / 65536u);
        s->state = g32(pl + 0xA4);
    }
    s->cut_playing = guest_ok(CUT_PLAYING, 1) ? *(volatile uint8_t *)(g_xbox_mem_offset + CUT_PLAYING) : 0;
    s->cut_frame = g32(CUT_FRAME);
    s->cut_end = g32(CUT_END);
}

#define LINES 4
#define COLS  96

static void readout(const Snapshot *s, double t, double fps, char out[LINES][COLS])
{
    snprintf(out[0], COLS, "CONKER %s DEBUG  t %.1f  frame %u  %.0f fps (set %d)  ticks %u",
             CONKER_VERSION, t, s->frame, fps, conker_settings_fps_limit(), s->ticks);
    snprintf(out[1], COLS, "level 0x%02X %s  game %d", s->level,
             s_package[s_package_cur][0] ? s_package[s_package_cur] : "-",
             conker_settings_last_game() + 1);
    if (s->has_player)
        snprintf(out[2], COLS, "pos %.1f %.1f %.1f  facing %d  state %u",
                 s->x, s->y, s->z, s->heading, s->state);
    else
        snprintf(out[2], COLS, "no player");
    if (s->cut_playing)
        snprintf(out[3], COLS, "cutscene frame %d of %d", (int)s->cut_frame, (int)s->cut_end);
    else
        snprintf(out[3], COLS, "no cutscene");
}

/* What changed since the last frame, and a status line a second. */
static void log_changes(const Snapshot *s, double t, double fps, uint64_t now)
{
    static Snapshot last;
    static int have;
    static uint64_t next_status;
    static unsigned status_n;

    if (have && s->level != last.level)
        fprintf(stderr, "[DBG] t=%.1f frame %u level 0x%02X -> 0x%02X\n", t, s->frame,
                last.level, s->level);
    if (have && s->cut_playing != last.cut_playing)
        fprintf(stderr, "[DBG] t=%.1f frame %u cutscene %s (frame %d of %d)\n", t, s->frame,
                s->cut_playing ? "starts" : "ends", (int)s->cut_frame, (int)s->cut_end);
    if (have && s->has_player && last.has_player && s->state != last.state)
        fprintf(stderr, "[DBG] t=%.1f frame %u state %u -> %u at %.1f %.1f %.1f\n", t, s->frame,
                last.state, s->state, s->x, s->y, s->z);
    if (now >= next_status) {
        char lines[LINES][COLS];
        int i;

        readout(s, t, fps, lines);
        fprintf(stderr, "[DBG] t=%.1f", t);
        for (i = 1; i < LINES; i++)
            fprintf(stderr, " | %s", lines[i]);
        fprintf(stderr, " | %.0f fps ticks %u frame %u\n", fps, s->ticks, s->frame);
        next_status = now + 1000;
        if (++status_n % 10 == 0)
            profile_report(t);
    }
    last = *s;
    have = 1;
}

/* F12: a [MARK] line and the window as it is, readout included. */
static void mark(SDL_Renderer *ren, const Snapshot *s, double t)
{
    static int down, n;
    const Uint8 *keys = SDL_GetKeyboardState(NULL);
    int now_down = keys && keys[SDL_SCANCODE_F12];
    char path[1100];
    int w, h;
    SDL_Surface *sf;

    if (!now_down || down) {
        down = now_down;
        return;
    }
    down = 1;
    n++;
    snprintf(path, sizeof path, "%s/mark-%02d.bmp", s_run_dir, n);
    fprintf(stderr, "[MARK] %d t=%.1f frame %u level 0x%02X %s pos %.1f %.1f %.1f state %u -> %s\n",
            n, t, s->frame, s->level, s_package[s_package_cur], s->x, s->y, s->z, s->state, path);
    if (!s_run_dir[0] || SDL_GetRendererOutputSize(ren, &w, &h) != 0)
        return;
    sf = SDL_CreateRGBSurfaceWithFormat(0, w, h, 32, SDL_PIXELFORMAT_ARGB8888);
    if (!sf)
        return;
    if (SDL_RenderReadPixels(ren, NULL, SDL_PIXELFORMAT_ARGB8888, sf->pixels, sf->pitch) == 0)
        SDL_SaveBMP(sf, path);
    SDL_FreeSurface(sf);
}

/* The letters into a pixel buffer, white on a dark band, then one texture. */
static void draw(void *renderer, int x, int y, int w, int h)
{
    static SDL_Texture *tex;
    static int tex_w, tex_h;
    static uint32_t *px;
    static uint64_t fps_t0;
    static unsigned fps_frames;
    static double fps;
    SDL_Renderer *ren = renderer;
    char lines[LINES][COLS];
    Snapshot s;
    uint64_t now = now_ms();
    int scale = h >= 1440 ? 3 : h >= 720 ? 2 : 1;
    int i, tw, th, longest = 0;
    double t = (now - s_start_ms) / 1000.0;
    SDL_Rect dst;

    (void)w;
    fps_frames++;
    if (!fps_t0)
        fps_t0 = now;
    if (now - fps_t0 >= 500) {
        fps = fps_frames * 1000.0 / (double)(now - fps_t0);
        fps_frames = 0;
        fps_t0 = now;
    }
    snapshot(&s);
    log_changes(&s, t, fps, now);
    readout(&s, t, fps, lines);
    for (i = 0; i < LINES; i++)
        if ((int)strlen(lines[i]) > longest)
            longest = (int)strlen(lines[i]);
    tw = longest * 6 + 6;
    th = LINES * 10 + 4;
    if (!tex || tw != tex_w || th != tex_h) {
        if (tex)
            SDL_DestroyTexture(tex);
        free(px);
        px = malloc((size_t)tw * th * 4);
        tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, tw, th);
        if (!tex || !px)
            return;
        SDL_SetTextureBlendMode(tex, SDL_BLENDMODE_BLEND);
        tex_w = tw;
        tex_h = th;
    }
    for (i = 0; i < tw * th; i++)
        px[i] = 0xA0000000u;
    for (i = 0; i < LINES; i++) {
        const char *c = lines[i];
        int cx = 3, cy = 2 + i * 10, col, row;
        uint32_t color = i == 0 ? 0xFFFFE070u : 0xFFFFFFFFu;

        for (; *c; c++, cx += 6) {
            const uint8_t *g = conker_font_glyph((unsigned char)*c);
            for (col = 0; col < 5; col++)
                for (row = 0; row < 8; row++)
                    if (g[col] >> row & 1)
                        px[(cy + row) * tw + cx + col] = color;
        }
    }
    SDL_UpdateTexture(tex, NULL, px, tw * 4);
    dst.x = x + 4;
    dst.y = y + 4;
    dst.w = tw * scale;
    dst.h = th * scale;
    SDL_RenderCopy(ren, tex, NULL, &dst);
    mark(ren, &s, t);
}

void conker_debug_install(void)
{
    if (!s_start_ms)
        s_start_ms = now_ms();
    g_xbox_path_hook = path_hook;
    xbox_WindowSetOverlay(draw);
    profile_start();
#ifndef _WIN32
    /* Let a debugger or eu-stack from outside attach (Yama's ptrace_scope 1
     * otherwise allows only an ancestor): a stuck or slow stretch can then be
     * sampled with every thread's stack. */
    prctl(PR_SET_PTRACER, PR_SET_PTRACER_ANY, 0, 0, 0);
#endif
    {
        extern void conker_debug_audio_install(void);
        conker_debug_audio_install();
    }
}
