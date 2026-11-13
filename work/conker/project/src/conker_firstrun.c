/*
 * The launcher, at every start before the game: the options on a pub's
 * chalkboard, in tabs (Graphics, Audio & Language, Mods, Controller), and a
 * glass that fills while the pipelines build.
 *
 * Everything is drawn here into a pixel buffer, wood and chalk from noise and
 * the letters from the table below, drawn for this port: nothing of the
 * game's art, logos or fonts. Most rows are the in-game submenu's
 * (conker_settings.c), so they cannot drift apart; the monitor, audio device,
 * volume, controllers and mods are the launcher's own. It uses SDL, which
 * every build has, for the same page on Linux, the Steam Deck and Windows,
 * by pad, keys or mouse, and its window is the game's: it takes the display,
 * mode and size the rows choose as they change, and the game keeps it.
 *
 * Tests: CONKER_FIRSTRUN_SCRIPT is what the player does, comma separated, a
 * step each 150 ms: up down left right a b lb rb start quit, or
 * shot:<file>, a BMP.
 */
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "conker_mods.h"
#include "conker_settings.h"
#include "input_map.h"
#include "video_player.h"
#include "xinput_xbox.h"
#ifdef CONKER_HAVE_VULKAN
#include "nv2a_vk.h"
#endif

/* ── Drawing ──────────────────────────────────────────────────────────── */

typedef struct { uint32_t *px; int w, h; } Canvas;

#define RGB(r, g, b) ((uint32_t)(r) << 16 | (uint32_t)(g) << 8 | (uint32_t)(b))

static uint32_t noise(int x, int y)
{
    uint32_t h = (uint32_t)x * 374761393u + (uint32_t)y * 668265263u;

    h = (h ^ (h >> 13)) * 1274126177u;
    return h ^ (h >> 16);
}

static uint32_t shade(uint32_t c, int amount)
{
    int r = (int)(c >> 16 & 255) + amount, g = (int)(c >> 8 & 255) + amount, b = (int)(c & 255) + amount;

    r = r < 0 ? 0 : r > 255 ? 255 : r;
    g = g < 0 ? 0 : g > 255 ? 255 : g;
    b = b < 0 ? 0 : b > 255 ? 255 : b;
    return RGB(r, g, b);
}

static void fill(Canvas *c, int x, int y, int w, int h, uint32_t color)
{
    int i, j;

    for (j = y < 0 ? 0 : y; j < y + h && j < c->h; j++)
        for (i = x < 0 ? 0 : x; i < x + w && i < c->w; i++)
            c->px[j * c->w + i] = color;
}

/* Planks: long grain along x, a dark seam between boards. */
static void wood(Canvas *c, int x0, int y0, int w, int h, int plank)
{
    int x, y;

    for (y = y0; y < y0 + h && y < c->h; y++) {
        int board = y / plank, seam = y % plank < 2;
        for (x = x0; x < x0 + w && x < c->w; x++) {
            uint32_t n = noise(x / 37 + board * 91, y / 2 + board * 17);
            int grain = (int)(n & 31) - 15 + (int)(noise(x / 3, y) & 7) - 3 + (board * 13 % 17) - 8;
            c->px[y * c->w + x] = seam ? RGB(30, 17, 9) : shade(RGB(92, 56, 30), grain);
        }
    }
}

/* Slate with old wiped chalk on it. */
static void slate(Canvas *c, int x0, int y0, int w, int h)
{
    int x, y;

    for (y = y0; y < y0 + h && y < c->h; y++)
        for (x = x0; x < x0 + w && x < c->w; x++) {
            int smear = (int)(noise(x / 53, y / 11) & 15) + (int)(noise(x / 9, y / 31) & 7);
            c->px[y * c->w + x] = shade(RGB(31, 40, 37), smear / 2 + (int)(noise(x, y) & 3));
        }
}

/* 5x8 letters, a byte a column, the low bit at the top, the last row for
 * descenders: ' ' to '~'. */
static const uint8_t k_font[95][5] = {
    {0x00,0x00,0x00,0x00,0x00},{0x00,0x00,0x5F,0x00,0x00},{0x00,0x07,0x00,0x07,0x00},{0x14,0x7F,0x14,0x7F,0x14},
    {0x24,0x2A,0x7F,0x2A,0x12},{0x23,0x13,0x08,0x64,0x62},{0x36,0x49,0x55,0x22,0x50},{0x00,0x05,0x03,0x00,0x00},
    {0x00,0x1C,0x22,0x41,0x00},{0x00,0x41,0x22,0x1C,0x00},{0x14,0x08,0x3E,0x08,0x14},{0x08,0x08,0x3E,0x08,0x08},
    {0x00,0x50,0x30,0x00,0x00},{0x08,0x08,0x08,0x08,0x08},{0x00,0x60,0x60,0x00,0x00},{0x20,0x10,0x08,0x04,0x02},
    {0x3E,0x51,0x49,0x45,0x3E},{0x00,0x42,0x7F,0x40,0x00},{0x42,0x61,0x51,0x49,0x46},{0x21,0x41,0x45,0x4B,0x31},
    {0x18,0x14,0x12,0x7F,0x10},{0x27,0x45,0x45,0x45,0x39},{0x3C,0x4A,0x49,0x49,0x30},{0x01,0x71,0x09,0x05,0x03},
    {0x36,0x49,0x49,0x49,0x36},{0x06,0x49,0x49,0x29,0x1E},{0x00,0x36,0x36,0x00,0x00},{0x00,0x56,0x36,0x00,0x00},
    {0x08,0x14,0x22,0x41,0x00},{0x14,0x14,0x14,0x14,0x14},{0x00,0x41,0x22,0x14,0x08},{0x02,0x01,0x51,0x09,0x06},
    {0x32,0x49,0x79,0x41,0x3E},{0x7E,0x11,0x11,0x11,0x7E},{0x7F,0x49,0x49,0x49,0x36},{0x3E,0x41,0x41,0x41,0x22},
    {0x7F,0x41,0x41,0x22,0x1C},{0x7F,0x49,0x49,0x49,0x41},{0x7F,0x09,0x09,0x09,0x01},{0x3E,0x41,0x49,0x49,0x7A},
    {0x7F,0x08,0x08,0x08,0x7F},{0x00,0x41,0x7F,0x41,0x00},{0x20,0x40,0x41,0x3F,0x01},{0x7F,0x08,0x14,0x22,0x41},
    {0x7F,0x40,0x40,0x40,0x40},{0x7F,0x02,0x0C,0x02,0x7F},{0x7F,0x04,0x08,0x10,0x7F},{0x3E,0x41,0x41,0x41,0x3E},
    {0x7F,0x09,0x09,0x09,0x06},{0x3E,0x41,0x51,0x21,0x5E},{0x7F,0x09,0x19,0x29,0x46},{0x46,0x49,0x49,0x49,0x31},
    {0x01,0x01,0x7F,0x01,0x01},{0x3F,0x40,0x40,0x40,0x3F},{0x1F,0x20,0x40,0x20,0x1F},{0x3F,0x40,0x38,0x40,0x3F},
    {0x63,0x14,0x08,0x14,0x63},{0x07,0x08,0x70,0x08,0x07},{0x61,0x51,0x49,0x45,0x43},{0x00,0x7F,0x41,0x41,0x00},
    {0x02,0x04,0x08,0x10,0x20},{0x00,0x41,0x41,0x7F,0x00},{0x04,0x02,0x01,0x02,0x04},{0x40,0x40,0x40,0x40,0x40},
    {0x00,0x01,0x02,0x04,0x00},{0x20,0x54,0x54,0x54,0x78},{0x7F,0x48,0x44,0x44,0x38},{0x38,0x44,0x44,0x44,0x20},
    {0x38,0x44,0x44,0x48,0x7F},{0x38,0x54,0x54,0x54,0x18},{0x08,0x7E,0x09,0x01,0x02},{0x18,0xA4,0xA4,0xA4,0x7C},
    {0x7F,0x08,0x04,0x04,0x78},{0x00,0x44,0x7D,0x40,0x00},{0x40,0x80,0x84,0x7D,0x00},{0x7F,0x10,0x28,0x44,0x00},
    {0x00,0x41,0x7F,0x40,0x00},{0x7C,0x04,0x18,0x04,0x78},{0x7C,0x08,0x04,0x04,0x78},{0x38,0x44,0x44,0x44,0x38},
    {0xFC,0x24,0x24,0x24,0x18},{0x18,0x24,0x24,0x28,0xFC},{0x7C,0x08,0x04,0x04,0x08},{0x48,0x54,0x54,0x54,0x20},
    {0x04,0x3F,0x44,0x40,0x20},{0x3C,0x40,0x40,0x20,0x7C},{0x1C,0x20,0x40,0x20,0x1C},{0x3C,0x40,0x30,0x40,0x3C},
    {0x44,0x28,0x10,0x28,0x44},{0x1C,0xA0,0xA0,0xA0,0x7C},{0x44,0x64,0x54,0x4C,0x44},{0x00,0x08,0x36,0x41,0x00},
    {0x00,0x00,0x7F,0x00,0x00},{0x00,0x41,0x36,0x08,0x00},{0x10,0x08,0x08,0x10,0x08},
};

