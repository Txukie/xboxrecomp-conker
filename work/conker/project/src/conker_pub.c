/*
 * The pub, the front end's top level: which title it starts on, its first
 * title's name, and B to leave the game.
 *
 * The pub turns between six titles: 0 Xbox Live & Co, 1 Options,
 * 2 Chapters, 3..5 Game 1..3. The one showing is the byte at 0x77625D (with
 * copies at 0x77625E and 0x77625F); writing all three turns the pub there at
 * once. The front end's start (sub_001FBEA0) puts it on Xbox Live. Instead,
 * each time the pub comes up -- after the title screen, a demo or a game --
 * it is put on the save slot last played, Game 1 at first (last_game in the
 * cfg, conker_settings.c). A slot counts as played when a level is left for
 * from inside its page.
 *
 * "Xbox Live & Co" reads "Online & Co": the string of its first line is
 * rewritten in place each time the pub comes up, as soon as the title exists
 * (it can take several seconds after the pub does).
 *
 * At the top level B does nothing in the game. Here it asks "Do you want to
 * exit?", with No picked; left and right pick, A answers, B is No. Yes ends the process there and
 * then: nothing is left to write at the pub (the cfg is written on every
 * change, the game saves as it goes), and a full exit() would take guest
 * memory away from the GPU thread still running the frame.
 *
 * The titles are text the front end lays out from a string each frame:
 * Xbox Live, Options and Chapters are text items (vtable 0x005FBD90, the
 * string at +0x14, then x and y, the text starting at x; Xbox Live's "& Co"
 * is an item of its own), found by their strings when the question is
 * asked; Game 1..3 are save slot titles kept at 0x84B120 (the string at +8,
 * or for an empty slot at +0x2C4). They are blanked for as long as the
 * question is asked, and the question is drawn over the picture, in the
 * middle (conker_pub_overlay). It used to be put in the title's place, in
 * the title's lettering: but each title has its own place in the pub's
 * picture, as 3D text, so the question was cut off at the screen's edge on
 * some, and moved to the middle it went behind whoever stood there.
 *
 * What the pub is doing: the level (0x7FA1F8) is the front end's, 0x1D, or
 * 0x46 while Xbox Live's pages show; the front end's state (0x776574) is 3
 * in the pub, 0x10 once the demo starts; 0x776220 goes from 0 at the top
 * level to 1 with a title's page open. The idle time (0x8756A8) that starts
 * the demo is held at 0 while the question is up.
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "conker_settings.h"
#include "video_player.h"

extern ptrdiff_t g_xbox_mem_offset;
uint32_t xbox_HeapAlloc(uint32_t size, uint32_t alignment);

#define LEVEL          0x007FA1F8u
#define LEVEL_FRONTEND 0x1Du
#define LEVEL_LIVE     0x46u
#define FE_STATE       0x00776574u
#define FE_PUB         3u
#define SELECTION      0x0077625Du    /* and the two bytes after it */
#define PAGE_OPEN      0x00776220u    /* float: 0 top level, 1 a page open */
#define SLOT_TITLES    0x0084B120u    /* Game 1..3 */
#define IDLE_TIME      0x008756A8u    /* float seconds */
#define TEXT_ITEM_VT   0x005FBD90u
#define HEAP_LO        0x00800000u
#define HEAP_HI        0x04000000u
#define GAME_1         3
#define DEFAULT_MS     3000
#define RENAME_TRIES   30             /* a look a second */

#define G8(a)  (*(volatile uint8_t *)(g_xbox_mem_offset + (a)))
#define G32(a) (*(volatile uint32_t *)(g_xbox_mem_offset + (a)))
#define GF(a)  (*(volatile float *)(g_xbox_mem_offset + (a)))

/* ── Where the pub is ─────────────────────────────────────────────────── */

static int s_in_pub;                    /* last tick */
static uint32_t s_level;                /* last tick */
static int s_played = -1;               /* slot whose page is open, or -1 */
static uint64_t s_default_until;        /* putting it on the slot, until */
static uint64_t s_rename_at;            /* look for Xbox Live's title then */
static int s_rename_tries;
static int s_asking, s_yes;

