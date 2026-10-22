/*
 * Recomp Options: values, the cfg file, what each one changes, and the
 * submenu's handling of the pad (conker_settings.h).
 *
 * The submenu borrows the controller: while it is open the input filter
 * reads the pad itself and hands the title a pad at rest, so the game's own
 * Options menu stays where it was (on Recomp Options) and sees nothing.
 * Opening and closing also swallow the button that did it until it is let
 * go, or the title would take that release-and-press as its own.
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if defined(_WIN32)
#include <windows.h>
#else
#include <time.h>
#endif

#include "conker_settings.h"
#include "conker_host.h"
#include "xinput_xbox.h"
#include "video_player.h"
#include "display_aspect.h"
#include "nv2a_backend.h"
#ifdef CONKER_HAVE_VULKAN
#include "nv2a_vk.h"
#endif

/* ── The values ───────────────────────────────────────────────────────── */

static const char *const k_modes[] = { "Windowed", "Fullscreen", "Borderless Fullscreen" };
static const char *const k_mode_keys[] = { "windowed", "fullscreen", "borderless" };
static const struct { const char *name; int w, h; } k_aspects[] = {
    { "4:3", 4, 3 }, { "16:9", 16, 9 }, { "16:10", 16, 10 },
    { "21:9", 21, 9 }, { "32:9", 32, 9 },
};
#define N_ASPECTS ((int)(sizeof k_aspects / sizeof k_aspects[0]))
static const int k_fps[] = { 30, 60, 90, 120 };
#define N_FPS ((int)(sizeof k_fps / sizeof k_fps[0]))
#define MAX_SCALE 10

static volatile int s_mode;              /* index into k_modes */
static volatile int s_aspect;            /* index into k_aspects */
static volatile int s_res_w, s_res_h;    /* 0: the window's default size */
static volatile int s_scale = 1;
static volatile int s_vsync = 1;
static volatile int s_fps = 30;
static volatile float s_hor_plus;

static const char *const k_labels[CONKER_OPT_COUNT] = {
    "Display Mode", "Aspect Ratio", "Resolution",
    "Render Resolution", "VSync", "FPS Limit",
};

/* The default window: what fb_present_sdl.c opens without a size, twice
 * 640x480 at the display's shape. */
static void default_window_size(int *w, int *h)
{
    *h = 960;
    *w = (int)(960.0 * k_aspects[s_aspect].w / k_aspects[s_aspect].h + 0.5);
}

/* ── The cfg file ─────────────────────────────────────────────────────── */

static char s_cfg_path[1024];

static void save(void)
{
    FILE *f;

    if (!s_cfg_path[0])
        return;
    f = fopen(s_cfg_path, "w");
    if (!f) {
        fprintf(stderr, "[CONKER] cannot write %s\n", s_cfg_path);
        return;
    }
    fprintf(f, "# Conker: Live & Reloaded recomp -- Recomp Options\n"
               "# (front end: Options > Recomp Options). Rewritten on every change.\n");
    fprintf(f, "display_mode=%s\n", k_mode_keys[s_mode]);
    fprintf(f, "aspect_ratio=%s\n", k_aspects[s_aspect].name);
    if (s_res_w > 0 && s_res_h > 0)
        fprintf(f, "resolution=%dx%d\n", s_res_w, s_res_h);
    else
        fprintf(f, "resolution=default\n");
    fprintf(f, "render_scale=%d\n", s_scale);
    fprintf(f, "vsync=%s\n", s_vsync ? "on" : "off");
    fprintf(f, "fps_limit=%d\n", s_fps);
    fclose(f);
}