/* A letter of the table, for the debug readout (conker_debug.c): five columns,
 * the low bit at the top; a space for anything outside ' ' to '~'. */
const uint8_t *conker_font_glyph(int ch)
{
    return k_font[ch >= 32 && ch < 127 ? ch - 32 : 0];
}

/* The next letter the table has: accents dropped, ß as s, what it cannot
 * write skipped. Returns 0 at the end. */
static int next_letter(const char **s)
{
    static const char k_latin[] =   /* U+00C0 to U+00FF */
        "AAAAAAACEEEEIIIIDNOOOOOxOUUUUYTsaaaaaaaceeeeiiiidnooooo/ouuuuyty";
    int c;

    while (**s) {
        c = conker_utf8_next(s);
        if (c >= 32 && c < 127)
            return c;
        if (c >= 0xC0 && c <= 0xFF)
            return k_latin[c - 0xC0];
    }
    return 0;
}

static int text_width(const char *s, int scale)
{
    int n = 0;

    while (next_letter(&s))
        n++;
    return n * 6 * scale;
}

/* Chalk: each dot of a letter a rough patch, with holes where the stick
 * skipped; the same holes every frame. */
static void text(Canvas *c, int x, int y, const char *s, int scale, uint32_t color)
{
    int ch;

    for (; (ch = next_letter(&s)) != 0; x += 6 * scale) {
        const uint8_t *g = k_font[ch - 32];
        int col, row, i, j;

        for (col = 0; col < 5; col++)
            for (row = 0; row < 8; row++) {
                if (!(g[col] >> row & 1))
                    continue;
                for (j = 0; j < scale; j++)
                    for (i = 0; i < scale; i++) {
                        int px = x + col * scale + i, py = y + row * scale + j;
                        uint32_t n = noise(px, py);
                        if ((n & 7) == 0 || px < 0 || py < 0 || px >= c->w || py >= c->h)
                            continue;
                        c->px[py * c->w + px] = shade(color, -(int)(n >> 8 & 31));
                    }
            }
    }
}

/* A straight pint glass, filled to `level` (0 to 1) with a head of foam. */
static void glass(Canvas *c, int x, int y, int w, int h, float level)
{
    const int wall = w / 20 + 1;
    int inner_h = h - wall, j;
    int beer = (int)(inner_h * level);
    int foam = level > 0.0f ? 4 + (int)((h / 7) * level) : 0;

    for (j = 0; j < h; j++) {
        /* Narrower towards the base. */
        int inset = (h - j) * w / (h * 7), i;
        int left = x + inset, width = w - inset * 2;
        int from_bottom = h - wall - j;

        for (i = 0; i < width; i++) {
            int px = left + i;
            uint32_t col;

            if (px < 0 || px >= c->w || y + j < 0 || y + j >= c->h)
                continue;
            if (i < wall || i >= width - wall || from_bottom < 0) {
                col = RGB(205, 215, 212);
            } else if (from_bottom < beer) {
                int bubble = (noise(px / 3, (y + j) / 3) & 63) == 0 ? 45 : 0;
                col = shade(RGB(214, 137, 26), i * 34 / width - 17 + bubble);
            } else if (from_bottom < beer + foam && level > 0.0f) {
                col = shade(RGB(240, 232, 208), -(int)(noise(px / 2, (y + j) / 2) & 15));
            } else {
                continue;
            }
            c->px[(y + j) * c->w + px] = col;
        }
    }
}

/* ── The launcher ─────────────────────────────────────────────────────── */

/* The page is PAGE_H tall and as wide as the window's shape makes it, so it
 * fills the window, fullscreen or not; the board in the middle keeps a
 * width that the rows were laid out for. */
enum { PAGE_H = 800, PAGE_W_MIN = 1024, PAGE_W_MAX = 2560, VISIBLE = 13, ROW_H = 34 };

enum { TAB_GRAPHICS, TAB_AUDIO, TAB_MODS, TAB_PADS, TAB_COUNT };
static const char *const k_tabs[TAB_COUNT] = { "Graphics", "Audio & Language", "Mods", "Controller" };

/* What a row is: one of the Recomp Options (conker_settings.c), or one of
 * the launcher's own. */
enum { R_OPT, R_MONITOR, R_AUDIO_DEV, R_VOLUME, R_PAD, R_EDIT, R_BIND, R_RESET, R_MOD, R_MODS_DIR };
typedef struct { int kind, arg; } Row;

static const Row k_graphics[] = {
    { R_MONITOR, 0 }, { R_OPT, CONKER_OPT_DISPLAY_MODE }, { R_OPT, CONKER_OPT_ASPECT },
    { R_OPT, CONKER_OPT_RESOLUTION }, { R_OPT, CONKER_OPT_RENDER_SCALE }, { R_OPT, CONKER_OPT_UPSCALING },
    { R_OPT, CONKER_OPT_MSAA }, { R_OPT, CONKER_OPT_SMAA }, { R_OPT, CONKER_OPT_ANISO },
    { R_OPT, CONKER_OPT_TEX_DETAIL }, { R_OPT, CONKER_OPT_MODEL_DETAIL }, { R_OPT, CONKER_OPT_VSYNC },
    { R_OPT, CONKER_OPT_FPS },
};
static const Row k_audio[] = {
    { R_OPT, CONKER_OPT_LANGUAGE }, { R_AUDIO_DEV, 0 }, { R_VOLUME, 0 },
};
static const Row k_mods[] = {
    { R_OPT, CONKER_OPT_UNCENSOR }, { R_OPT, CONKER_OPT_WEAPON }, { R_OPT, CONKER_OPT_SWING_BUTTON },
    { R_OPT, CONKER_OPT_INTRO_FIX }, { R_OPT, CONKER_OPT_SKIP_CUTSCENES },
};
/* The Xbox controls a player can move, in the order the rows show them
 * (InputControl, input_map.h). */