static int in_pub(void)
{
    uint32_t level = G32(LEVEL);
    return (level == LEVEL_FRONTEND || level == LEVEL_LIVE) && G32(FE_STATE) == FE_PUB;
}

static void select_title(int which)
{
    G8(SELECTION) = (uint8_t)which;
    G8(SELECTION + 1) = (uint8_t)which;
    G8(SELECTION + 2) = (uint8_t)which;
}

static int wstr_is(uint32_t w, const char *s);
static void put_wstr(uint32_t w, const char *s);

/* Xbox Live's title, as text items: its string becomes "Online". Whether
 * that was done now: an "Online" already there can be the last pub's, in
 * memory since freed. */
static int rename_live(void)
{
    uint32_t a;
    int n = 0;

    for (a = HEAP_LO; a < HEAP_HI; a += 4)
        if (G32(a) == TEXT_ITEM_VT) {
            if (wstr_is(G32(a + 0x14), "Xbox Live")) {
                put_wstr(G32(a + 0x14), conker_tr("Online"));
                n++;
            }
        }
    return n;
}

/* Once per frame, from the input filter (NOW in milliseconds). */
void conker_pub_tick(uint64_t now)
{
    int pub, sel;

    if (!g_xbox_mem_offset)
        return;
    pub = in_pub();
    sel = G8(SELECTION);
    if (pub && !s_in_pub && G32(LEVEL) == LEVEL_FRONTEND)
        s_default_until = now + DEFAULT_MS;
    if (pub && (!s_in_pub || G32(LEVEL) != s_level)) {
        s_rename_at = now;
        s_rename_tries = RENAME_TRIES;
    }
    s_level = G32(LEVEL);
    if (pub && s_rename_tries && now >= s_rename_at && G32(LEVEL) == LEVEL_FRONTEND) {
        if (rename_live()) {
            fprintf(stderr, "[PUB] Xbox Live reads %s\n", conker_tr("Online"));
            s_rename_tries = 0;
        } else {
            s_rename_tries--;
        }
        s_rename_at = now + 1000;
    }
    if (!pub && s_in_pub && s_played >= 0 && G32(FE_STATE) != 0x10u)
        conker_settings_set_last_game(s_played);
    s_in_pub = pub;
    if (!pub) {
        s_default_until = 0;
        return;
    }

    /* The front end's start may run after the pub shows: keep putting it
     * on the slot while it reads Xbox Live, until it has stayed or the
     * player turned it. */
    if (s_default_until) {
        int want = GAME_1 + conker_settings_last_game();
        if (now > s_default_until || (sel != 0 && sel != want)) {
            s_default_until = 0;
        } else if (sel == 0) {
            select_title(want);
            fprintf(stderr, "[PUB] on Game %d\n", want - GAME_1 + 1);
        }
    }
    s_played = GF(PAGE_OPEN) > 0.5f && sel >= GAME_1 && sel <= GAME_1 + 2 ? sel - GAME_1 : -1;
}

/* ── The intro on the first boot ──────────────────────────────────────── */

/* The first boot fills Z:, the game's cache, behind the intro video (15 to
 * 25 s). Until that is done the game does not look at the pad, so A does
 * nothing and the game seems not to have the focus. Once A has been pressed
 * it is pressed again and again until the pub shows, which ends the video as
 * soon as the game can. Any other boot ends it on the first press. The video
 * lasts 65 s, so that bounds it should the pub never come. */
#define INTRO_SKIP_MS  70000
#define INTRO_PULSE_MS 100

/* From the input filter, A just pressed or not. -1: the game gets the pad;
 * else A as the game should see it, 0 up or 1 down. */
int conker_pub_intro_skip(int a, uint64_t now)
{
    static int s_pub_seen;
    static uint64_t s_since;

    if (s_pub_seen || !g_xbox_mem_offset)
        return -1;
    if (in_pub()) {
        s_pub_seen = 1;
        return s_since ? 0 : -1;
    }
    if (!s_since) {
        if (!a)
            return -1;
        s_since = now;
        fprintf(stderr, "[PUB] A held on to until the intro can end\n");
    }
    if (now - s_since > INTRO_SKIP_MS) {
        s_pub_seen = 1;
        return 0;
    }
    return (now - s_since) / INTRO_PULSE_MS % 2 == 0;
}

