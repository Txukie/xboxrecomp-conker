/*
 * Recomp Options in the front end's Options page, drawn by the game's own
 * menu code.
 *
 * The front end's menus are a scene built from node names (sub_0024B8F0):
 * "UI_W<window>_<type>_<key>" makes a widget of that type in that window,
 * labelled with the key's text from aid/text/<language>/UIPause. The
 * Options page is window L, and its scene holds three menu items ("Men",
 * vtable 0x005FBCC8): VIBRATION and INVERT_AIM (type O, No\Yes) and
 * PLAY_JADE_EMPIRE_DEMO (type N), which is only built when the Jade Empire
 * demo is on the disc (sub_002A3890, cached at 0x008758AF/B0). Saying the
 * demo is there makes the third item, and it becomes Recomp Options.
 *
 * A menu item object:
 *   +0x08 key (inside the node name)    +0x10 the page's style (fonts,
 *   +0x14 label, UTF-16                       colours, highlight offset)
 *   +0x18 position x, y, z              +0x24 text scale
 *   +0x38 1.0 while the menu's cursor is on it (the menu sets it each
 *         frame, the draw puts it back to -1.0)
 *   +0x3C highlight, 0..1 (eases toward the cursor)
 *   +0x40 value (type O), +0x41 type 'O' / 'N', +0x44 the variable
 *   +0x58 / +0x5C type O's "Yes" / "No"
 * and its draw (vtable +0x0C, sub_00249620, thiscall with two arguments,
 * ret 8) lays out and draws its label -- and type O's No\Yes -- through
 * sub_00248C10 in the page's font and style.
 *
 * Here the draw entry of that vtable points at conker_menu_draw (a spare
 * code address the dispatcher hands to recomp_lookup_manual). It draws the
 * Recomp Options item with its label swapped for ours, and while the
 * submenu is open (conker_settings.c has the pad then) draws the submenu
 * rows in place of the page's three items: each row is a copy of the
 * Vibration item, on the guest stack, given our label or value and
 * drawn by the game's own draw. The game's menu never learns the rows exist.
 */
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include "conker_settings.h"

#if defined(_WIN32)
#include <windows.h>
static uint64_t menu_now_ms(void) { return GetTickCount64(); }
#else
#include <time.h>
static uint64_t menu_now_ms(void)
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000u + (uint64_t)ts.tv_nsec / 1000000u;
}
#endif

#define MEN_VTABLE       0x005FBCC8u
#define MEN_DRAW         0x00249620u
/* int3 padding after the menu item constructor (0x002495B9 ret 0x28): never
 * executed, inside the code range, so an indirect call there reaches
 * recomp_lookup_manual. */
#define MENU_DRAW_VA     0x002495BCu
#define DEMO_PRESENT     0x008758AFu
#define DEMO_CHECKED     0x008758B0u

void sub_00249620(void);

enum { ITEM_OTHER, ITEM_VIBRATION, ITEM_INVERT_AIM, ITEM_RECOMP };

/* The guest string at va equals s (ASCII). */
static int guest_streq(uint32_t va, const char *s)
{
    size_t i;
    for (i = 0; s[i]; i++)
        if (MEM8(va + i) != (uint8_t)s[i])
            return 0;
    return MEM8(va + i) == 0;
}

/* Which of the Options page's items this is: the key after "UI_WL_Men_?_". */
static int classify(uint32_t item)
{
    uint32_t key = MEM32(item + 8);

    if (key < 0x10000u + 12 || key >= 0x08000000u)
        return ITEM_OTHER;
    if (MEM8(key - 12) != 'U' || MEM8(key - 11) != 'I' || MEM8(key - 10) != '_'
            || MEM8(key - 9) != 'W' || MEM8(key - 8) != 'L')
        return ITEM_OTHER;
    if (guest_streq(key, "VIBRATION"))
        return ITEM_VIBRATION;
    if (guest_streq(key, "INVERT_AIM"))
        return ITEM_INVERT_AIM;
    if (guest_streq(key, "PLAY_JADE_EMPIRE_DEMO"))
        return ITEM_RECOMP;
    return ITEM_OTHER;
}

/* A UTF-16 copy of s on the guest stack (below g_esp, which moves down
 * past it). The caller puts g_esp back. */
static uint32_t guest_wstr(const char *s)
{
    size_t n = strlen(s) + 1, i;
    g_esp -= (uint32_t)((n * 2 + 15) & ~(size_t)15);
    for (i = 0; i < n; i++)
        MEM16(g_esp + 2 * i) = (uint8_t)s[i];
    return g_esp;
}

/* The game's draw of item, with the two arguments it was called with. */
static void draw_item(uint32_t item, uint32_t a1, uint32_t a2)
{
    PUSH32(g_esp, a2);
    PUSH32(g_esp, a1);
    PUSH32(g_esp, MENU_DRAW_VA);       /* return address: ret 8 pops all three */
    g_ecx = item;
    sub_00249620();
}