static const struct { int control; const char *label; } k_binds[] = {
    { INPUT_A, "A" }, { INPUT_B, "B" }, { INPUT_X, "X" }, { INPUT_Y, "Y" },
    { INPUT_BLACK, "Black" }, { INPUT_WHITE, "White" },
    { INPUT_LEFT_TRIGGER, "Left Trigger" }, { INPUT_RIGHT_TRIGGER, "Right Trigger" },
    { INPUT_START, "Start" }, { INPUT_BACK, "Back" },
    { INPUT_LEFT_THUMB, "Left Stick Click" }, { INPUT_RIGHT_THUMB, "Right Stick Click" },
};
#define N_BINDS ((int)(sizeof k_binds / sizeof k_binds[0]))
/* The physical controls, as a player reads them on the pad (InputSource). */
static const char *const k_sources[INPUT_SRC_COUNT] = {
    "None", "A (bottom)", "B (right)", "X (left)", "Y (top)", "Back", "Guide", "Start",
    "Left Stick Click", "Right Stick Click", "LB", "RB",
    "D-Pad Up", "D-Pad Down", "D-Pad Left", "D-Pad Right", "Share", "Touchpad",
    "Paddle 1", "Paddle 2", "Paddle 3", "Paddle 4", "LT", "RT",
    "Left Stick Up", "Left Stick Down", "Left Stick Left", "Left Stick Right",
    "Right Stick Up", "Right Stick Down", "Right Stick Left", "Right Stick Right",
};

static const char *const k_hints[CONKER_OPT_COUNT] = {
    "The language of the game and its menus.",
    "A window, the whole screen, or the whole screen without changing its mode.",
    "The shape of your screen. Wider shapes show more of the world.",
    "The size of the window, or the screen mode.",
    "Draws above the original 640x480. Higher is sharper and asks more of the GPU.",
    "FSR 1 sharpens the picture up to the window's size when Render Resolution is below it.",
    "Smooths the edges of everything drawn. Higher asks more of the GPU.",
    "Smooths the edges of the finished picture, at little cost. Works with MSAA.",
    "Keeps textures sharp when seen at an angle, like floors and roads.",
    "Uses finer versions of distant textures. Higher is sharper but may shimmer.",
    "Keeps the detailed character models farther away. Max: at any distance.",
    "Waits for the screen, which stops tearing.",
    "30 is the console's rate.",
    "Hold LT to skip any cutscene, even one you have not seen.",
    "The attack mode as you remember it from the N64",
    "The weapon as you remember it from the N64",
    "The prologue as you remember it from the N64",
    "A patch made by others, separate from this project. A carries out the choice.",
};

#define MAX_DEVS 16
#define MAX_MODS 32

static struct {
    SDL_Window *win;
    SDL_Renderer *ren;
    SDL_Texture *tex;
    uint32_t *px, *bg;                  /* the page, and its wood and slate */
    int page_w, bg_w;
    int tab, cur, top, foot;            /* cur == nrows: the buttons below */
    Row rows[48];
    int nrows;
    SDL_GameController *pads[MAX_DEVS];
    struct { char spec[48], name[96]; } dev[MAX_DEVS];
    int ndev;
    char audio[MAX_DEVS][128];
    int naudio;
    char mods[MAX_MODS][64];
    int mod_on[MAX_MODS], nmods;
    char mods_dir[1100];
    int player;                         /* whose buttons the rows show */
    int capture;                        /* the control waiting for a press, or -1 */
    Uint32 capture_until, quiet_until;
    int display;                        /* the display the window is on */
} L;

/* ── Geometry ── */

#define BW  (L.page_w - 80 < 1240 ? L.page_w - 80 : 1240)
#define BX  ((L.page_w - BW) / 2)
#define BY  24
#define BH  (PAGE_H - 2 * BY)
#define TY  (BY + 66)
#define TH  38
#define RY  (BY + 120)
#define LX  (BX + 84)
#define VW  440
#define VX  (BX + BW - 52 - VW)
#define HY  (RY + VISIBLE * ROW_H + 6)
#define FY  (BY + 614)
#define FW  360
#define FH  38

static const uint32_t k_chalk = RGB(226, 228, 216), k_amber = RGB(246, 190, 74), k_dim = RGB(150, 160, 150);

/* At `scale`, or smaller until it fits in `max_w`. */
static int fit(const char *s, int scale, int max_w)
{
    while (scale > 1 && text_width(s, scale) > max_w)
        scale--;
    return scale;
}

/* Text of a row's height, smaller ones centred on it. */
static void text_fit(Canvas *c, int x, int y, const char *s, int scale, int max_w, uint32_t col, int centre)
{
    int sc = fit(s, scale, max_w), w = text_width(s, sc);

    text(c, centre ? x + (max_w - w) / 2 : x, y + (scale - sc) * 4, s, sc, col);
}

static void frame(Canvas *c, int x, int y, int w, int h, int t, uint32_t col)
{
    fill(c, x, y, w, t, col);
    fill(c, x, y + h - t, w, t, col);
    fill(c, x, y, t, h, col);
    fill(c, x + w - t, y, t, h, col);
}

/* ── The rows ── */

static void build_rows(void)
{
    int i;

    L.nrows = 0;
#define ADD(k, a) (L.rows[L.nrows].kind = (k), L.rows[L.nrows].arg = (a), L.nrows++)
    switch (L.tab) {
    case TAB_GRAPHICS:
        for (i = 0; i < (int)(sizeof k_graphics / sizeof k_graphics[0]); i++)
            L.rows[L.nrows++] = k_graphics[i];
        break;
    case TAB_AUDIO:
        for (i = 0; i < (int)(sizeof k_audio / sizeof k_audio[0]); i++)
            L.rows[L.nrows++] = k_audio[i];
        break;
    case TAB_MODS:
        for (i = 0; i < (int)(sizeof k_mods / sizeof k_mods[0]); i++)
            L.rows[L.nrows++] = k_mods[i];
        for (i = 0; i < L.nmods && L.nrows < 46; i++)
            ADD(R_MOD, i);
        ADD(R_MODS_DIR, 0);
        break;
    case TAB_PADS:
        ADD(R_PAD, 0);
        ADD(R_PAD, 1);
        ADD(R_EDIT, 0);
        for (i = 0; i < N_BINDS; i++)
            ADD(R_BIND, i);
        ADD(R_RESET, 0);
        break;
    }
#undef ADD
    if (L.cur > L.nrows)
        L.cur = L.nrows;
}

static void list_pads(void)
{
    int i, n = 0;

    for (i = 0; i < MAX_DEVS; i++)
        if (L.pads[i]) {
            SDL_GameControllerClose(L.pads[i]);
            L.pads[i] = NULL;
        }
    for (i = 0; i < SDL_NumJoysticks() && n < MAX_DEVS; i++) {
        const char *name;
        if (!xbox_InputDeviceSpec(i, L.dev[n].spec, sizeof L.dev[n].spec))
            continue;
        name = SDL_GameControllerNameForIndex(i);
        snprintf(L.dev[n].name, sizeof L.dev[n].name, "%s", name ? name : "Controller");
        L.pads[n] = SDL_GameControllerOpen(i);
        n++;
    }
    L.ndev = n;
}

static void list_audio(void)
{
    int i, n = SDL_GetNumAudioDevices(0);

    L.naudio = 0;
    for (i = 0; i < n && L.naudio < MAX_DEVS; i++) {
        const char *name = SDL_GetAudioDeviceName(i, 0);
        if (name && *name)
            snprintf(L.audio[L.naudio++], sizeof L.audio[0], "%s", name);
    }
}

static void list_mods(void)
{
    L.nmods = conker_mods_list(L.mods, L.mod_on, MAX_MODS);
}

/* The display's size and modes, for the resolution list. */
static void list_display(int d, int *dw, int *dh, int (*modes)[2], int *nmodes)
{
    SDL_DisplayMode m;
    int n, i, k = 0;

    *dw = *dh = 0;
    if (SDL_GetDesktopDisplayMode(d, &m) == 0) {
        *dw = m.w;
        *dh = m.h;
    }
    n = SDL_GetNumDisplayModes(d);
    for (i = 0; i < n && k < 64; i++)
        if (SDL_GetDisplayMode(d, i, &m) == 0
                && (!k || modes[k - 1][0] != m.w || modes[k - 1][1] != m.h)) {
            modes[k][0] = m.w;
            modes[k][1] = m.h;
            k++;
        }
    *nmodes = k;
}

