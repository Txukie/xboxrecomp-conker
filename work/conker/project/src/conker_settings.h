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

enum {
    CONKER_OPT_DISPLAY_MODE,
    CONKER_OPT_ASPECT,
    CONKER_OPT_RESOLUTION,
    CONKER_OPT_RENDER_SCALE,
    CONKER_OPT_VSYNC,
    CONKER_OPT_FPS,
    CONKER_OPT_SKIP_CUTSCENES,
    CONKER_OPT_SWING_BUTTON,
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
