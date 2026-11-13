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
#include "conker_mods.h"
#include "xinput_xbox.h"
#include "video_player.h"
#include "display_aspect.h"
#include "nv2a_backend.h"
#include "input_map.h"
#ifdef CONKER_HAVE_VULKAN
#include "nv2a_vk.h"
#endif

/* src/apu (apu_xaudio2.h): the output device and its gain. */
void xa2_set_device(const char *name);
void xa2_set_volume(float gain);

/* ── The values ───────────────────────────────────────────────────────── */

void xbox_SetLanguage(unsigned long language);   /* src/kernel/kernel_xbox.c */

/* Names as each language writes its own, as far as the fonts have the letters
 * (conker_lang.c). */
static const struct { const char *name, *key; unsigned long xbox; } k_languages[CONKER_LANG_COUNT] = {
    { "English", "english", 1 }, { "Español", "spanish", 5 }, { "Français", "french", 4 },
    { "Deutsch", "german", 3 }, { "Italiano", "italian", 6 }, { "Japanese", "japanese", 2 },
};
static const char *const k_modes[] = { "Windowed", "Fullscreen", "Borderless Fullscreen" };
static const char *const k_mode_keys[] = { "windowed", "fullscreen", "borderless" };
static const struct { const char *name; int w, h; } k_aspects[] = {
    { "4:3", 4, 3 }, { "16:9", 16, 9 }, { "16:10", 16, 10 },
    { "21:9", 21, 9 }, { "32:9", 32, 9 },
};
#define N_ASPECTS ((int)(sizeof k_aspects / sizeof k_aspects[0]))
static const int k_fps[] = { 30, 60, 90, 120, 150, 180, 210, 240 };
#define N_FPS ((int)(sizeof k_fps / sizeof k_fps[0]))
/* Image quality (nv2a_vk.h). Texture Detail is a level-of-detail bias. */
static const int k_msaa[] = { 1, 2, 4, 8 };
#define N_MSAA ((int)(sizeof k_msaa / sizeof k_msaa[0]))
static const int k_aniso[] = { 1, 2, 4, 8, 16 };
#define N_ANISO ((int)(sizeof k_aniso / sizeof k_aniso[0]))
static const struct { const char *name, *key; float bias; } k_detail[] = {
    { "Normal", "normal", 0.0f }, { "High", "high", -0.5f }, { "Very High", "very_high", -1.0f },
};
#define N_DETAIL ((int)(sizeof k_detail / sizeof k_detail[0]))
/* Model Detail: the characters' level-of-detail distances, scaled; Max keeps
 * the full model at any distance. */
static const struct { const char *name, *key; float scale; } k_models[] = {
    { "Normal", "normal", 1.0f }, { "High", "high", 2.0f }, { "Very High", "very_high", 4.0f },
    { "Max", "max", 1000.0f },
};
#define N_MODELS ((int)(sizeof k_models / sizeof k_models[0]))
#define FSR_SHARPNESS 0.25f             /* RCAS, stops below the sharpest */
#define MAX_SCALE 10

static volatile int s_language;          /* the choice; takes effect at the next launch */
static int s_language_now;               /* this launch's */
static volatile int s_mode;              /* index into k_modes */
static volatile int s_aspect;            /* index into k_aspects */
static volatile int s_res_w, s_res_h;    /* 0: the window's default size */
static volatile int s_scale = 1;
static volatile int s_vsync = 1;
static volatile int s_fps = 30;
static volatile int s_fsr;               /* Upscaling: 1 FSR 1 */
static volatile int s_msaa = 1;          /* samples */
static volatile int s_smaa;
static volatile int s_aniso = 1;
static volatile int s_detail;            /* index into k_detail */
static volatile int s_model;             /* index into k_models */
static volatile int s_skip_cutscenes;    /* LT skips every cutscene, seen or not */
static volatile int s_swing_button;      /* X swings the weapon (conker_swing.c) */
static volatile int s_weapon;            /* 1: the frying pan (conker_weapon.c) */
static volatile int s_intro_fix;         /* 1: the glass of milk (conker_intro.c) */
static volatile int s_last_game;         /* 0..2: the pub starts on Game 1..3 (conker_pub.c) */
static volatile float s_hor_plus;
/* The launcher's own (conker_firstrun.c): not in the in-game menu. */
static int s_display = -1;               /* SDL display index; -1 the main one */
static char s_audio_device[256];         /* "" the system's default */
static volatile int s_volume = 100;      /* percent */
static char s_pad[2][48];                /* players 1, 2: "" auto, "none", or a device spec */
static char s_pad_name[2][96];           /* the named device's name, as last seen */
static unsigned char s_pad_map[2][INPUT_PAD_CONTROL_COUNT];
static int s_no_cfg;                     /* no cfg file at the start of this run */
static int s_first_run;                  /* the first-run page is choosing (conker_firstrun.c) */

