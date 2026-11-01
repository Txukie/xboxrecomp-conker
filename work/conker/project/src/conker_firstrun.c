/*
 * What a new player sees before the game: Recomp Options on a pub's
 * chalkboard, and a glass that fills while the pipelines build.
 *
 * Everything is drawn here into a pixel buffer, wood and chalk from noise and
 * the letters from the table below, drawn for this port: nothing of the
 * game's art, logos or fonts. The rows are the submenu's (conker_settings.c),
 * so they cannot drift apart. It uses SDL, which every build has, for the
 * same page on Linux, the Steam Deck and Windows, by pad, keys or mouse.
 *
 * Tests: CONKER_FIRSTRUN_SCRIPT is what the player does, comma separated, a
 * step each 150 ms: up down left right a b, or shot:<file>, a BMP.
 */
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "conker_settings.h"
#include "video_player.h"
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

/* ── The page ─────────────────────────────────────────────────────────── */

enum { PAGE_W = 1280, PAGE_H = 800, ROW_START = CONKER_OPT_COUNT };

static const char *const k_hints[CONKER_OPT_COUNT] = {
    "The language of the game and its menus.",
    "A window, the whole screen, or the whole screen without changing its mode.",
    "The shape of your screen. Wider shapes show more of the world.",
    "The size of the window, or the screen mode.",
    "Draws above the original 640x480. Higher is sharper and asks more of the GPU.",
    "Waits for the screen, which stops tearing.",
    "30 is the console's rate.",
    "Hold LT to skip any cutscene, even one you have not seen.",
    "The attack mode as you remember it from the N64",
    "The weapon as you remember it from the N64",
    "The prologue as you remember it from the N64",
    "Downloads a patch made by others, separate from this project. Applies at the next start.",
};

#define BOARD_X 64
#define BOARD_Y 44
#define BOARD_W (PAGE_W - 2 * BOARD_X)
#define BOARD_H (PAGE_H - 2 * BOARD_Y)
#define ROW_X   (BOARD_X + 88)
#define ROW_Y   (BOARD_Y + 118)
#define ROW_H   36
#define VALUE_X (ROW_X + 500)
#define VALUE_W (BOARD_X + BOARD_W - 40 - VALUE_X)

static const uint32_t k_chalk = RGB(226, 228, 216), k_amber = RGB(246, 190, 74), k_dim = RGB(150, 160, 150);

static int row_y(int row)
{
    return ROW_Y + row * ROW_H + (row == ROW_START ? 6 : 0);
}

/* The page's language shows as it is chosen, except Japanese, which these
 * letters cannot write: English until the game starts. */
static void show_language(void)
{
    int lang = conker_first_run_language();

    conker_lang_set(lang == CONKER_LANG_COUNT - 1 ? 0 : lang);
}