/* The window as the display rows say, now. */
static void follow_window(void)
{
    if (L.win)
        xbox_WindowApplyTo(L.win);
}

/* Which device a player gets on Auto: the ones nobody names, in order. */
static int auto_device(int player)
{
    const char *spec[2];
    int i, skip = 0;

    spec[0] = conker_settings_pad(0, NULL);
    spec[1] = conker_settings_pad(1, NULL);
    if (player == 1 && !spec[0][0])
        skip = 1;                       /* player 1 takes the first */
    for (i = 0; i < L.ndev; i++) {
        if (!strcmp(L.dev[i].spec, spec[0]) || !strcmp(L.dev[i].spec, spec[1]))
            continue;
        if (skip-- > 0)
            continue;
        return i;
    }
    return -1;
}

static const char *row_label(const Row *r, char *buf, size_t size)
{
    switch (r->kind) {
    case R_OPT:       return conker_options_label(r->arg);
    case R_MONITOR:   return conker_tr("Monitor");
    case R_AUDIO_DEV: return conker_tr("Audio Device");
    case R_VOLUME:    return conker_tr("Master Volume");
    case R_PAD:       return conker_tr(r->arg ? "Player 2 Controller" : "Player 1 Controller");
    case R_EDIT:      return conker_tr("Buttons For");
    case R_BIND:      return conker_tr(k_binds[r->arg].label);
    case R_RESET:     return conker_tr("Reset Buttons");
    case R_MOD:       snprintf(buf, size, "%s", L.mods[r->arg]); return buf;
    case R_MODS_DIR:  return conker_tr("Mods Folder");
    }
    return "";
}

/* The row's value; 0 when it has none to step through. */
static int row_value(const Row *r, char *buf, size_t size)
{
    buf[0] = 0;
    switch (r->kind) {
    case R_OPT:
        conker_options_value(r->arg, buf, size);
        return 1;
    case R_MONITOR: {
        const char *name = SDL_GetDisplayName(L.display);
        snprintf(buf, size, "%d: %s", L.display + 1, name ? name : "");
        return 1;
    }
    case R_AUDIO_DEV: {
        const char *dev = conker_settings_audio_device();
        int i, have = 0;
        for (i = 0; i < L.naudio; i++)
            have |= !strcmp(L.audio[i], dev);
        if (!dev[0])
            snprintf(buf, size, "%s", conker_tr("Default"));
        else
            snprintf(buf, size, "%s%s", dev, have ? "" : conker_tr(" (unplugged)"));
        return 1;
    }
    case R_VOLUME:
        snprintf(buf, size, "%d%%", conker_settings_volume());
        return 1;
    case R_PAD: {
        const char *name, *spec = conker_settings_pad(r->arg, &name);
        int i;
        if (!spec[0]) {
            i = auto_device(r->arg);
            snprintf(buf, size, "%s: %s", conker_tr("Auto"),
                     i >= 0 ? L.dev[i].name : conker_tr("None"));
        } else if (!strcmp(spec, "none")) {
            snprintf(buf, size, "%s", conker_tr(r->arg ? "None" : "Keyboard only"));
        } else {
            for (i = 0; i < L.ndev && strcmp(L.dev[i].spec, spec); i++)
                ;
            snprintf(buf, size, "%s%s", i < L.ndev ? L.dev[i].name : name,
                     i < L.ndev ? "" : conker_tr(" (unplugged)"));
        }
        return 1;
    }
    case R_EDIT:
        snprintf(buf, size, "%s", conker_tr(L.player ? "Player 2" : "Player 1"));
        return 1;
    case R_BIND: {
        unsigned char m[16];
        if (L.capture == k_binds[r->arg].control) {
            snprintf(buf, size, "%s", conker_tr("Press a button..."));
            return 1;
        }
        conker_settings_pad_map(L.player, m);
        snprintf(buf, size, "%s", conker_tr(k_sources[m[k_binds[r->arg].control]]));
        return 1;
    }
    case R_MOD:
        snprintf(buf, size, "%s", conker_tr(L.mod_on[r->arg] ? "On" : "Off"));
        return 1;
    case R_MODS_DIR:
        snprintf(buf, size, "%s", conker_tr("Open"));
        return 0;
    }
    return 0;
}

static const char *row_hint(const Row *r)
{
    switch (r->kind) {
    case R_OPT:       return k_hints[r->arg];
    case R_MONITOR:   return "The screen the game shows on.";
    case R_AUDIO_DEV: return "Where the sound goes. Default follows the system's choice.";
    case R_VOLUME:    return "Everything at once. Music, effects and speech have their own in the game's Options.";
    case R_PAD:       return r->arg ? "The controller of player 2, for split-screen multiplayer."
                                    : "The controller of player 1. The keyboard works for player 1 too.";
    case R_EDIT:      return "Whose buttons the rows below change.";
    case R_BIND:      return "Left/Right: pick the button. A: then press it on the controller.";
    case R_RESET:     return "Every button back where the controller has it.";
    case R_MOD:       return "A mod you added: a folder in the Mods Folder. Applies when the game starts.";
    case R_MODS_DIR:  return "Put each mod in a folder of its own here, shaped like the game's files.";
    }
    return "";
}

static void set_monitor(int d)
{
    int modes[64][2], nmodes, dw, dh;

    L.display = d;
    conker_settings_set_display(d);
    list_display(d, &dw, &dh, modes, &nmodes);
    conker_first_run_display(dw, dh, (const int (*)[2])modes, nmodes);
    conker_first_run_refit();
    follow_window();
}

static void step_row(const Row *r, int dir)
{
    switch (r->kind) {
    case R_OPT:
        conker_first_run_step(r->arg, dir);
        if (r->arg == CONKER_OPT_DISPLAY_MODE || r->arg == CONKER_OPT_ASPECT
                || r->arg == CONKER_OPT_RESOLUTION)
            follow_window();
        break;
    case R_MONITOR: {
        int n = SDL_GetNumVideoDisplays();
        if (n > 1)
            set_monitor(((L.display + dir) % n + n) % n);
        break;
    }
    case R_AUDIO_DEV: {
        const char *dev = conker_settings_audio_device();
        int i, at = -1;
        for (i = 0; i < L.naudio; i++)
            if (!strcmp(L.audio[i], dev))
                at = i;
        at = ((at + 1 + dir) % (L.naudio + 1) + L.naudio + 1) % (L.naudio + 1) - 1;
        conker_settings_set_audio_device(at < 0 ? "" : L.audio[at]);
        break;
    }
    case R_VOLUME:
        conker_settings_set_volume(conker_settings_volume() + dir * 5);
        break;
    case R_PAD: {
        /* Auto, each controller plugged in, none. */
        const char *spec = conker_settings_pad(r->arg, NULL);
        int n = L.ndev + 2, at = 0, i;
        if (!strcmp(spec, "none"))
            at = n - 1;
        for (i = 0; spec[0] && i < L.ndev; i++)
            if (!strcmp(L.dev[i].spec, spec))
                at = i + 1;
        at = ((at + dir) % n + n) % n;
        if (at == 0)
            conker_settings_set_pad(r->arg, "", "");
        else if (at == n - 1)
            conker_settings_set_pad(r->arg, "none", "");
        else
            conker_settings_set_pad(r->arg, L.dev[at - 1].spec, L.dev[at - 1].name);
        break;
    }
    case R_EDIT:
        L.player = !L.player;
        break;
    case R_BIND: {
        unsigned char m[16];
        int c = k_binds[r->arg].control;
        conker_settings_pad_map(L.player, m);
        m[c] = (unsigned char)(((m[c] + dir) % INPUT_SRC_COUNT + INPUT_SRC_COUNT) % INPUT_SRC_COUNT);
        conker_settings_set_pad_map(L.player, m);
        break;
    }
    case R_MOD:
        L.mod_on[r->arg] = !L.mod_on[r->arg];
        conker_mods_set_on(L.mods[r->arg], L.mod_on[r->arg]);
        break;
    default:
        break;
    }
}

