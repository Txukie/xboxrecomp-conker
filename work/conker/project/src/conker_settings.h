/*
 * Recomp Options: the settings the front end's Options page gains under
 * Vibration and Invert Aim (conker_menu.c draws them in the game's own
 * menu). Kept in a cfg file, read at launch and written on every change.
 *
 * Threads: the values change on the input filter's thread (the USB
 * model's), and are read by the guest thread for drawing. Each is a single
 * int, so a reader sees an old or a new value, never a torn one.
 */
#ifndef CONKER_SETTINGS_H
#define CONKER_SETTINGS_H

#include <stddef.h>
#include <stdint.h>

enum {
    CONKER_OPT_DISPLAY_MODE,
    CONKER_OPT_ASPECT,
    CONKER_OPT_RESOLUTION,
    CONKER_OPT_RENDER_SCALE,
    CONKER_OPT_VSYNC,
    CONKER_OPT_FPS,
    CONKER_OPT_SKIP_CUTSCENES,
    CONKER_OPT_SWING_BUTTON,
    CONKER_OPT_WEAPON,
    CONKER_OPT_UNCENSOR,
    CONKER_OPT_COUNT
};

/* main(), before the window opens: read the cfg file and apply it (window
 * mode and size, vsync, aspect, render scale, frame limit). Variables the
 * user set in the environment (CONKER_ASPECT, RECOMP_PRESENT_VSYNC,
 * RECOMP_DISPLAY_ASPECT) still win for this run. */
void conker_settings_load(void);

/* Hand the pad to the submenu while it is open (xbox_InputSetFilter). */
void conker_settings_install_input(void);

/* Swing Button (conker_swing.c): X swings the weapon in one press. */
int conker_swing_enabled(void);

/* Weapon (conker_weapon.c): 0 the bat, 1 the frying pan, as chosen; it
 * takes effect at the next start. */
int conker_weapon_choice(void);
int conker_weapon_active(void);
int conker_weapon_failed(void);

/* The pub (conker_pub.c): the save slot it starts on, 0..2 for Game 1..3,
 * kept in the cfg; its per-frame look at the front end and its use of the
 * pad, from the input filter. */
int  conker_settings_last_game(void);
void conker_settings_set_last_game(int slot);
void conker_pub_tick(uint64_t now_ms);
int  conker_pub_pad(int left, int right, int a, int b);

/* Hor+: how much wider the horizontal view is than 4:3's, or 0 at 4:3. */
float conker_settings_hor_plus(void);

/* ── For the menu (guest thread) ─────────────────────────────────────── */

/* The Options page was drawn just now; recomp_selected: its Recomp Options
 * item had the cursor. The input filter opens the submenu from A only
 * while this is fresh. */
void conker_options_page_seen(int recomp_selected);

/* The submenu is showing; the row with the cursor. */
int  conker_options_is_open(void);
int  conker_options_row(void);

/* A row's label and its current value, as plain ASCII. */
const char *conker_options_label(int row);
void conker_options_value(int row, char *buf, size_t size);

#endif /* CONKER_SETTINGS_H */