static void draw_page(Canvas *c, int cur)
{
    const char *title = conker_tr("ON THE HOUSE");
    int r;

    wood(c, 0, 0, PAGE_W, PAGE_H, 66);
    fill(c, BOARD_X - 14, BOARD_Y - 14, BOARD_W + 28, BOARD_H + 28, RGB(48, 28, 15));
    fill(c, BOARD_X - 8, BOARD_Y - 8, BOARD_W + 16, BOARD_H + 16, RGB(120, 76, 40));
    slate(c, BOARD_X, BOARD_Y, BOARD_W, BOARD_H);

    text(c, (PAGE_W - text_width(title, 6)) / 2, BOARD_Y + 22, title, 6, k_amber);
    glass(c, BOARD_X + 70, BOARD_Y + 18, 40, 62, 0.75f);
    glass(c, BOARD_X + BOARD_W - 110, BOARD_Y + 18, 40, 62, 0.75f);
    {
        const char *s = conker_tr("How do you take it? You can change all this later in Options > Recomp Options.");
        text(c, (PAGE_W - text_width(s, 2)) / 2, BOARD_Y + 76, s, 2, k_chalk);
    }
    fill(c, BOARD_X + 60, BOARD_Y + 100, BOARD_W - 120, 2, RGB(120, 128, 118));

    for (r = 0; r <= ROW_START; r++) {
        int y = row_y(r), sel = r == cur;
        uint32_t col = sel ? k_amber : k_chalk;

        if (sel)
            glass(c, ROW_X - 44, y - 5, 24, 30, 0.7f);
        if (r == ROW_START) {
            const char *s = conker_tr("Start the game");
            text(c, ROW_X, y, s, 3, col);
        } else {
            char value[128];
            int vw;

            text(c, ROW_X, y, conker_options_label(r), 3, col);
            conker_options_value(r, value, sizeof value);
            vw = text_width(value, 3);
            text(c, VALUE_X + (VALUE_W - vw) / 2, y, value, 3, col);
            text(c, VALUE_X - 6, y, "<", 3, sel ? k_amber : k_dim);
            text(c, VALUE_X + VALUE_W - 12, y, ">", 3, sel ? k_amber : k_dim);
        }
    }

    if (cur < ROW_START) {
        const char *s = conker_tr(k_hints[cur]);
        text(c, (PAGE_W - text_width(s, 2)) / 2, BOARD_Y + BOARD_H - 76, s, 2, k_amber);
    }
    {
        const char *s = conker_tr("Up/Down: choose   Left/Right: change   A or Enter: confirm");
        text(c, (PAGE_W - text_width(s, 2)) / 2, BOARD_Y + BOARD_H - 50, s, 2, k_dim);
        s = conker_tr("Unofficial fan project. Not affiliated with or endorsed by Microsoft or Rare.");
        text(c, (PAGE_W - text_width(s, 2)) / 2, BOARD_Y + BOARD_H - 26, s, 2, k_dim);
    }
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

static void list_display(int *dw, int *dh, int (*modes)[2], int *nmodes)
{
    SDL_DisplayMode m;
    int n, i, k = 0;

    *dw = *dh = 0;
    if (SDL_GetDesktopDisplayMode(0, &m) == 0) {
        *dw = m.w;
        *dh = m.h;
    }
    n = SDL_GetNumDisplayModes(0);
    for (i = 0; i < n && k < 64; i++)
        if (SDL_GetDisplayMode(0, i, &m) == 0
                && (!k || modes[k - 1][0] != m.w || modes[k - 1][1] != m.h)) {
            modes[k][0] = m.w;
            modes[k][1] = m.h;
            k++;
        }
    *nmodes = k;
}

/* Pads: the first of whatever is plugged in, stick as d-pad. */
static SDL_GameController *open_pad(void)
{
    int i;

    for (i = 0; i < SDL_NumJoysticks(); i++)
        if (SDL_IsGameController(i))
            return SDL_GameControllerOpen(i);
    return NULL;
}

enum { ACT_NONE, ACT_UP, ACT_DOWN, ACT_LEFT, ACT_RIGHT, ACT_A, ACT_QUIT };

static int do_action(int act, int *cur)
{
    switch (act) {
    case ACT_UP:
        *cur = (*cur + ROW_START) % (ROW_START + 1);
        break;
    case ACT_DOWN:
        *cur = (*cur + 1) % (ROW_START + 1);
        break;
    case ACT_LEFT:
    case ACT_RIGHT:
        if (*cur < ROW_START)
            conker_first_run_step(*cur, act == ACT_LEFT ? -1 : 1);
        break;
    case ACT_A:
        if (*cur == ROW_START)
            return 1;
        conker_first_run_step(*cur, 1);
        break;
    default:
        break;
    }
    show_language();
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
         : !strcmp(step, "a") ? ACT_A : !strcmp(step, "b") ? ACT_QUIT : ACT_NONE;
}

int conker_firstrun_show(void)
{
    static uint32_t px[PAGE_W * PAGE_H];
    Canvas c = { px, PAGE_W, PAGE_H };
    SDL_Window *win;
    SDL_Renderer *ren;
    SDL_Texture *tex;
    SDL_GameController *pad = NULL;
    int modes[64][2], nmodes, dw, dh, cur = 0, done = 0, result = 0;
    int held = ACT_NONE;
    Uint32 repeat_at = 0, script_at = 0;
    const char *script = getenv("CONKER_FIRSTRUN_SCRIPT");

    SDL_SetHint(SDL_HINT_NO_SIGNAL_HANDLERS, "1");
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER) != 0) {
        fprintf(stderr, "[CONKER] first-run page: no SDL video (%s)\n", SDL_GetError());
        return 0;
    }
    list_display(&dw, &dh, modes, &nmodes);
    conker_first_run_begin(dw, dh, (const int (*)[2])modes, nmodes, preferred_language());
    show_language();

    {
        int small = dw > 0 && (dw <= PAGE_W || dh <= PAGE_H);
        win = SDL_CreateWindow("Conker: Live & Reloaded recomp", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                               PAGE_W, PAGE_H,
                               SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI
                               | (small ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0));
    }
    ren = win ? SDL_CreateRenderer(win, -1, SDL_RENDERER_PRESENTVSYNC) : NULL;
    tex = ren ? SDL_CreateTexture(ren, SDL_PIXELFORMAT_XRGB8888, SDL_TEXTUREACCESS_STREAMING,
                                  PAGE_W, PAGE_H) : NULL;
    if (!tex) {
        /* The defaults fitted to the display stand: no page is no reason not
         * to play. */
        fprintf(stderr, "[CONKER] first-run page: no window (%s)\n", SDL_GetError());
        if (ren)
            SDL_DestroyRenderer(ren);
        if (win)
            SDL_DestroyWindow(win);
        SDL_Quit();
        conker_first_run_end();
        return 0;
    }
    SDL_RenderSetLogicalSize(ren, PAGE_W, PAGE_H);
    pad = open_pad();
    fprintf(stderr, "[CONKER] first-run page: display %dx%d, pad %s\n", dw, dh, pad ? "yes" : "no");

    while (!done) {
        SDL_Event ev;
        int act = ACT_NONE;
        Uint32 now = SDL_GetTicks();

        draw_page(&c, cur);
        SDL_UpdateTexture(tex, NULL, px, PAGE_W * 4);
        SDL_RenderClear(ren);
        SDL_RenderCopy(ren, tex, NULL, NULL);
        SDL_RenderPresent(ren);

        while (SDL_PollEvent(&ev)) {
            act = ACT_NONE;
            switch (ev.type) {
            case SDL_QUIT:
                act = ACT_QUIT;
                break;
            case SDL_KEYDOWN:
                switch (ev.key.keysym.sym) {
                case SDLK_UP: act = ACT_UP; break;
                case SDLK_DOWN: act = ACT_DOWN; break;
                case SDLK_LEFT: act = ACT_LEFT; break;
                case SDLK_RIGHT: act = ACT_RIGHT; break;
                case SDLK_RETURN: case SDLK_KP_ENTER: case SDLK_SPACE: act = ACT_A; break;
                default: break;
                }
                break;
            case SDL_CONTROLLERDEVICEADDED:
                if (!pad)
                    pad = open_pad();
                break;
            case SDL_CONTROLLERBUTTONDOWN:
                switch (ev.cbutton.button) {
                case SDL_CONTROLLER_BUTTON_DPAD_UP: act = ACT_UP; break;
                case SDL_CONTROLLER_BUTTON_DPAD_DOWN: act = ACT_DOWN; break;
                case SDL_CONTROLLER_BUTTON_DPAD_LEFT: act = ACT_LEFT; break;
                case SDL_CONTROLLER_BUTTON_DPAD_RIGHT: act = ACT_RIGHT; break;
                case SDL_CONTROLLER_BUTTON_A: act = ACT_A; break;
                default: break;
                }
                break;
            case SDL_MOUSEBUTTONDOWN:
                if (ev.button.button == SDL_BUTTON_LEFT) {
                    int r = (ev.button.y - ROW_Y) / ROW_H;
                    if (ev.button.y >= ROW_Y && r >= 0 && r <= ROW_START) {
                        cur = r;
                        if (r == ROW_START)
                            act = ACT_A;
                        else if (ev.button.x >= VALUE_X - 20)
                            act = ev.button.x < VALUE_X + VALUE_W / 2 ? ACT_LEFT : ACT_RIGHT;
                    }
                }
                break;
            default:
                break;
            }
            if (act == ACT_QUIT) {
                done = 1;
                result = -1;
            } else if (act != ACT_NONE && do_action(act, &cur)) {
                done = 1;
            }
        }

        /* The stick steps like the pad's d-pad, repeating while held. */
        if (pad && !done) {
            int ly = SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTY);
            int lx = SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTX);
            int want = ly < -16000 ? ACT_UP : ly > 16000 ? ACT_DOWN
                     : lx < -16000 ? ACT_LEFT : lx > 16000 ? ACT_RIGHT : ACT_NONE;

            if (want != held) {
                held = want;
                repeat_at = now + 400;
                if (want != ACT_NONE)
                    do_action(want, &cur);
            } else if (want != ACT_NONE && now >= repeat_at) {
                repeat_at = now + 130;
                do_action(want, &cur);
            }
        }

        if (script && *script && now >= script_at && !done) {
            draw_page(&c, cur);
            script_at = now + 150;
            act = script_step(&script, &c);
            if (act == ACT_QUIT) {
                done = 1;
                result = -1;
            } else if (act != ACT_NONE && do_action(act, &cur)) {
                done = 1;
            }
        }
    }

    if (pad)
        SDL_GameControllerClose(pad);
    SDL_DestroyTexture(tex);
    if (result == 0) {
        /* The game keeps this window: it has the focus. */
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
        SDL_RenderClear(ren);
        SDL_RenderPresent(ren);
        SDL_DestroyRenderer(ren);
        xbox_WindowAdopt(win);
        conker_first_run_end();
        return 0;
    }
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    fprintf(stderr, "[CONKER] first-run page closed: nothing saved\n");
    return result;
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