static void parse_line(char *line)
{
    char *eq = strchr(line, '='), *key = line, *val, *end;
    int i;

    if (!eq || line[0] == '#')
        return;
    *eq = 0;
    val = eq + 1;
    for (end = val + strlen(val); end > val && (end[-1] == '\n' || end[-1] == '\r'
                                                 || end[-1] == ' '); end--)
        end[-1] = 0;
    if (!strcmp(key, "display_mode")) {
        for (i = 0; i < 3; i++)
            if (!strcmp(val, k_mode_keys[i]))
                s_mode = i;
    } else if (!strcmp(key, "aspect_ratio")) {
        for (i = 0; i < N_ASPECTS; i++)
            if (!strcmp(val, k_aspects[i].name))
                s_aspect = i;
    } else if (!strcmp(key, "resolution")) {
        int w = 0, h = 0;
        if (sscanf(val, "%dx%d", &w, &h) == 2 && w >= 640 && h >= 480
                && w <= 16384 && h <= 16384) {
            s_res_w = w;
            s_res_h = h;
        }
    } else if (!strcmp(key, "render_scale")) {
        i = atoi(val);
        if (i >= 1 && i <= MAX_SCALE)
            s_scale = i;
    } else if (!strcmp(key, "vsync")) {
        s_vsync = strcmp(val, "off") != 0;
    } else if (!strcmp(key, "fps_limit")) {
        i = atoi(val);
        for (int k = 0; k < N_FPS; k++)
            if (k_fps[k] == i)
                s_fps = i;
    }
}

/* ── Applying ─────────────────────────────────────────────────────────── */

static void apply_window(void)
{
    int w = s_res_w, h = s_res_h;
    if (s_mode == 0 && (w <= 0 || h <= 0))
        default_window_size(&w, &h);
    xbox_WindowSetMode(s_mode, w, h);
}

static void apply_aspect(int to_display)
{
    double a = (double)k_aspects[s_aspect].w / k_aspects[s_aspect].h;
    s_hor_plus = s_aspect == 0 ? 0.0f : (float)(a / (4.0 / 3.0));
    if (to_display)
        xbox_SetDisplayAspect(s_aspect == 0 ? 0.0 : a);
}

static void apply_scale(void)
{
#ifdef CONKER_HAVE_VULKAN
    nv2a_vk_set_render_scale((unsigned)s_scale);
#endif
}

static void apply_fps(void)
{
    /* 30 is the console's: the title's own interval on the vblank clock. */
    nv2a_pb_exec_set_frame_limit(s_fps == 30 ? 0u : (unsigned)s_fps);
}

void conker_settings_load(void)
{
    FILE *f;
    char line[256];
    const char *e;

    conker_host_config_path(s_cfg_path, sizeof s_cfg_path);
    f = s_cfg_path[0] ? fopen(s_cfg_path, "r") : NULL;
    if (f) {
        while (fgets(line, sizeof line, f))
            parse_line(line);
        fclose(f);
        fprintf(stderr, "[CONKER] settings from %s\n", s_cfg_path);
    }

    /* CONKER_ASPECT keeps working: the nearest shape on the list. */
    e = getenv("CONKER_ASPECT");
    if (e && *e) {
        char *end = NULL;
        double a = strtod(e, &end), best = 1e9;
        int i;
        if (end && *end == ':') {
            double b = strtod(end + 1, NULL);
            a = b > 0.0 ? a / b : 0.0;
        }
        for (i = 0; a > 0.0 && i < N_ASPECTS; i++) {
            double d = (double)k_aspects[i].w / k_aspects[i].h - a;
            if (d < 0)
                d = -d;
            if (d < best) {
                best = d;
                s_aspect = i;
            }
        }
    }
    apply_aspect(!getenv("RECOMP_DISPLAY_ASPECT"));
    if (s_aspect)
        fprintf(stderr, "[CONKER] widescreen: %s, horizontal view x%.4f\n",
                k_aspects[s_aspect].name, s_hor_plus);
    if (s_mode != 0 || s_res_w > 0)
        apply_window();
    if (!getenv("RECOMP_PRESENT_VSYNC"))
        xbox_WindowSetVsync(s_vsync);
    if (s_scale != 1)
        apply_scale();
    if (s_fps != 30)
        apply_fps();
}

float conker_settings_hor_plus(void)
{
    return s_hor_plus;
}

/* ── The submenu's rows ──────────────────────────────────────────────── */

/* The resolutions offered: the display's, plus the window's own size when
 * that is not one of them. Rebuilt when the submenu opens. */
static int s_res[66][2];
static int s_nres;