static void activate_row(const Row *r, Uint32 now)
{
    switch (r->kind) {
    case R_OPT:
        conker_first_run_activate(r->arg);
        if (r->arg == CONKER_OPT_DISPLAY_MODE || r->arg == CONKER_OPT_ASPECT
                || r->arg == CONKER_OPT_RESOLUTION)
            follow_window();
        break;
    case R_BIND:
        L.capture = k_binds[r->arg].control;
        L.capture_until = now + 5000;
        break;
    case R_RESET: {
        InputPadMap id;
        xbox_InputMap_PadMapDefaults(&id);
        conker_settings_set_pad_map(L.player, id.source);
        break;
    }
    case R_MODS_DIR: {
#if SDL_VERSION_ATLEAST(2, 0, 14)
        char url[1200];
        snprintf(url, sizeof url, "file://%s", L.mods_dir);
        SDL_OpenURL(url);
#endif
        break;
    }
    case R_VOLUME:
        break;
    default:
        step_row(r, 1);
        break;
    }
}

/* A press on the pad while a button is being set: that control, from now on. */
static void capture_source(int src)
{
    unsigned char m[16];

    conker_settings_pad_map(L.player, m);
    m[L.capture] = (unsigned char)src;
    conker_settings_set_pad_map(L.player, m);
    L.capture = -1;
    L.quiet_until = SDL_GetTicks() + 300;
}

static int source_of_button(int b)
{
    switch (b) {
    case SDL_CONTROLLER_BUTTON_A: return INPUT_SRC_SOUTH;
    case SDL_CONTROLLER_BUTTON_B: return INPUT_SRC_EAST;
    case SDL_CONTROLLER_BUTTON_X: return INPUT_SRC_WEST;
    case SDL_CONTROLLER_BUTTON_Y: return INPUT_SRC_NORTH;
    case SDL_CONTROLLER_BUTTON_BACK: return INPUT_SRC_BACK;
    case SDL_CONTROLLER_BUTTON_GUIDE: return INPUT_SRC_GUIDE;
    case SDL_CONTROLLER_BUTTON_START: return INPUT_SRC_START;
    case SDL_CONTROLLER_BUTTON_LEFTSTICK: return INPUT_SRC_LEFT_STICK_CLICK;
    case SDL_CONTROLLER_BUTTON_RIGHTSTICK: return INPUT_SRC_RIGHT_STICK_CLICK;
    case SDL_CONTROLLER_BUTTON_LEFTSHOULDER: return INPUT_SRC_LEFT_SHOULDER;
    case SDL_CONTROLLER_BUTTON_RIGHTSHOULDER: return INPUT_SRC_RIGHT_SHOULDER;
    case SDL_CONTROLLER_BUTTON_DPAD_UP: return INPUT_SRC_DPAD_UP;
    case SDL_CONTROLLER_BUTTON_DPAD_DOWN: return INPUT_SRC_DPAD_DOWN;
    case SDL_CONTROLLER_BUTTON_DPAD_LEFT: return INPUT_SRC_DPAD_LEFT;
    case SDL_CONTROLLER_BUTTON_DPAD_RIGHT: return INPUT_SRC_DPAD_RIGHT;
#if SDL_VERSION_ATLEAST(2, 0, 14)
    case SDL_CONTROLLER_BUTTON_MISC1: return INPUT_SRC_MISC1;
    case SDL_CONTROLLER_BUTTON_PADDLE1: return INPUT_SRC_PADDLE1;
    case SDL_CONTROLLER_BUTTON_PADDLE2: return INPUT_SRC_PADDLE2;
    case SDL_CONTROLLER_BUTTON_PADDLE3: return INPUT_SRC_PADDLE3;
    case SDL_CONTROLLER_BUTTON_PADDLE4: return INPUT_SRC_PADDLE4;
    case SDL_CONTROLLER_BUTTON_TOUCHPAD: return INPUT_SRC_TOUCHPAD;
#endif
    }
    return -1;
}

/* ── Drawing ── */

/* The page's size follows the window's shape. */
static void fit_page(void)
{
    int ww = 0, wh = 0, w;

    SDL_GetWindowSize(L.win, &ww, &wh);
    w = ww > 0 && wh > 0 ? (int)((long)PAGE_H * ww / wh) & ~1 : 1280;
    w = w < PAGE_W_MIN ? PAGE_W_MIN : w > PAGE_W_MAX ? PAGE_W_MAX : w;
    if (w == L.page_w && L.tex)
        return;
    L.page_w = w;
    fprintf(stderr, "[CONKER] launcher: window %dx%d, page %dx%d\n", ww, wh, w, PAGE_H);
    if (L.tex)
        SDL_DestroyTexture(L.tex);
    L.tex = SDL_CreateTexture(L.ren, SDL_PIXELFORMAT_XRGB8888, SDL_TEXTUREACCESS_STREAMING, w, PAGE_H);
    SDL_RenderSetLogicalSize(L.ren, w, PAGE_H);
}

/* Wood, the frame and the slate: the same until the page changes width. */
static void draw_background(Canvas *c)
{
    if (L.bg_w != L.page_w) {
        Canvas b = { L.bg, L.page_w, PAGE_H };
        wood(&b, 0, 0, b.w, PAGE_H, 66);
        fill(&b, BX - 14, BY - 14, BW + 28, BH + 28, RGB(48, 28, 15));
        fill(&b, BX - 8, BY - 8, BW + 16, BH + 16, RGB(120, 76, 40));
        slate(&b, BX, BY, BW, BH);
        L.bg_w = L.page_w;
    }
    memcpy(c->px, L.bg, (size_t)L.page_w * PAGE_H * 4);
}

/* A hint over two lines at most, broken at spaces. */
static void draw_hint(Canvas *c, const char *s, int y, uint32_t col)
{
    int max_w = BW - 120, sc = 2;
    char line[256];
    const char *p = s;

    if (text_width(s, sc) <= max_w) {
        text(c, (L.page_w - text_width(s, sc)) / 2, y + 10, s, sc, col);
        return;
    }
    while (*p) {
        const char *best = NULL, *q;
        size_t n;
        for (q = p; *q; q++)
            if (*q == ' ') {
                n = (size_t)(q - p) < sizeof line ? (size_t)(q - p) : sizeof line - 1;
                memcpy(line, p, n);
                line[n] = 0;
                if (text_width(line, sc) > max_w)
                    break;
                best = q;
            }
        if (!*q) {
            snprintf(line, sizeof line, "%s", p);
            if (text_width(line, sc) <= max_w || !best)
                best = q;
        }
        n = (size_t)(best - p) < sizeof line ? (size_t)(best - p) : sizeof line - 1;
        memcpy(line, p, n);
        line[n] = 0;
        text(c, (L.page_w - text_width(line, sc)) / 2, y, line, sc, col);
        y += 20;
        p = *best ? best + 1 : best;
    }
}

/* The tabs' places: each as wide as its name, the row of them centred
 * between LB and RB; smaller letters when they do not fit. */
static int tab_layout(int x[TAB_COUNT + 1], int *scale)
{
    int t, sc, total = 0, avail = BW - 160;

    for (sc = 3; sc >= 2; sc--) {
        total = 0;
        for (t = 0; t < TAB_COUNT; t++)
            total += text_width(conker_tr(k_tabs[t]), sc) + 40;
        if (total <= avail)
            break;
    }
    if (sc < 2)
        sc = 2;
    *scale = sc;
    x[0] = BX + 80 + (avail - total > 0 ? (avail - total) / 2 : 0);
    for (t = 0; t < TAB_COUNT; t++)
        x[t + 1] = x[t] + text_width(conker_tr(k_tabs[t]), sc) + 40;
    return total;
}