/* ── Do you want to exit? ─────────────────────────────────────────────── */

#define MAX_SWAPS 16
static struct { uint32_t at, was, now; } s_swap[MAX_SWAPS];
static int s_nswap;
static uint32_t s_blank;                /* guest string */

static int wstr_is(uint32_t w, const char *s)
{
    if (w < 0x10000u || w >= HEAP_HI)
        return 0;
    for (; *s; w += 2)
        if (*(volatile uint16_t *)(g_xbox_mem_offset + w) != (uint16_t)conker_utf8_next(&s))
            return 0;
    return *(volatile uint16_t *)(g_xbox_mem_offset + w) == 0;
}

static void put_wstr(uint32_t w, const char *s)
{
    for (; *s; w += 2)
        *(volatile uint16_t *)(g_xbox_mem_offset + w) = (uint16_t)conker_utf8_next(&s);
    *(volatile uint16_t *)(g_xbox_mem_offset + w) = 0;
}

static void swap(uint32_t at, uint32_t to)
{
    if (s_nswap == MAX_SWAPS)
        return;
    s_swap[s_nswap].at = at;
    s_swap[s_nswap].was = G32(at);
    s_swap[s_nswap].now = to;
    G32(at) = to;
    s_nswap++;
}

/* The text items showing NAME show TO instead. */
static void swap_items(const char *name, uint32_t to)
{
    uint32_t a;

    for (a = HEAP_LO; a < HEAP_HI && s_nswap < MAX_SWAPS; a += 4)
        if (G32(a) == TEXT_ITEM_VT && wstr_is(G32(a + 0x14), name))
            swap(a + 0x14, to);
}

static void restore(void)
{
    while (s_nswap > 0) {
        s_nswap--;
        if (G32(s_swap[s_nswap].at) == s_swap[s_nswap].now)
            G32(s_swap[s_nswap].at) = s_swap[s_nswap].was;
    }
}

static int ask(int sel)
{
    const char *const names[] = { conker_tr("Online"), conker_tr("Options"), conker_tr("Chapters") };

    if (!s_blank) {
        s_blank = xbox_HeapAlloc(16, 16);
        if (!s_blank)
            return 0;
        put_wstr(s_blank, "");
    }
    s_yes = 0;
    s_nswap = 0;
    if (sel < GAME_1) {
        swap_items(names[sel], s_blank);
        if (sel == 0)
            swap_items(conker_tr("& Co"), s_blank);
    } else if (sel <= GAME_1 + 2) {
        uint32_t title = G32(SLOT_TITLES + 4u * (uint32_t)(sel - GAME_1));
        if (title && G32(title + 0x2C4))   /* what its title shows (recomp_manual.c) */
            swap(title + 0x2C4, s_blank);
    }
    if (!s_nswap) {
        fprintf(stderr, "[PUB] no title to ask on (%d)\n", sel);
        return 0;
    }
    fprintf(stderr, "[PUB] Do you want to exit?\n");
    return 1;
}

/* From the input filter with the buttons just pressed, unless Recomp
 * Options has the pad. 0: the game gets the pad; 1: the question has it;
 * 2: the question has just gone, and the button that ended it is the
 * game's only once it is let go. */
int conker_pub_pad(int left, int right, int a, int b)
{
    if (!g_xbox_mem_offset)
        return 0;
    if (!s_asking) {
        if (!b || !in_pub() || G32(LEVEL) != LEVEL_FRONTEND || GF(PAGE_OPEN) != 0.0f)
            return 0;
        if (!ask(G8(SELECTION)))
            return 0;
        s_asking = 1;
        return 1;
    }
    if (!in_pub() || GF(PAGE_OPEN) != 0.0f) {
        restore();
        s_asking = 0;
        return 2;
    }
    GF(IDLE_TIME) = 0.0f;
    if (left || right) {
        s_yes = !s_yes;
    } else if (b || (a && !s_yes)) {
        restore();
        s_asking = 0;
        fprintf(stderr, "[PUB] staying\n");
        return 2;
    } else if (a) {
        fprintf(stderr, "[PUB] exiting\n");
        fflush(stdout);
        fflush(stderr);
        _Exit(0);
    }
    return 1;
}