static void build_resolutions(void)
{
    int w = s_res_w, h = s_res_h, i;

    s_nres = xbox_WindowResolutions(s_res, 64);
    if (w <= 0 || h <= 0)
        default_window_size(&w, &h);
    for (i = 0; i < s_nres; i++)
        if (s_res[i][0] == w && s_res[i][1] == h)
            return;
    /* Not a display mode: in, by area, so left/right still step in order. */
    for (i = s_nres; i > 0 && (long)s_res[i - 1][0] * s_res[i - 1][1] < (long)w * h; i--) {
        s_res[i][0] = s_res[i - 1][0];
        s_res[i][1] = s_res[i - 1][1];
    }
    s_res[i][0] = w;
    s_res[i][1] = h;
    s_nres++;
}

const char *conker_options_label(int row)
{
    return row >= 0 && row < CONKER_OPT_COUNT ? k_labels[row] : "";
}

void conker_options_value(int row, char *buf, size_t size)
{
    switch (row) {
    case CONKER_OPT_DISPLAY_MODE:
        snprintf(buf, size, "%s", k_modes[s_mode]);
        break;
    case CONKER_OPT_ASPECT:
        snprintf(buf, size, "%s", k_aspects[s_aspect].name);
        break;
    case CONKER_OPT_RESOLUTION: {
        int w = s_res_w, h = s_res_h;
        if (w <= 0 || h <= 0)
            default_window_size(&w, &h);
        snprintf(buf, size, "%dx%d", w, h);
        break;
    }
    case CONKER_OPT_RENDER_SCALE:
        if (s_scale == 1)
            snprintf(buf, size, "Original (1X)");
        else
            snprintf(buf, size, "%dX", s_scale);
        break;
    case CONKER_OPT_VSYNC:
        snprintf(buf, size, "%s", s_vsync ? "On" : "Off");
        break;
    case CONKER_OPT_FPS:
        snprintf(buf, size, "%d FPS", s_fps);
        break;
    default:
        if (size)
            buf[0] = 0;
    }
}

static int wrap(int v, int n)
{
    return ((v % n) + n) % n;
}

/* Left (-1) or right (+1) on a row: the next value, applied and saved. */
static void change(int row, int dir)
{
    int i;

    switch (row) {
    case CONKER_OPT_DISPLAY_MODE:
        s_mode = wrap(s_mode + dir, 3);
        apply_window();
        break;
    case CONKER_OPT_ASPECT:
        s_aspect = wrap(s_aspect + dir, N_ASPECTS);
        apply_aspect(1);
        break;
    case CONKER_OPT_RESOLUTION: {
        int w = s_res_w, h = s_res_h, at = 0;
        if (!s_nres)
            build_resolutions();
        if (!s_nres)
            return;
        if (w <= 0 || h <= 0)
            default_window_size(&w, &h);
        for (i = 0; i < s_nres; i++)
            if (s_res[i][0] == w && s_res[i][1] == h)
                at = i;
        /* The list runs largest first: right is a larger one. */
        at = wrap(at - dir, s_nres);
        s_res_w = s_res[at][0];
        s_res_h = s_res[at][1];
        apply_window();
        break;
    }
    case CONKER_OPT_RENDER_SCALE:
        s_scale = wrap(s_scale - 1 + dir, MAX_SCALE) + 1;
        apply_scale();
        break;
    case CONKER_OPT_VSYNC:
        s_vsync = !s_vsync;
        xbox_WindowSetVsync(s_vsync);
        break;
    case CONKER_OPT_FPS:
        for (i = 0; i < N_FPS && k_fps[i] != s_fps; i++)
            ;
        s_fps = k_fps[wrap((i < N_FPS ? i : 0) + dir, N_FPS)];
        apply_fps();
        break;
    default:
        return;
    }
    save();
}

/* ── The pad ──────────────────────────────────────────────────────────── */

enum { P_UP = 1, P_DOWN = 2, P_LEFT = 4, P_RIGHT = 8, P_A = 16, P_B = 32 };
#define PORTS 4
#define REPEAT_FIRST_MS 400u
#define REPEAT_NEXT_MS  130u
/* The page counts as showing for this long after it was last drawn. */
#define PAGE_FRESH_MS   250u

static volatile uint64_t s_page_ms;
static volatile int s_recomp_selected;
static volatile int s_open, s_row;
static uint64_t s_open_ms;
static unsigned s_prev[PORTS], s_swallow[PORTS];
static uint64_t s_held_since[PORTS], s_repeat_at[PORTS];