static const char *const k_labels[CONKER_OPT_COUNT] = {
    "Language", "Display Mode", "Aspect Ratio", "Resolution",
    "Render Resolution", "Upscaling", "MSAA", "SMAA", "Anisotropic Filtering", "Texture Detail",
    "Model Detail",
    "VSync", "Frame Rate", "Allow Skip Cutscenes", "Swing Button", "Weapon", "Intro Fix",
    "Uncensor",
};
/* Uncensor: left and right pick, A carries it out (conker_mods.c). */
static const char *const k_uncensor[CONKER_UNCENSOR_CHOICES] = { "Disable", "Enable", "Update" };
static volatile int s_uncensor = -1;     /* the choice showing; -1: the mod's state */

/* The window reports the display once it is open; the first-run page, before
 * it, hands in what it found. */
static int s_page_desk_w, s_page_desk_h;
static int s_page_modes[64][2], s_page_nmodes;

static int desktop_size(int *w, int *h)
{
    if (s_first_run && s_page_desk_w) {
        *w = s_page_desk_w;
        *h = s_page_desk_h;
        return 1;
    }
    return xbox_WindowDesktopSize(w, h);
}

/* The default window: what fb_present_sdl.c opens without a size, twice
 * 640x480 at the display's shape. */
static void default_window_size(int *w, int *h)
{
    int dw, dh;

    *h = 960;
    *w = (int)(960.0 * k_aspects[s_aspect].w / k_aspects[s_aspect].h + 0.5);
    /* A wide shape on a narrower desktop: as wide as the desktop. */
    if (desktop_size(&dw, &dh) && *w > dw) {
        *w = dw;
        *h = (dw * k_aspects[s_aspect].h / k_aspects[s_aspect].w) & ~1;
    }
}

/* ── The cfg file ─────────────────────────────────────────────────────── */

static char s_cfg_path[1024];