/* ── The submenu's rows ─────────────────────────────────────────────────
 * Laid out from the Vibration item: the page's units are its 3D space
 * (y up; Vibration and Invert Aim sit 121 apart at scale 48). The draw
 * starts a text len * scale / 16 left of x, which ROW_X undoes so each
 * column has one left edge. */
#define ROW_TOP      118.0f     /* above Vibration */
#define ROW_STEP      62.0f
#define ROW_SCALE     25.0f
#define LABEL_DX     -40.0f     /* from Vibration's x */
#define VALUE_DX     400.0f

static float s_hl[CONKER_OPT_COUNT];
static uint64_t s_hl_ms;

static float row_x(float x, const char *text, float scale)
{
    return x + (float)strlen(text) * scale / 16.0f;
}

static void draw_rows(uint32_t base, uint32_t a1, uint32_t a2)
{
    const uint32_t mark = g_esp;
    const float x0 = MEMF(base + 0x18), y0 = MEMF(base + 0x1C);
    const int row = conker_options_row();
    uint64_t now = menu_now_ms();
    float step = s_hl_ms ? (float)(now - s_hl_ms) / 150.0f : 1.0f;
    uint32_t fake, i;

    s_hl_ms = now;
    if (step > 1.0f)
        step = 1.0f;
    g_esp -= 0x80;
    fake = g_esp;
    for (i = 0; i < 0x70; i += 4)
        MEM32(fake + i) = MEM32(base + i);
    MEM8(fake + 0x40) = 0;
    MEM8(fake + 0x41) = 'N';
    MEM32(fake + 0x44) = 0;
    MEM8(fake + 0x54) = 0;
    MEMF(fake + 0x24) = ROW_SCALE;

    for (i = 0; i < CONKER_OPT_COUNT; i++) {
        const uint32_t inner = g_esp;
        const char *label = conker_options_label((int)i);
        char value[64];
        float target = (int)i == row ? 1.0f : 0.0f, d = target - s_hl[i];

        s_hl[i] += d > step ? step : d < -step ? -step : d;
        conker_options_value((int)i, value, sizeof value);

        MEMF(fake + 0x1C) = y0 + ROW_TOP - ROW_STEP * (float)i;
        MEMF(fake + 0x3C) = s_hl[i];

        MEM32(fake + 0x14) = guest_wstr(label);
        MEMF(fake + 0x18) = row_x(x0 + LABEL_DX, label, ROW_SCALE);
        draw_item(fake, a1, a2);

        MEM32(fake + 0x14) = guest_wstr(value);
        MEMF(fake + 0x18) = row_x(x0 + VALUE_DX, value, ROW_SCALE);
        draw_item(fake, a1, a2);
        g_esp = inner;
    }
    g_esp = mark;
}

/* The menu item draw, in place of sub_00249620 for every menu item in the
 * game: thiscall (ecx = item), two arguments, ret 8. */
static void conker_menu_draw(void)
{
    const uint32_t ret_sp = g_esp;
    const uint32_t item = g_ecx;
    const uint32_t a1 = MEM32(ret_sp + 4), a2 = MEM32(ret_sp + 8);
    const int which = classify(item);

    if (which == ITEM_RECOMP)
        conker_options_page_seen(MEMF(item + 0x38) > 0.0f);

    if (which == ITEM_OTHER || (!conker_options_is_open() && which != ITEM_RECOMP)) {
        draw_item(item, a1, a2);
    } else if (!conker_options_is_open()) {
        /* Recomp Options: the item's label is the demo's; ours for the draw. */
        const uint32_t label = MEM32(item + 0x14);
        MEM32(item + 0x14) = guest_wstr("Recomp Options");
        draw_item(item, a1, a2);
        MEM32(item + 0x14) = label;
    } else if (which == ITEM_VIBRATION) {
        draw_rows(item, a1, a2);
    }
    /* Invert Aim and Recomp Options: hidden under the submenu. */

    g_esp = ret_sp + 12;               /* ret 8 */
}

recomp_func_t conker_menu_lookup(uint32_t xbox_va)
{
    return xbox_va == MENU_DRAW_VA ? conker_menu_draw : NULL;
}

/* After the XBE is mapped: the menu items' draw goes through us. */
void conker_menu_install(void)
{
    if (MEM32(MEN_VTABLE + 0x0C) == MEN_DRAW)
        MEM32(MEN_VTABLE + 0x0C) = MENU_DRAW_VA;
    else
        fprintf(stderr, "[CONKER] menu item vtable is not the expected one; "
                        "no Recomp Options\n");
}

/* Called often from early on (D3D's fence wait): keep reporting the demo as
 * present, so the Options page builds its third item. Only the Options
 * page's builder asks (0x0024C940). */
void conker_menu_keep_demo_item(void)
{
    MEM8(DEMO_PRESENT) = 1;
    MEM8(DEMO_CHECKED) = 1;
}