static uint64_t now_ms(void)
{
#if defined(_WIN32)
    return GetTickCount64();
#else
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000u + (uint64_t)ts.tv_nsec / 1000000u;
#endif
}

void conker_options_page_seen(int recomp_selected)
{
    s_recomp_selected = recomp_selected;
    s_page_ms = now_ms();
}

int conker_options_is_open(void)
{
    return s_open;
}

int conker_options_row(void)
{
    return s_row;
}

static unsigned pad_bits(const XBOX_INPUT_STATE *st)
{
    const XBOX_GAMEPAD *g = &st->Gamepad;
    unsigned b = 0;

    if ((g->wButtons & XBOX_GAMEPAD_DPAD_UP) || g->sThumbLY > 16000)
        b |= P_UP;
    if ((g->wButtons & XBOX_GAMEPAD_DPAD_DOWN) || g->sThumbLY < -16000)
        b |= P_DOWN;
    if ((g->wButtons & XBOX_GAMEPAD_DPAD_LEFT) || g->sThumbLX < -16000)
        b |= P_LEFT;
    if ((g->wButtons & XBOX_GAMEPAD_DPAD_RIGHT) || g->sThumbLX > 16000)
        b |= P_RIGHT;
    if (g->bAnalogButtons[XBOX_BUTTON_A] > 30)
        b |= P_A;
    if (g->bAnalogButtons[XBOX_BUTTON_B] > 30)
        b |= P_B;
    return b;
}

/* The title's view of the pad while the submenu has it: at rest. The
 * packet number still moves, as a live pad's does. */
static void rest(XBOX_INPUT_STATE *st)
{
    memset(&st->Gamepad, 0, sizeof st->Gamepad);
}

static void swallow_all(void)
{
    int p;
    for (p = 0; p < PORTS; p++)
        s_swallow[p] = 1;
}

static void input_filter(DWORD port, XBOX_INPUT_STATE *st, int connected)
{
    uint64_t now = now_ms();
    unsigned bits, pressed, dirs;
    int page = now - s_page_ms < PAGE_FRESH_MS;

    if (!connected || port >= PORTS)
        return;
    bits = pad_bits(st);
    pressed = bits & ~s_prev[port];
    s_prev[port] = bits;

    if (s_swallow[port]) {
        if (bits)
            rest(st);
        else
            s_swallow[port] = 0;
        if (!s_open)
            return;
    }

    if (!s_open) {
        if (page && s_recomp_selected && (pressed & P_A)) {
            build_resolutions();
            s_row = 0;
            s_open_ms = now;
            s_open = 1;
            swallow_all();
            rest(st);
            fprintf(stderr, "[CONKER] Recomp Options opened\n");
        }
        return;
    }

    /* The page went away under the submenu (the title moved on). */
    if (!page && now - s_open_ms > 1000) {
        s_open = 0;
        return;
    }
    rest(st);
    if (pressed & P_B) {
        s_open = 0;
        swallow_all();
        fprintf(stderr, "[CONKER] Recomp Options closed\n");
        return;
    }

    /* Directions: once on the press, then repeating while held. */
    dirs = bits & (P_UP | P_DOWN | P_LEFT | P_RIGHT);
    if (pressed & dirs) {
        s_held_since[port] = now;
        s_repeat_at[port] = now + REPEAT_FIRST_MS;
        dirs = pressed & dirs;
    } else if (dirs && now >= s_repeat_at[port]) {
        s_repeat_at[port] = now + REPEAT_NEXT_MS;
    } else {
        dirs = 0;
    }
    if (dirs & P_UP)
        s_row = wrap(s_row - 1, CONKER_OPT_COUNT);
    else if (dirs & P_DOWN)
        s_row = wrap(s_row + 1, CONKER_OPT_COUNT);
    else if (dirs & P_LEFT)
        change(s_row, -1);
    else if (dirs & P_RIGHT)
        change(s_row, +1);
    else if (pressed & P_A)
        change(s_row, +1);
}

void conker_settings_install_input(void)
{
    xbox_InputSetFilter(input_filter);
}