static void save(void)
{
    FILE *f;

    if (!s_cfg_path[0] || s_first_run)
        return;
    f = fopen(s_cfg_path, "w");
    if (!f) {
        fprintf(stderr, "[CONKER] cannot write %s\n", s_cfg_path);
        return;
    }
    fprintf(f, "# Conker: Live & Reloaded recomp -- Recomp Options\n"
               "# (front end: Options > Recomp Options). Rewritten on every change.\n");
    fprintf(f, "language=%s\n", k_languages[s_language].key);
    fprintf(f, "display_mode=%s\n", k_mode_keys[s_mode]);
    fprintf(f, "aspect_ratio=%s\n", k_aspects[s_aspect].name);
    if (s_res_w > 0 && s_res_h > 0)
        fprintf(f, "resolution=%dx%d\n", s_res_w, s_res_h);
    else
        fprintf(f, "resolution=default\n");
    fprintf(f, "render_scale=%d\n", s_scale);
    fprintf(f, "upscaling=%s\n", s_fsr ? "fsr1" : "off");
    fprintf(f, "msaa=%d\n", s_msaa);
    fprintf(f, "smaa=%s\n", s_smaa ? "on" : "off");
    fprintf(f, "anisotropic_filtering=%d\n", s_aniso);
    fprintf(f, "texture_detail=%s\n", k_detail[s_detail].key);
    fprintf(f, "model_detail=%s\n", k_models[s_model].key);
    fprintf(f, "vsync=%s\n", s_vsync ? "on" : "off");
    fprintf(f, "fps_limit=%d\n", s_fps);
    fprintf(f, "skip_cutscenes=%s\n", s_skip_cutscenes ? "yes" : "no");
    fprintf(f, "swing_button=%s\n", s_swing_button ? "x" : "off");
    fprintf(f, "weapon=%s\n", s_weapon ? "pan" : "bat");
    fprintf(f, "intro_fix=%s\n", s_intro_fix ? "yes" : "no");
    fprintf(f, "last_game=%d\n", s_last_game + 1);
    fprintf(f, "monitor=%d\n", s_display + 1);
    fprintf(f, "audio_device=%s\n", s_audio_device);
    fprintf(f, "volume=%d\n", s_volume);
    for (int p = 0; p < 2; p++) {
        InputPadMap id;
        xbox_InputMap_PadMapDefaults(&id);
        fprintf(f, "player%d_controller=%s\n", p + 1, s_pad[p][0] ? s_pad[p] : "auto");
        fprintf(f, "player%d_controller_name=%s\n", p + 1, s_pad_name[p]);
        if (!memcmp(id.source, s_pad_map[p], sizeof id.source)) {
            fprintf(f, "player%d_buttons=default\n", p + 1);
        } else {
            fprintf(f, "player%d_buttons=", p + 1);
            for (int c = 0; c < INPUT_PAD_CONTROL_COUNT; c++)
                fprintf(f, "%s%s", c ? "," : "", xbox_InputMap_SourceName(s_pad_map[p][c]));
            fprintf(f, "\n");
        }
    }
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
    if (!strcmp(key, "language")) {
        for (i = 0; i < CONKER_LANG_COUNT; i++)
            if (!strcmp(val, k_languages[i].key))
                s_language = i;
    } else if (!strcmp(key, "display_mode")) {
        for (i = 0; i < 3; i++)
            if (!strcmp(val, k_mode_keys[i]))
                s_mode = i;
    } else if (!strcmp(key, "aspect_ratio")) {
        for (i = 0; i < N_ASPECTS; i++)
            if (!strcmp(val, k_aspects[i].name))
                s_aspect = i;
    } else if (!strcmp(key, "resolution")) {
        int w = 0, h = 0;
        if (sscanf(val, "%dx%d", &w, &h) == 2 && w >= 640 && h >= 360
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
    } else if (!strcmp(key, "upscaling")) {
        s_fsr = !strcmp(val, "fsr1");
    } else if (!strcmp(key, "msaa")) {
        i = atoi(val);
        for (int k = 0; k < N_MSAA; k++)
            if (k_msaa[k] == i)
                s_msaa = i;
    } else if (!strcmp(key, "smaa")) {
        s_smaa = !strcmp(val, "on");
    } else if (!strcmp(key, "anisotropic_filtering")) {
        i = atoi(val);
        for (int k = 0; k < N_ANISO; k++)
            if (k_aniso[k] == i)
                s_aniso = i;
    } else if (!strcmp(key, "texture_detail")) {
        for (i = 0; i < N_DETAIL; i++)
            if (!strcmp(val, k_detail[i].key))
                s_detail = i;
    } else if (!strcmp(key, "model_detail")) {
        for (i = 0; i < N_MODELS; i++)
            if (!strcmp(val, k_models[i].key))
                s_model = i;
    } else if (!strcmp(key, "swing_button")) {
        s_swing_button = !strcmp(val, "x");
    } else if (!strcmp(key, "weapon")) {
        s_weapon = !strcmp(val, "pan");
    } else if (!strcmp(key, "intro_fix")) {
        s_intro_fix = !strcmp(val, "yes");
    } else if (!strcmp(key, "last_game")) {
        i = atoi(val);
        if (i >= 1 && i <= 3)
            s_last_game = i - 1;
    } else if (!strcmp(key, "skip_cutscenes")) {
        s_skip_cutscenes = !strcmp(val, "yes");
    } else if (!strcmp(key, "monitor")) {
        i = atoi(val);
        s_display = i >= 1 && i <= 16 ? i - 1 : -1;
    } else if (!strcmp(key, "audio_device")) {
        snprintf(s_audio_device, sizeof s_audio_device, "%s", val);
    } else if (!strcmp(key, "volume")) {
        i = atoi(val);
        if (i >= 0 && i <= 100)
            s_volume = i;
    } else if (!strncmp(key, "player", 6) && (key[6] == '1' || key[6] == '2')) {
        int p = key[6] - '1';
        if (!strcmp(key + 7, "_controller"))
            snprintf(s_pad[p], sizeof s_pad[p], "%s", strcmp(val, "auto") ? val : "");
        else if (!strcmp(key + 7, "_controller_name"))
            snprintf(s_pad_name[p], sizeof s_pad_name[p], "%s", val);
        else if (!strcmp(key + 7, "_buttons") && strcmp(val, "default")) {
            unsigned char m[INPUT_PAD_CONTROL_COUNT];
            char *tok = val, *comma;
            int c = 0;
            for (; c < INPUT_PAD_CONTROL_COUNT && tok; c++, tok = comma ? comma + 1 : NULL) {
                int src;
                comma = strchr(tok, ',');
                if (comma)
                    *comma = 0;
                src = xbox_InputMap_SourceFromName(tok);
                if (src < 0)
                    break;
                m[c] = (unsigned char)src;
            }
            if (c == INPUT_PAD_CONTROL_COUNT)
                memcpy(s_pad_map[p], m, sizeof m);
        }
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

/* Upscaling, MSAA, SMAA, anisotropic filtering, texture detail: the Vulkan
 * back end's (nv2a_vk.h); the CPU rasteriser has none of them. */
static void apply_quality(void)
{
#ifdef CONKER_HAVE_VULKAN
    nv2a_vk_set_fsr(s_fsr, FSR_SHARPNESS);
    nv2a_vk_set_msaa((unsigned)s_msaa);
    nv2a_vk_set_smaa(s_smaa);
    nv2a_vk_set_anisotropy((unsigned)s_aniso);
    nv2a_vk_set_lod_bias(k_detail[s_detail].bias);
#endif
}

/* The game always runs at its own 30 frames a second, on the console's
 * vblank clock: everything in it (jumps, animation, fades, the menus) was
 * made for that pace, and at any other one some part of it went at the wrong
 * speed. A higher setting draws that many frames a second by drawing the
 * frames in between too, each blended between two of the game's
 * (nv2a_vk_set_interpolation): a multiple of 30, so each game frame is shown
 * for the same number of them. */
static void apply_fps(void)
{
    nv2a_pb_exec_set_frame_limit(0u);
#ifdef CONKER_HAVE_VULKAN
    nv2a_vk_set_interpolation((unsigned)(s_fps / 30));
#endif
}

/* The display, the audio device and gain, and which pad each player has:
 * from the cfg at load, and again as the launcher leaves. */
static void apply_launcher(void)
{
    InputPadMap id;
    int p;

    xbox_WindowSetDisplay(s_display);
    xa2_set_device(s_audio_device);
    xa2_set_volume((float)(s_volume * s_volume) / 10000.0f);
    xbox_InputMap_PadMapDefaults(&id);
    for (p = 0; p < 2; p++) {
        xbox_InputSetPortDevice((DWORD)p, s_pad[p]);
        xbox_InputSetPortMap((DWORD)p, memcmp(id.source, s_pad_map[p], sizeof id.source)
                                       ? s_pad_map[p] : NULL);
    }
}

void conker_settings_load(void)
{
    FILE *f;
    char line[256];
    const char *e;

    {
        InputPadMap id;
        xbox_InputMap_PadMapDefaults(&id);
        memcpy(s_pad_map[0], id.source, sizeof id.source);
        memcpy(s_pad_map[1], id.source, sizeof id.source);
    }
    conker_host_config_path(s_cfg_path, sizeof s_cfg_path);
    f = s_cfg_path[0] ? fopen(s_cfg_path, "r") : NULL;
    if (f) {
        while (fgets(line, sizeof line, f))
            parse_line(line);
        fclose(f);
        fprintf(stderr, "[CONKER] settings from %s\n", s_cfg_path);
    } else {
        s_no_cfg = s_cfg_path[0] != 0;
    }

    s_language_now = s_language;
    conker_lang_set(s_language_now);
    xbox_SetLanguage(k_languages[s_language_now].xbox);

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
    apply_quality();
    apply_launcher();
}

int conker_weapon_choice(void)
{
    return s_weapon;
}

int conker_intro_choice(void)
{
    return s_intro_fix;
}

int conker_settings_fps_limit(void)
{
    return s_fps;
}

float conker_settings_lod_scale(void)
{
    return k_models[s_model].scale;
}

int conker_settings_last_game(void)
{
    return s_last_game;
}

void conker_settings_set_last_game(int slot)
{
    if (slot < 0 || slot > 2 || slot == s_last_game)
        return;
    s_last_game = slot;
    save();
    fprintf(stderr, "[CONKER] last game: Game %d\n", slot + 1);
}

int conker_swing_enabled(void)
{
    return s_swing_button;
}

float conker_settings_hor_plus(void)
{
    return s_hor_plus;
}

/* ── The submenu's rows ──────────────────────────────────────────────── */

/* The resolutions offered are the ones of the chosen shape: the display's,
 * and -- where the window can be any size -- the usual sizes of that shape
 * that fit the desktop, and the largest that fits it, so that even a shape
 * the display has no mode of has a choice. Largest first. Rebuilt when the
 * submenu opens and when the shape or the display mode changes. */
#define MAX_RES 96
#define SHAPE_TOLERANCE 0.025          /* 2560x1080 and 1366x768 are "21:9", "16:9" */
static const short k_sizes[N_ASPECTS][12][2] = {
    { {640, 480}, {800, 600}, {1024, 768}, {1280, 960}, {1440, 1080}, {1600, 1200},
      {1920, 1440}, {2048, 1536}, {2880, 2160} },
    { {1280, 720}, {1366, 768}, {1600, 900}, {1920, 1080}, {2560, 1440}, {3200, 1800},
      {3840, 2160} },
    { {1152, 720}, {1280, 800}, {1440, 900}, {1680, 1050}, {1920, 1200}, {2560, 1600},
      {3840, 2400} },
    { {1720, 720}, {2560, 1080}, {3440, 1440}, {3840, 1600}, {5120, 2160} },
    { {2560, 720}, {3840, 1080}, {5120, 1440} },
};
static int s_res[MAX_RES][2];
static int s_nres;

static int fits_shape(int w, int h)
{
    double a = (double)k_aspects[s_aspect].w / k_aspects[s_aspect].h;
    double d = (double)w / h / a - 1.0;
    return d < SHAPE_TOLERANCE && d > -SHAPE_TOLERANCE;
}

/* Into the list, by area, so left/right step in order. */
static void add_resolution(int w, int h)
{
    int i;

    for (i = 0; i < s_nres; i++)
        if (s_res[i][0] == w && s_res[i][1] == h)
            return;
    if (s_nres == MAX_RES)
        return;
    for (i = s_nres; i > 0 && (long)s_res[i - 1][0] * s_res[i - 1][1] < (long)w * h; i--) {
        s_res[i][0] = s_res[i - 1][0];
        s_res[i][1] = s_res[i - 1][1];
    }
    s_res[i][0] = w;
    s_res[i][1] = h;
    s_nres++;
}

static void build_resolutions(void)
{
    int modes[64][2], n, dw = 0, dh = 0, i;
    int have_desk = desktop_size(&dw, &dh);

    if (s_first_run) {
        n = s_page_nmodes;
        memcpy(modes, s_page_modes, sizeof modes);
    } else {
        n = xbox_WindowResolutions(modes, 64);
    }

    s_nres = 0;
    for (i = 0; i < n; i++)
        if (fits_shape(modes[i][0], modes[i][1]))
            add_resolution(modes[i][0], modes[i][1]);
    /* Fullscreen sets a mode of the display: only those, while there are any. */
    if (s_mode == 1 && s_nres)
        return;
    for (i = 0; i < 12 && k_sizes[s_aspect][i][0]; i++)
        if (!have_desk || (k_sizes[s_aspect][i][0] <= dw && k_sizes[s_aspect][i][1] <= dh))
            add_resolution(k_sizes[s_aspect][i][0], k_sizes[s_aspect][i][1]);
    if (have_desk) {
        int w = dw, h = (dw * k_aspects[s_aspect].h / k_aspects[s_aspect].w) & ~1;
        if (h > dh) {
            h = dh;
            w = (dh * k_aspects[s_aspect].w / k_aspects[s_aspect].h) & ~1;
        }
        if (w >= 640 && h >= 360)
            add_resolution(w, h);
    }
    if (!s_nres)
        add_resolution(k_sizes[s_aspect][0][0], k_sizes[s_aspect][0][1]);
}

/* The list again; a chosen size of another shape gives way to the nearest in
 * height, and the window follows. The default size has the shape already. */
static void refit_resolution(void)
{
    int best = 0, i;

    build_resolutions();
    if (s_res_w <= 0 || s_res_h <= 0) {
        int w, h;
        default_window_size(&w, &h);
        add_resolution(w, h);
        return;
    }
    for (i = 0; i < s_nres; i++) {
        int d = s_res[i][1] - s_res_h, b = s_res[best][1] - s_res_h;
        if (s_res[i][0] == s_res_w && s_res[i][1] == s_res_h)
            return;
        if ((d < 0 ? -d : d) < (b < 0 ? -b : b))
            best = i;
    }
    s_res_w = s_res[best][0];
    s_res_h = s_res[best][1];
    apply_window();
}

static void log_resolutions(void)
{
    char list[512];
    int i, n = 0;

    list[0] = 0;
    for (i = 0; i < s_nres && n < (int)sizeof list - 16; i++)
        n += snprintf(list + n, sizeof list - (size_t)n, " %dx%d", s_res[i][0], s_res[i][1]);
    fprintf(stderr, "[CONKER] resolutions at %s:%s\n", k_aspects[s_aspect].name, list);
}

const char *conker_options_label(int row)
{
    return row >= 0 && row < CONKER_OPT_COUNT ? conker_tr(k_labels[row]) : "";
}

void conker_options_value(int row, char *buf, size_t size)
{
    switch (row) {
    case CONKER_OPT_LANGUAGE:
        /* Applied at start, like the Weapon. */
        snprintf(buf, size, "%s%s", conker_tr(k_languages[s_language].name),
                 !s_first_run && s_language != s_language_now ? conker_tr(" (restart)") : "");
        break;
    case CONKER_OPT_DISPLAY_MODE:
        snprintf(buf, size, "%s", conker_tr(k_modes[s_mode]));
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
            snprintf(buf, size, "%s", conker_tr("Original (1X)"));
        else
            snprintf(buf, size, "%dX", s_scale);
        break;
    case CONKER_OPT_UPSCALING:
        snprintf(buf, size, "%s", s_fsr ? "FSR 1" : conker_tr("Off"));
        break;
    case CONKER_OPT_MSAA:
        if (s_msaa > 1)
            snprintf(buf, size, "%dX", s_msaa);
        else
            snprintf(buf, size, "%s", conker_tr("Off"));
        break;
    case CONKER_OPT_SMAA:
        snprintf(buf, size, "%s", conker_tr(s_smaa ? "On" : "Off"));
        break;
    case CONKER_OPT_ANISO:
        if (s_aniso > 1)
            snprintf(buf, size, "%dX", s_aniso);
        else
            snprintf(buf, size, "%s", conker_tr("Off"));
        break;
    case CONKER_OPT_TEX_DETAIL:
        snprintf(buf, size, "%s", conker_tr(k_detail[s_detail].name));
        break;
    case CONKER_OPT_MODEL_DETAIL:
        snprintf(buf, size, "%s", conker_tr(k_models[s_model].name));
        break;
    case CONKER_OPT_VSYNC:
        snprintf(buf, size, "%s", conker_tr(s_vsync ? "On" : "Off"));
        break;
    case CONKER_OPT_FPS:
        snprintf(buf, size, "%d FPS", s_fps);
        break;
    case CONKER_OPT_SKIP_CUTSCENES:
        snprintf(buf, size, "%s", conker_tr(s_skip_cutscenes ? "Yes" : "No"));
        break;
    case CONKER_OPT_SWING_BUTTON:
        snprintf(buf, size, "%s", s_swing_button ? "X" : conker_tr("Off"));
        break;
    case CONKER_OPT_WEAPON:
        /* Applied at start: say so while the choice is not what is in hand. */
        snprintf(buf, size, "%s%s", conker_tr(s_weapon ? "Frying Pan" : "Bat"),
                 s_weapon && conker_weapon_failed() ? conker_tr(" (failed)")
                 : !s_first_run && s_weapon != conker_weapon_active() ? conker_tr(" (restart)") : "");
        break;
    case CONKER_OPT_INTRO_FIX:
        snprintf(buf, size, "%s%s", conker_tr(s_intro_fix ? "On" : "Off"),
                 s_intro_fix && conker_intro_failed() ? conker_tr(" (failed)")
                 : !s_first_run && s_intro_fix != conker_intro_active() ? conker_tr(" (restart)") : "");
        break;
    case CONKER_OPT_UNCENSOR: {
        char status[96];
        int c = s_uncensor < 0 ? conker_mods_uncensor_choice() : s_uncensor;
        conker_mods_uncensor_status(status, sizeof status);
        /* What happened last, while there is something to tell. */
        snprintf(buf, size, "%s", status[0] ? status : conker_tr(k_uncensor[c]));
        break;
    }
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
    case CONKER_OPT_LANGUAGE:
        s_language = wrap(s_language + dir, CONKER_LANG_COUNT);
        break;
    case CONKER_OPT_DISPLAY_MODE:
        s_mode = wrap(s_mode + dir, 3);
        refit_resolution();
        apply_window();
        break;
    case CONKER_OPT_ASPECT:
        s_aspect = wrap(s_aspect + dir, N_ASPECTS);
        apply_aspect(1);
        refit_resolution();
        log_resolutions();
        /* The default window size is of the new shape too. */
        if (s_mode == 0 && s_res_w <= 0)
            apply_window();
        break;
    case CONKER_OPT_RESOLUTION: {
        int w = s_res_w, h = s_res_h, at = 0;
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
    case CONKER_OPT_UPSCALING:
        s_fsr = !s_fsr;
        apply_quality();
        break;
    case CONKER_OPT_MSAA:
        for (i = 0; i < N_MSAA && k_msaa[i] != s_msaa; i++)
            ;
        s_msaa = k_msaa[wrap((i < N_MSAA ? i : 0) + dir, N_MSAA)];
        apply_quality();
        break;
    case CONKER_OPT_SMAA:
        s_smaa = !s_smaa;
        apply_quality();
        break;
    case CONKER_OPT_ANISO:
        for (i = 0; i < N_ANISO && k_aniso[i] != s_aniso; i++)
            ;
        s_aniso = k_aniso[wrap((i < N_ANISO ? i : 0) + dir, N_ANISO)];
        apply_quality();
        break;
    case CONKER_OPT_TEX_DETAIL:
        s_detail = wrap(s_detail + dir, N_DETAIL);
        apply_quality();
        break;
    case CONKER_OPT_MODEL_DETAIL:
        s_model = wrap(s_model + dir, N_MODELS);
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
    case CONKER_OPT_SKIP_CUTSCENES:
        s_skip_cutscenes = !s_skip_cutscenes;
        break;
    case CONKER_OPT_SWING_BUTTON:
        s_swing_button = !s_swing_button;
        break;
    case CONKER_OPT_WEAPON:
        s_weapon = !s_weapon;
        break;
    case CONKER_OPT_INTRO_FIX:
        s_intro_fix = !s_intro_fix;
        break;
    case CONKER_OPT_UNCENSOR:
        if (s_uncensor < 0)
            s_uncensor = conker_mods_uncensor_choice();
        s_uncensor = wrap(s_uncensor + dir, CONKER_UNCENSOR_CHOICES);
        conker_mods_uncensor_clear_status();
        return;                         /* nothing to save: A carries it out */
    default:
        return;
    }
    save();
}

/* ── The first-run page (conker_firstrun.c) ──────────────────────────── */

int conker_settings_no_cfg(void)
{
    return s_no_cfg;
}

/* The nearest shape to the display's, and what a handheld wants: its whole
 * screen. Everything else keeps its default. */
void conker_first_run_begin(int desk_w, int desk_h, const int (*modes)[2], int nmodes, int language)
{
    int i, best = 0;
    double best_d = 1e9;

    s_first_run = 1;
    conker_first_run_display(desk_w, desk_h, modes, nmodes);
    s_uncensor = -1;
    /* With a cfg, what it says; the first time, defaults fitted to here. */
    if (!s_no_cfg) {
        refit_resolution();
        return;
    }
    if (language >= 0 && language < CONKER_LANG_COUNT)
        s_language = language;
    if (desk_w > 0 && desk_h > 0) {
        for (i = 0; i < N_ASPECTS; i++) {
            double d = (double)k_aspects[i].w / k_aspects[i].h - (double)desk_w / desk_h;
            if (d < 0)
                d = -d;
            if (d < best_d) {
                best_d = d;
                best = i;
            }
        }
        s_aspect = best;
        apply_aspect(!getenv("RECOMP_DISPLAY_ASPECT"));
        if (desk_w <= 1280 || desk_h <= 800) {
            s_mode = 1;
            s_res_w = desk_w;
            s_res_h = desk_h;
            apply_window();
        }
    }
    refit_resolution();
}

/* The display the launcher is on now, and its sizes. */
void conker_first_run_display(int desk_w, int desk_h, const int (*modes)[2], int nmodes)
{
    s_page_desk_w = desk_w;
    s_page_desk_h = desk_h;
    s_page_nmodes = nmodes > 64 ? 64 : nmodes;
    if (s_page_nmodes)
        memcpy(s_page_modes, modes, (size_t)s_page_nmodes * sizeof modes[0]);
}

/* The size the window gets in its mode, for the launcher to fit itself. */
void conker_first_run_window(int *mode, int *w, int *h)
{
    *mode = s_mode;
    *w = s_res_w;
    *h = s_res_h;
    if (*w <= 0 || *h <= 0)
        default_window_size(w, h);
}

void conker_first_run_refit(void)
{
    refit_resolution();
    apply_window();
}

int conker_first_run_language(void)
{
    return s_language;
}

void conker_first_run_step(int row, int dir)
{
    change(row, dir);
}

/* The choices become this run's and go in the cfg. */
void conker_first_run_end(void)
{
    s_first_run = 0;
    s_no_cfg = 0;
    s_language_now = s_language;
    conker_lang_set(s_language_now);
    xbox_SetLanguage(k_languages[s_language_now].xbox);
    apply_launcher();
    save();
}

/* Before the mods are laid over the game: an Uncensor choice left showing
 * without A is carried out too, On or Off (an Update waits for A). */
void conker_first_run_apply_mods(void)
{
    if (s_uncensor >= 0 && s_uncensor != CONKER_UNCENSOR_UPDATE
            && s_uncensor != conker_mods_uncensor_choice())
        conker_mods_uncensor_apply(s_uncensor);
    s_uncensor = -1;
}

static void activate(int row);

/* A on a row (the launcher): what it does in the in-game menu. */
void conker_first_run_activate(int row)
{
    activate(row);
}

/* ── The launcher's own values ───────────────────────────────────────── */

int conker_settings_display(void)
{
    return s_display;
}

void conker_settings_set_display(int index)
{
    s_display = index;
    xbox_WindowSetDisplay(index);
    save();
}

const char *conker_settings_audio_device(void)
{
    return s_audio_device;
}

void conker_settings_set_audio_device(const char *name)
{
    snprintf(s_audio_device, sizeof s_audio_device, "%s", name ? name : "");
    save();
}

int conker_settings_volume(void)
{
    return s_volume;
}

void conker_settings_set_volume(int pct)
{
    s_volume = pct < 0 ? 0 : pct > 100 ? 100 : pct;
    xa2_set_volume((float)(s_volume * s_volume) / 10000.0f);
    save();
}

const char *conker_settings_pad(int player, const char **name)
{
    if (name)
        *name = s_pad_name[player & 1];
    return s_pad[player & 1];
}

void conker_settings_set_pad(int player, const char *spec, const char *name)
{
    snprintf(s_pad[player & 1], sizeof s_pad[0], "%s", spec ? spec : "");
    snprintf(s_pad_name[player & 1], sizeof s_pad_name[0], "%s", name ? name : "");
    save();
}

void conker_settings_pad_map(int player, unsigned char source[16])
{
    memcpy(source, s_pad_map[player & 1], INPUT_PAD_CONTROL_COUNT);
}

void conker_settings_set_pad_map(int player, const unsigned char source[16])
{
    memcpy(s_pad_map[player & 1], source, INPUT_PAD_CONTROL_COUNT);
    save();
}

/* A on a row: what right does, except where A has its own meaning. */
static void activate(int row)
{
    if (row == CONKER_OPT_UNCENSOR) {
        conker_mods_uncensor_apply(s_uncensor < 0 ? conker_mods_uncensor_choice() : s_uncensor);
        s_uncensor = -1;
        return;
    }
    change(row, +1);
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

/* ── Allow Skip Cutscenes ─────────────────────────────────────────────────
 *
 * Holding LT in a cutscene ends it once the cutscene counts as seen: the
 * per-frame end test (sub_0004FF00) asks sub_0004EBE0, which reads a bit of
 * the seen masks (0x765608, 64 bits per level, kept in the save) -- unless
 * the byte at 0x7655E9 is set, when every cutscene counts as seen. Retail
 * code only ever clears that byte (at each cutscene's start), and the only
 * other reader skips marking the cutscene seen at its end. So while LT is
 * held, and only then, the option sets it: the game's own hold-to-skip does
 * the rest, and nothing lasting is written. */
#define CUTSCENE_ALL_SEEN 0x007655E9u
#define LT_PRESSED        30           /* analog threshold, of 255 */

extern ptrdiff_t g_xbox_mem_offset;
void conker_swing_filter(XBOX_INPUT_STATE *st, uint64_t now);   /* conker_swing.c */
static unsigned s_lt_held;             /* ports with LT down */
static int s_all_seen_set;

static void skip_cutscenes_filter(DWORD port, const XBOX_INPUT_STATE *st, int connected)
{
    volatile uint8_t *flag;
    unsigned bit = 1u << port;

    if (connected && st->Gamepad.bAnalogButtons[6] > LT_PRESSED)
        s_lt_held |= bit;
    else
        s_lt_held &= ~bit;
    if (!g_xbox_mem_offset)
        return;
    flag = (volatile uint8_t *)(g_xbox_mem_offset + CUTSCENE_ALL_SEEN);
    if (s_skip_cutscenes && s_lt_held) {
        if (!s_all_seen_set)
            fprintf(stderr, "[CONKER] LT held: cutscenes can be skipped\n");
        *flag = 1;
        s_all_seen_set = 1;
    } else if (s_all_seen_set) {
        *flag = 0;
        s_all_seen_set = 0;
    }
}

static void input_filter(DWORD port, XBOX_INPUT_STATE *st, int connected)
{
    uint64_t now = now_ms();
    unsigned bits, pressed, dirs;
    int page = now - s_page_ms < PAGE_FRESH_MS;

    if (port == 0)
        conker_pub_tick(now);
    if (port < PORTS)
        skip_cutscenes_filter(port, st, connected);
    if (!connected || port >= PORTS)
        return;
    if (!s_open)
        conker_swing_filter(st, now);
    bits = pad_bits(st);
    pressed = bits & ~s_prev[port];
    s_prev[port] = bits;

    if (port == 0 && !s_open) {
        int skip = conker_pub_intro_skip(!!(pressed & P_A), now);
        if (skip >= 0) {
            st->Gamepad.bAnalogButtons[XBOX_BUTTON_A] = skip ? 255 : 0;
            return;
        }
    }

    if (s_swallow[port]) {
        if (bits)
            rest(st);
        else
            s_swallow[port] = 0;
        if (!s_open)
            return;
    }

    if (!s_open) {
        int pub = conker_pub_pad(!!(pressed & P_LEFT), !!(pressed & P_RIGHT),
                                 !!(pressed & P_A), !!(pressed & P_B));
        if (pub) {
            if (pub == 2)
                swallow_all();
            rest(st);
            return;
        }
        if (page && s_recomp_selected && (pressed & P_A)) {
            refit_resolution();
            log_resolutions();
            save();
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
        activate(s_row);
}

void conker_settings_install_input(void)
{
    xbox_InputSetFilter(input_filter);
}
