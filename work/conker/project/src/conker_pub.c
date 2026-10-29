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
 * rewritten in place each time the pub comes up.
 *
 * At the top level B does nothing in the game. Here it asks "Do you want to
 * exit?" on the title showing, in the title's own lettering, with No picked;
 * left and right pick, A answers, B is No. Yes ends the process there and
 * then: nothing is left to write at the pub (the cfg is written on every
 * change, the game saves as it goes), and a full exit() would take guest
 * memory away from the GPU thread still running the frame.
 *
 * The titles are text the front end lays out from a string each frame:
 * Xbox Live, Options and Chapters are text items (vtable 0x005FBD90, the
 * string at +0x14, then x and y, the text starting at x; Xbox Live's "& Co"
 * is an item of its own), found by their strings when the question is
 * asked; Game 1..3 are save slot titles kept at 0x84B120 (the string at +8,
 * or for an empty slot at +0x2C4; centred). The question is put in their
 * place for as long as it is asked -- Options' moved up and left, as that
 * title sits low on the right and the question is wider and has two
 * lines.
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

extern ptrdiff_t g_xbox_mem_offset;
uint32_t xbox_HeapAlloc(uint32_t size, uint32_t alignment);

#define LEVEL          0x007FA1F8u
#define LEVEL_FRONTEND 0x1Du
#define LEVEL_LIVE     0x46u
#define FE_STATE       0x00776574u
#define FE_PUB         3u
#define SELECTION      0x0077625Du    /* and the two bytes after it */
#define PAGE_OPEN      0x00776220u    /* float: 0 top level, 1 a page open */
#define IDLE_TIME      0x008756A8u    /* float seconds */
#define SLOT_TITLES    0x0084B120u    /* Game 1..3 */
#define TEXT_ITEM_VT   0x005FBD90u
#define HEAP_LO        0x00800000u
#define HEAP_HI        0x04000000u
#define GAME_1         3
#define DEFAULT_MS     3000

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
 * the title was found (or reads "Online" already). */
static int rename_live(void)
{
    uint32_t a;
    int n = 0;

    for (a = HEAP_LO; a < HEAP_HI; a += 4)
        if (G32(a) == TEXT_ITEM_VT) {
            if (wstr_is(G32(a + 0x14), "Xbox Live")) {
                put_wstr(G32(a + 0x14), "Online");
                n++;
            } else if (wstr_is(G32(a + 0x14), "Online")) {
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
        s_rename_tries = 5;
    }
    s_level = G32(LEVEL);
    if (pub && s_rename_tries && now >= s_rename_at && G32(LEVEL) == LEVEL_FRONTEND) {
        s_rename_tries = rename_live() ? 0 : s_rename_tries - 1;
        s_rename_at = now + 500;
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

/* ── Do you want to exit? ─────────────────────────────────────────────── */

#define MAX_SWAPS 16
static struct { uint32_t at, was, now; } s_swap[MAX_SWAPS];
static int s_nswap;
static uint32_t s_text, s_blank;        /* guest strings */
static int s_asking, s_yes;

static int wstr_is(uint32_t w, const char *s)
{
    if (w < 0x10000u || w >= HEAP_HI)
        return 0;
    for (; *s; s++, w += 2)
        if (*(volatile uint16_t *)(g_xbox_mem_offset + w) != (uint8_t)*s)
            return 0;
    return *(volatile uint16_t *)(g_xbox_mem_offset + w) == 0;
}

static void put_wstr(uint32_t w, const char *s)
{
    for (; *s; s++, w += 2)
        *(volatile uint16_t *)(g_xbox_mem_offset + w) = (uint8_t)*s;
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

static uint32_t float_bits(float f)
{
    uint32_t u;
    memcpy(&u, &f, sizeof u);
    return u;
}

/* The text items showing NAME show TO instead, moved by DX, DY. */
static void swap_items(const char *name, uint32_t to, float dx, float dy)
{
    uint32_t a;

    for (a = HEAP_LO; a < HEAP_HI && s_nswap + 3 <= MAX_SWAPS; a += 4)
        if (G32(a) == TEXT_ITEM_VT && wstr_is(G32(a + 0x14), name)) {
            swap(a + 0x14, to);
            if (dx != 0.0f || dy != 0.0f) {
                swap(a + 0x18, float_bits(GF(a + 0x18) + dx));
                swap(a + 0x1C, float_bits(GF(a + 0x1C) + dy));
            }
        }
}

static void restore(void)
{
    while (s_nswap > 0) {
        s_nswap--;
        if (G32(s_swap[s_nswap].at) == s_swap[s_nswap].now)
            G32(s_swap[s_nswap].at) = s_swap[s_nswap].was;
    }
}

static void show_answer(void)
{
    put_wstr(s_text, s_yes ? "Do you want to exit?\n   - Yes -    No"
                           : "Do you want to exit?\n     Yes    - No -");
}

static int ask(int sel)
{
    static const char *const names[] = { "Online", "Options", "Chapters" };

    if (!s_text) {
        s_text = xbox_HeapAlloc(128, 16);
        s_blank = xbox_HeapAlloc(16, 16);
        if (!s_text || !s_blank)
            return 0;
        put_wstr(s_blank, "");
    }
    s_yes = 0;
    show_answer();
    s_nswap = 0;
    if (sel < GAME_1) {
        swap_items(names[sel], s_text, sel == 1 ? -200.0f : 0.0f, sel == 1 ? 110.0f : 0.0f);
        if (sel == 0)
            swap_items("& Co", s_blank, 0.0f, 0.0f);
    } else if (sel <= GAME_1 + 2) {
        uint32_t title = G32(SLOT_TITLES + 4u * (uint32_t)(sel - GAME_1));
        if (title && G32(title + 8))
            swap(title + 8, s_text);
        else if (title && G32(title + 0x2C4))
            swap(title + 0x2C4, s_text);
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
        show_answer();
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