static void draw_page(Canvas *c, Uint32 now)
{
    const char *title = conker_tr("ON THE HOUSE");
    int t, i, tx[TAB_COUNT + 1], tsc;
    char label[128], value[160];

    draw_background(c);
    text(c, (L.page_w - text_width(title, 5)) / 2, BY + 16, title, 5, k_amber);
    glass(c, BX + 60, BY + 8, 34, 52, 0.75f);
    glass(c, BX + BW - 94, BY + 8, 34, 52, 0.75f);

    /* The tabs, LB and RB either side. */
    text(c, BX + 34, TY + 12, "LB", 2, k_dim);
    text(c, BX + BW - 58, TY + 12, "RB", 2, k_dim);
    tab_layout(tx, &tsc);
    for (t = 0; t < TAB_COUNT; t++) {
        int x = tx[t], tw = tx[t + 1] - tx[t], sel = t == L.tab;
        const char *s = conker_tr(k_tabs[t]);
        if (sel) {
            fill(c, x + 4, TY, tw - 8, TH, RGB(52, 64, 60));
            fill(c, x + 4, TY + TH - 4, tw - 8, 4, k_amber);
        }
        text(c, x + 20, TY + 7 + (3 - tsc) * 4, s, tsc, sel ? k_amber : k_dim);
    }
    fill(c, BX + 40, TY + TH + 6, BW - 80, 2, RGB(120, 128, 118));

    /* The rows, scrolled to keep the cursor in sight. */
    if (L.cur < L.nrows) {
        if (L.cur < L.top)
            L.top = L.cur;
        if (L.cur >= L.top + VISIBLE)
            L.top = L.cur - VISIBLE + 1;
    }
    if (L.top > L.nrows - VISIBLE)
        L.top = L.nrows - VISIBLE > 0 ? L.nrows - VISIBLE : 0;
    for (i = L.top; i < L.nrows && i < L.top + VISIBLE; i++) {
        const Row *r = &L.rows[i];
        int y = RY + (i - L.top) * ROW_H, sel = i == L.cur;
        uint32_t col = sel ? k_amber : k_chalk;
        const char *lab = row_label(r, label, sizeof label);
        int has = row_value(r, value, sizeof value);

        if (sel)
            glass(c, LX - 44, y - 5, 24, 30, 0.7f);
        text_fit(c, LX, y, lab, 3, VX - LX - 30, col, 0);
        if (r->kind == R_BIND && L.capture == k_binds[r->arg].control && (now / 400) % 2)
            continue;
        text_fit(c, VX + 22, y, value, 3, VW - 44, col, 1);
        if (has) {
            text(c, VX - 6, y, "<", 3, sel ? k_amber : k_dim);
            text(c, VX + VW - 12, y, ">", 3, sel ? k_amber : k_dim);
        }
    }
    if (L.nrows > VISIBLE) {
        int track = VISIBLE * ROW_H - 8, h = track * VISIBLE / L.nrows;
        int y = RY + track * L.top / L.nrows;
        fill(c, BX + BW - 26, RY, 4, track, RGB(70, 82, 78));
        fill(c, BX + BW - 26, y, 4, h, k_dim);
    }

    /* What the row does, or where the mods go. */
    if (L.cur < L.nrows) {
        const Row *r = &L.rows[L.cur];
        if (r->kind == R_MODS_DIR) {
            const char *h = conker_tr(row_hint(r));
            int sc = fit(h, 2, BW - 60);
            text(c, (L.page_w - text_width(h, sc)) / 2, HY, h, sc, k_amber);
            sc = fit(L.mods_dir, 2, BW - 60);
            text(c, (L.page_w - text_width(L.mods_dir, sc)) / 2, HY + 20, L.mods_dir, sc, k_chalk);
        } else {
            draw_hint(c, conker_tr(row_hint(r)), HY, k_amber);
        }
    }

    /* Start and Quit. */
    for (i = 0; i < 2; i++) {
        int x = L.page_w / 2 + (i ? 20 : -20 - FW), sel = L.cur == L.nrows && L.foot == i;
        const char *s = conker_tr(i ? "Quit" : "Start the game");
        if (sel)
            fill(c, x, FY, FW, FH, RGB(64, 54, 34));
        frame(c, x, FY, FW, FH, 2, sel ? k_amber : k_dim);
        text_fit(c, x + 10, FY + 7, s, 3, FW - 20, sel ? k_amber : k_chalk, 1);
    }

    /* The keys, on two lines where one is too narrow; the notice. */
    {
        const char *s = conker_tr("LB/RB: tab   Up/Down: choose   Left/Right: change   A: confirm   Start: play");
        const char *mid = NULL, *p;
        int sc;

        if (text_width(s, 2) <= BW - 40) {
            text(c, (L.page_w - text_width(s, 2)) / 2, BY + BH - 82, s, 2, k_dim);
        } else {
            /* At the gap nearest the middle. */
            for (p = s; (p = strstr(p, "   ")) != NULL; p += 3)
                if (!mid || abs((int)(p - s) * 2 - (int)strlen(s)) < abs((int)(mid - s) * 2 - (int)strlen(s)))
                    mid = p;
            if (mid) {
                char a[256];
                size_t n = (size_t)(mid - s) < sizeof a ? (size_t)(mid - s) : sizeof a - 1;
                memcpy(a, s, n);
                a[n] = 0;
                sc = fit(a, 2, BW - 40);
                text(c, (L.page_w - text_width(a, sc)) / 2, BY + BH - 92, a, sc, k_dim);
                s = mid + 3;
            }
            sc = fit(s, 2, BW - 40);
            text(c, (L.page_w - text_width(s, sc)) / 2, BY + BH - 72, s, sc, k_dim);
        }
        s = conker_tr("Unofficial fan project. Not affiliated with or endorsed by Microsoft or Rare.");
        sc = fit(s, 2, BW - 40);
        text(c, (L.page_w - text_width(s, sc)) / 2, BY + BH - 30, s, sc, k_dim);
    }
}

/* The page's language shows as it is chosen, except Japanese, which these
 * letters cannot write: English until the game starts. */
static void show_language(void)
{
    int lang = conker_first_run_language();

    conker_lang_set(lang == CONKER_LANG_COUNT - 1 ? 0 : lang);
}

/* What SDL calls the player's first language, on the option's list. */
static int preferred_language(void)
{
    static const char *const k_codes[CONKER_LANG_COUNT] = { "en", "es", "fr", "de", "it", "ja" };
    SDL_Locale *loc = SDL_GetPreferredLocales();
    int i, found = -1;

    if (loc && loc[0].language)
        for (i = 0; i < CONKER_LANG_COUNT; i++)
            if (!strcmp(loc[0].language, k_codes[i]))
                found = i;
    SDL_free(loc);
    return found;
}

/* ── Input ── */

enum { ACT_NONE, ACT_UP, ACT_DOWN, ACT_LEFT, ACT_RIGHT, ACT_A, ACT_B, ACT_LB, ACT_RB, ACT_START, ACT_QUIT };

static void set_tab(int t)
{
    L.tab = (t + TAB_COUNT) % TAB_COUNT;
    L.cur = 0;
    L.top = 0;
    build_rows();
}

/* 1: start the game; -1: quit; 0: carry on. */
static int do_action(int act, Uint32 now)
{
    int n = L.nrows + 1;

    switch (act) {
    case ACT_UP:
        L.cur = (L.cur + n - 1) % n;
        break;
    case ACT_DOWN:
        L.cur = (L.cur + 1) % n;
        break;
    case ACT_LEFT:
    case ACT_RIGHT:
        if (L.cur == L.nrows)
            L.foot = act == ACT_RIGHT;
        else
            step_row(&L.rows[L.cur], act == ACT_LEFT ? -1 : 1);
        break;
    case ACT_A:
        if (L.cur == L.nrows)
            return L.foot ? -1 : 1;
        activate_row(&L.rows[L.cur], now);
        break;
    case ACT_B:
        /* Back: to the buttons below, on Quit. */
        L.cur = L.nrows;
        L.foot = 1;
        break;
    case ACT_LB:
    case ACT_RB:
        set_tab(L.tab + (act == ACT_LB ? -1 : 1));
        break;
    case ACT_START:
        return 1;
    case ACT_QUIT:
        return -1;
    default:
        break;
    }
    show_language();
    return 0;
}