/* ── The question, over the picture ───────────────────────────────────── */

/* The launcher's letters (conker_firstrun.c): 5x8, a byte a column. */
const uint8_t *conker_font_glyph(int ch);
int conker_font_next(const char **s);

static int letters(const char *s)
{
    int n = 0;

    while (conker_font_next(&s))
        n++;
    return n;
}

static void put_text(uint32_t *px, int tw, int x, int y, const char *s, uint32_t color)
{
    int ch, col, row;

    for (; (ch = conker_font_next(&s)) != 0; x += 6) {
        const uint8_t *g = conker_font_glyph(ch);
        for (col = 0; col < 5; col++)
            for (row = 0; row < 8; row++)
                if (g[col] >> row & 1)
                    px[(y + row) * tw + x + col] = color;
    }
}

/* The window's layer while the question is up: the question and the two
 * answers on a dark band, the picked one bright, in the middle of the
 * frame's rectangle (x, y, w, h), about a fifteenth of its height a line.
 * On the thread that shows the frames; s_asking and s_yes change on the
 * pad's. */
int conker_pub_overlay(int x, int y, int w, int h, XboxOverlay *ov)
{
    enum { PAD = 6, GAP = 8, LINE = 8 };
    static uint32_t px[64 * 6 * 40];
    const uint32_t band = 0xC0100C08u, bright = 0xFFFFE6A0u, dim = 0xFF8C7A58u, edge = 0xFF6E5A3Cu;
    const char *q, *yes, *no;
    int nq, ny, nn, tw, th, i, scale, ax;

    if (!s_asking)
        return 0;
    q = conker_tr("Do you want to exit?");
    yes = conker_tr("Yes");
    no = conker_tr("No");
    nq = letters(q);
    ny = letters(yes);
    nn = letters(no);
    if (nq > 60)
        nq = 60;
    tw = (nq > ny + nn + 12 ? nq : ny + nn + 12) * 6 + 2 * PAD;
    th = 2 * LINE + GAP + 2 * PAD;
    if (tw * th > (int)(sizeof px / sizeof px[0]))
        return 0;
    for (i = 0; i < tw * th; i++)
        px[i] = band;
    for (i = 0; i < tw; i++)
        px[i] = px[(th - 1) * tw + i] = edge;
    for (i = 0; i < th; i++)
        px[i * tw] = px[i * tw + tw - 1] = edge;
    put_text(px, tw, (tw - letters(q) * 6) / 2, PAD, q, bright);
    /* "- Yes -    No", the picked one bright between dashes */
    ax = (tw - (ny + nn + 12) * 6) / 2;
    if (s_yes) {
        put_text(px, tw, ax, PAD + LINE + GAP, "-", bright);
        put_text(px, tw, ax + (ny + 3) * 6, PAD + LINE + GAP, "-", bright);
    } else {
        put_text(px, tw, ax + (ny + 8) * 6, PAD + LINE + GAP, "-", bright);
        put_text(px, tw, ax + (ny + nn + 11) * 6, PAD + LINE + GAP, "-", bright);
    }
    put_text(px, tw, ax + 2 * 6, PAD + LINE + GAP, yes, s_yes ? bright : dim);
    put_text(px, tw, ax + (ny + 10) * 6, PAD + LINE + GAP, no, s_yes ? dim : bright);
    scale = h / (th * 6);
    if (scale < 1)
        scale = 1;
    while (scale > 1 && tw * scale > w * 9 / 10)
        scale--;
    ov->px = px;
    ov->w = tw;
    ov->h = th;
    ov->x = x + (w - tw * scale) / 2;
    ov->y = y + (h - th * scale) / 2;
    ov->scale = scale;
    return 1;
}