static int mouse_action(int x, int y, Uint32 now)
{
    int t, i, tx[TAB_COUNT + 1], tsc;

    if (y >= TY && y < TY + TH) {
        tab_layout(tx, &tsc);
        for (t = 0; t < TAB_COUNT; t++)
            if (x >= tx[t] && x < tx[t + 1])
                set_tab(t);
        return 0;
    }
    if (y >= RY && y < RY + VISIBLE * ROW_H) {
        int r = L.top + (y - RY) / ROW_H;
        char value[160];
        if (r >= L.nrows)
            return 0;
        L.cur = r;
        if (!row_value(&L.rows[r], value, sizeof value))
            return do_action(ACT_A, now);
        if (x >= VX - 20)
            return do_action(x < VX + VW / 2 ? ACT_LEFT : ACT_RIGHT, now);
        return 0;
    }
    for (i = 0; i < 2; i++) {
        int bx = L.page_w / 2 + (i ? 20 : -20 - FW);
        if (x >= bx && x < bx + FW && y >= FY && y < FY + FH) {
            L.cur = L.nrows;
            L.foot = i;
            return do_action(ACT_A, now);
        }
    }
    return 0;
}

/* The next step of CONKER_FIRSTRUN_SCRIPT: an action, or a picture taken. */
static int script_step(const char **script, const Canvas *c)
{
    char step[512];
    const char *s = *script, *end = strchr(s, ',');
    size_t n = end ? (size_t)(end - s) : strlen(s);

    if (n >= sizeof step)
        n = sizeof step - 1;
    memcpy(step, s, n);
    step[n] = 0;
    *script = end ? end + 1 : s + strlen(s);
    if (!strncmp(step, "shot:", 5)) {
        SDL_Surface *sf = SDL_CreateRGBSurfaceWithFormatFrom(c->px, c->w, c->h, 32, c->w * 4,
                                                             SDL_PIXELFORMAT_XRGB8888);
        if (sf) {
            SDL_SaveBMP(sf, step + 5);
            SDL_FreeSurface(sf);
        }
        return ACT_NONE;
    }
    return !strcmp(step, "up") ? ACT_UP : !strcmp(step, "down") ? ACT_DOWN
         : !strcmp(step, "left") ? ACT_LEFT : !strcmp(step, "right") ? ACT_RIGHT
         : !strcmp(step, "a") ? ACT_A : !strcmp(step, "b") ? ACT_B
         : !strcmp(step, "lb") ? ACT_LB : !strcmp(step, "rb") ? ACT_RB
         : !strcmp(step, "start") ? ACT_START : !strcmp(step, "quit") ? ACT_QUIT : ACT_NONE;
}

static int key_action(SDL_Keycode k)
{
    switch (k) {
    case SDLK_UP: return ACT_UP;
    case SDLK_DOWN: return ACT_DOWN;
    case SDLK_LEFT: return ACT_LEFT;
    case SDLK_RIGHT: return ACT_RIGHT;
    case SDLK_RETURN: case SDLK_KP_ENTER: case SDLK_SPACE: return ACT_A;
    case SDLK_ESCAPE: case SDLK_BACKSPACE: return ACT_B;
    case SDLK_q: case SDLK_PAGEUP: return ACT_LB;
    case SDLK_e: case SDLK_PAGEDOWN: case SDLK_TAB: return ACT_RB;
    default: return ACT_NONE;
    }
}

static int pad_action(int b)
{
    switch (b) {
    case SDL_CONTROLLER_BUTTON_A: return ACT_A;
    case SDL_CONTROLLER_BUTTON_B: return ACT_B;
    case SDL_CONTROLLER_BUTTON_LEFTSHOULDER: return ACT_LB;
    case SDL_CONTROLLER_BUTTON_RIGHTSHOULDER: return ACT_RB;
    case SDL_CONTROLLER_BUTTON_START: return ACT_START;
    default: return ACT_NONE;
    }
}

/* Directions from every pad, d-pad or stick, held. */
static int pad_direction(void)
{
    int i;

    for (i = 0; i < L.ndev; i++) {
        SDL_GameController *p = L.pads[i];
        int lx, ly;
        if (!p)
            continue;
        lx = SDL_GameControllerGetAxis(p, SDL_CONTROLLER_AXIS_LEFTX);
        ly = SDL_GameControllerGetAxis(p, SDL_CONTROLLER_AXIS_LEFTY);
        if (SDL_GameControllerGetButton(p, SDL_CONTROLLER_BUTTON_DPAD_UP) || ly < -16000)
            return ACT_UP;
        if (SDL_GameControllerGetButton(p, SDL_CONTROLLER_BUTTON_DPAD_DOWN) || ly > 16000)
            return ACT_DOWN;
        if (SDL_GameControllerGetButton(p, SDL_CONTROLLER_BUTTON_DPAD_LEFT) || lx < -16000)
            return ACT_LEFT;
        if (SDL_GameControllerGetButton(p, SDL_CONTROLLER_BUTTON_DPAD_RIGHT) || lx > 16000)
            return ACT_RIGHT;
    }
    return ACT_NONE;
}

int conker_firstrun_show(const char *data_dir)
{
    int modes[64][2], nmodes, dw, dh, done = 0, held = ACT_NONE, mode, w, h, n;
    Uint32 repeat_at = 0, script_at = 0;
    const char *script = getenv("CONKER_FIRSTRUN_SCRIPT");
    Canvas c;

    memset(&L, 0, sizeof L);
    L.capture = -1;
    L.bg_w = -1;
    L.px = malloc((size_t)PAGE_W_MAX * PAGE_H * 4);
    L.bg = malloc((size_t)PAGE_W_MAX * PAGE_H * 4);
    snprintf(L.mods_dir, sizeof L.mods_dir, "%s/mods", data_dir);
    SDL_SetHint(SDL_HINT_NO_SIGNAL_HANDLERS, "1");
    if (!L.px || !L.bg || SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER) != 0) {
        fprintf(stderr, "[CONKER] launcher: no SDL video (%s)\n", SDL_GetError());
        free(L.px);
        free(L.bg);
        return 0;
    }
    /* The output devices, to choose from; the game opens its own later. */
    if (SDL_InitSubSystem(SDL_INIT_AUDIO) == 0)
        list_audio();

    n = SDL_GetNumVideoDisplays();
    L.display = conker_settings_display();
    if (L.display < 0 || L.display >= n)
        L.display = 0;
    list_display(L.display, &dw, &dh, modes, &nmodes);
    conker_first_run_begin(dw, dh, (const int (*)[2])modes, nmodes, preferred_language());
    conker_first_run_refit();
    conker_mods_prelaunch(1);
    show_language();
    list_mods();

    conker_first_run_window(&mode, &w, &h);
    L.win = SDL_CreateWindow("Conker: Live & Reloaded recomp",
                             SDL_WINDOWPOS_CENTERED_DISPLAY(L.display),
                             SDL_WINDOWPOS_CENTERED_DISPLAY(L.display), w, h,
                             SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    if (L.win)
        follow_window();
    L.ren = L.win ? SDL_CreateRenderer(L.win, -1, SDL_RENDERER_PRESENTVSYNC) : NULL;
    if (L.ren)
        fit_page();
    if (!L.tex) {
        /* What the cfg says stands: no launcher is no reason not to play. */
        fprintf(stderr, "[CONKER] launcher: no window (%s)\n", SDL_GetError());
        if (L.ren)
            SDL_DestroyRenderer(L.ren);
        if (L.win)
            SDL_DestroyWindow(L.win);
        SDL_Quit();
        conker_mods_prelaunch(0);
        conker_first_run_end();
        free(L.px);
        free(L.bg);
        return 0;
    }
    list_pads();
    build_rows();
    fprintf(stderr, "[CONKER] launcher: display %d of %d (%dx%d), %d controller(s), %d audio device(s)\n",
            L.display + 1, n, dw, dh, L.ndev, L.naudio);

    while (!done) {
        SDL_Event ev;
        int act;
        Uint32 now = SDL_GetTicks();

        fit_page();
        c.px = L.px;
        c.w = L.page_w;
        c.h = PAGE_H;
        draw_page(&c, now);
        SDL_UpdateTexture(L.tex, NULL, L.px, L.page_w * 4);
        SDL_RenderClear(L.ren);
        SDL_RenderCopy(L.ren, L.tex, NULL, NULL);
        SDL_RenderPresent(L.ren);

        if (L.capture >= 0 && now >= L.capture_until)
            L.capture = -1;

        while (!done && SDL_PollEvent(&ev)) {
            act = ACT_NONE;
            if (L.capture >= 0) {
                if (ev.type == SDL_CONTROLLERBUTTONDOWN && source_of_button(ev.cbutton.button) >= 0) {
                    capture_source(source_of_button(ev.cbutton.button));
                    continue;
                }
                if (ev.type == SDL_CONTROLLERAXISMOTION && ev.caxis.value > 16000
                        && (ev.caxis.axis == SDL_CONTROLLER_AXIS_TRIGGERLEFT
                            || ev.caxis.axis == SDL_CONTROLLER_AXIS_TRIGGERRIGHT)) {
                    capture_source(ev.caxis.axis == SDL_CONTROLLER_AXIS_TRIGGERLEFT
                                   ? INPUT_SRC_LEFT_TRIGGER : INPUT_SRC_RIGHT_TRIGGER);
                    continue;
                }
                if (ev.type == SDL_KEYDOWN && ev.key.keysym.sym == SDLK_ESCAPE) {
                    L.capture = -1;
                    continue;
                }
                if (ev.type != SDL_QUIT && ev.type != SDL_CONTROLLERDEVICEADDED
                        && ev.type != SDL_CONTROLLERDEVICEREMOVED)
                    continue;
            }
            switch (ev.type) {
            case SDL_QUIT:
                act = ACT_QUIT;
                break;
            case SDL_KEYDOWN:
                act = key_action(ev.key.keysym.sym);
                break;
            case SDL_CONTROLLERDEVICEADDED:
            case SDL_CONTROLLERDEVICEREMOVED:
                list_pads();
                break;
            case SDL_CONTROLLERBUTTONDOWN:
                if (now >= L.quiet_until)
                    act = pad_action(ev.cbutton.button);
                break;
            case SDL_MOUSEBUTTONDOWN:
                if (ev.button.button == SDL_BUTTON_LEFT) {
                    int r = mouse_action(ev.button.x, ev.button.y, now);
                    if (r) {
                        done = r;
                        continue;
                    }
                }
                break;
            case SDL_MOUSEWHEEL:
                L.top -= ev.wheel.y;
                if (L.top < 0)
                    L.top = 0;
                if (L.cur < L.nrows && (L.cur < L.top || L.cur >= L.top + VISIBLE))
                    L.cur = L.top;
                break;
            case SDL_WINDOWEVENT:
                /* Dragged to another display. */
                if (ev.window.event == SDL_WINDOWEVENT_MOVED) {
                    int d = SDL_GetWindowDisplayIndex(L.win);
                    if (d >= 0 && d != L.display && !(SDL_GetWindowFlags(L.win) & SDL_WINDOW_FULLSCREEN)) {
                        L.display = d;
                        conker_settings_set_display(d);
                        list_display(d, &dw, &dh, modes, &nmodes);
                        conker_first_run_display(dw, dh, (const int (*)[2])modes, nmodes);
                    }
                }
                break;
            default:
                break;
            }
            if (act != ACT_NONE)
                done = do_action(act, now);
        }

        /* Pad directions step once, then repeat while held. */
        if (!done && L.capture < 0) {
            int want = now >= L.quiet_until ? pad_direction() : held;
            if (want != held) {
                held = want;
                repeat_at = now + 400;
                if (want != ACT_NONE)
                    done = do_action(want, now);
            } else if (want != ACT_NONE && now >= repeat_at) {
                repeat_at = now + 130;
                done = do_action(want, now);
            }
        }

        if (script && *script && now >= script_at && !done) {
            draw_page(&c, now);
            script_at = now + 150;
            act = script_step(&script, &c);
            if (act != ACT_NONE)
                done = do_action(act, now);
        }
    }

    for (n = 0; n < MAX_DEVS; n++)
        if (L.pads[n])
            SDL_GameControllerClose(L.pads[n]);
    SDL_QuitSubSystem(SDL_INIT_AUDIO);
    SDL_DestroyTexture(L.tex);
    conker_mods_prelaunch(0);
    free(L.px);
    free(L.bg);
    if (done > 0) {
        /* The game keeps this window: it has the focus. */
        SDL_SetRenderDrawColor(L.ren, 0, 0, 0, 255);
        SDL_RenderClear(L.ren);
        SDL_RenderPresent(L.ren);
        SDL_DestroyRenderer(L.ren);
        xbox_WindowAdopt(L.win);
        conker_first_run_end();
        fprintf(stderr, "[CONKER] launcher: start\n");
        return 0;
    }
    SDL_DestroyRenderer(L.ren);
    SDL_DestroyWindow(L.win);
    SDL_Quit();
    fprintf(stderr, "[CONKER] launcher: quit, nothing saved\n");
    return -1;
}

/* ── The pipelines ────────────────────────────────────────────────────── */

void xbox_FramebufferWindowPresentPixels(uint32_t fb_va, const void *px, uint32_t w, uint32_t h,
                                         uint32_t pitch, uint32_t bpp);

#define WAIT_H 720

void conker_firstrun_wait_for_pipelines(void)
{
#ifdef CONKER_HAVE_VULKAN
    static uint32_t px[WAIT_H * 2276];   /* up to 32:9 */
    unsigned done = 0, total = 0;
    float hp = conker_settings_hor_plus();
    int w = hp > 0.0f ? (int)(WAIT_H * hp * 4.0f / 3.0f) & ~1 : WAIT_H * 4 / 3;
    Canvas c = { px, w > 2276 ? 2276 : w, WAIT_H };
    Uint32 t0 = SDL_GetTicks();

    nv2a_vk_pipeline_progress(&done, &total);
    if (!total)
        return;
    while (done < total) {
        char line[64];
        const char *s = conker_tr("Pouring the shaders");
        int gw = 180, gh = 300;

        wood(&c, 0, 0, c.w, c.h, 66);
        slate(&c, c.w / 2 - 460 > 0 ? c.w / 2 - 460 : 0, 80, 920 < c.w ? 920 : c.w, 560);
        glass(&c, (c.w - gw) / 2, 130, gw, gh, (float)done / (float)total);
        text(&c, (c.w - text_width(s, 5)) / 2, 460, s, 5, k_amber);
        snprintf(line, sizeof line, "%u / %u", done, total);
        text(&c, (c.w - text_width(line, 3)) / 2, 520, line, 3, k_chalk);
        s = conker_tr("This is quicker from the next start on.");
        text(&c, (c.w - text_width(s, 2)) / 2, 572, s, 2, k_dim);
        xbox_FramebufferWindowPresentPixels(0, px, (uint32_t)c.w, WAIT_H, (uint32_t)c.w * 4, 4);
        SDL_Delay(50);
        nv2a_vk_pipeline_progress(&done, &total);
    }
    fprintf(stderr, "[CONKER] pipelines: %u built before the game, %.1f s\n", total,
            (SDL_GetTicks() - t0) / 1000.0);
#endif
}
