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
    CONKER_OPT_LANGUAGE,
    CONKER_OPT_DISPLAY_MODE,
    CONKER_OPT_ASPECT,
    CONKER_OPT_RESOLUTION,
    CONKER_OPT_RENDER_SCALE,
    CONKER_OPT_UPSCALING,
    CONKER_OPT_MSAA,
    CONKER_OPT_SMAA,
    CONKER_OPT_ANISO,
    CONKER_OPT_TEX_DETAIL,
    CONKER_OPT_MODEL_DETAIL,
    CONKER_OPT_VSYNC,
    CONKER_OPT_FPS,
    CONKER_OPT_SKIP_CUTSCENES,
    CONKER_OPT_SWING_BUTTON,
    CONKER_OPT_WEAPON,
    CONKER_OPT_INTRO_FIX,
    CONKER_OPT_UNCENSOR,
    CONKER_OPT_COUNT
};

/* The languages the disc has text for, in the order the row offers them. */
enum {
    CONKER_LANG_ENGLISH,
    CONKER_LANG_SPANISH,
    CONKER_LANG_FRENCH,
    CONKER_LANG_GERMAN,
    CONKER_LANG_ITALIAN,
    CONKER_LANG_JAPANESE,
    CONKER_LANG_COUNT
};

/* conker_lang.c: the language of this launch, the given English text in it,
 * and the next character of a UTF-8 string (these strings' encoding). */
void conker_lang_set(int language);
const char *conker_tr(const char *en);
int conker_utf8_next(const char **s);

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

/* Intro Fix (conker_intro.c): the glass of milk, as chosen; it takes effect
 * at the next start. */
int conker_intro_choice(void);
int conker_intro_active(void);
int conker_intro_failed(void);

/* The pub (conker_pub.c): the save slot it starts on, 0..2 for Game 1..3,
 * kept in the cfg; its per-frame look at the front end and its use of the
 * pad, from the input filter. */
int  conker_settings_last_game(void);
int  conker_settings_fps_limit(void);
/* Model Detail (recomp_manual.c, sub_0007F1E0_enter): how much farther than
 * the game's own distances characters keep their detailed models. */
float conker_settings_lod_scale(void);
void conker_settings_set_last_game(int slot);
void conker_pub_tick(uint64_t now_ms);
int  conker_pub_pad(int left, int right, int a, int b);
int  conker_pub_intro_skip(int a, uint64_t now_ms);

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

/* A row's label and its current value, in UTF-8. */
const char *conker_options_label(int row);
void conker_options_value(int row, char *buf, size_t size);

/* ── The launcher (conker_firstrun.c) ────────────────────────────────── */

/* There was no cfg file when conker_settings_load looked. */
int conker_settings_no_cfg(void);

/* While the launcher shows, nothing is saved: it starts from the cfg, or
 * the first time from defaults fitted to the display (language -1: leave
 * it), steps the rows' values, and its end makes them this run's and writes
 * the cfg. Quitting it keeps the cfg as it was. */
void conker_first_run_begin(int desk_w, int desk_h, const int (*modes)[2], int nmodes, int language);
/* The display the launcher is on now (it moved), its size and modes. */
void conker_first_run_display(int desk_w, int desk_h, const int (*modes)[2], int nmodes);
/* The window's mode and size as chosen; the resolution list again for the
 * display, and the window request made again. */
void conker_first_run_window(int *mode, int *w, int *h);
void conker_first_run_refit(void);
int  conker_first_run_language(void);
void conker_first_run_step(int row, int dir);
void conker_first_run_activate(int row);
void conker_first_run_end(void);
void conker_first_run_apply_mods(void);

/* The launcher's options that the in-game menu does not have, kept in the
 * cfg: the display (SDL's index, -1 the main one), the audio device (SDL's
 * name, "" the default), the volume in percent, and for players 1 and 2 the
 * controller ("" auto, "none", or xbox_InputDeviceSpec's spec, with its name
 * as last seen) and its buttons (input_map.h InputSource per Xbox control). */
int  conker_settings_display(void);
void conker_settings_set_display(int index);
const char *conker_settings_audio_device(void);
void conker_settings_set_audio_device(const char *name);
int  conker_settings_volume(void);
void conker_settings_set_volume(int pct);
const char *conker_settings_pad(int player, const char **name);
void conker_settings_set_pad(int player, const char *spec, const char *name);
void conker_settings_pad_map(int player, unsigned char source[16]);
void conker_settings_set_pad_map(int player, const unsigned char source[16]);

/* conker_firstrun.c: the launcher, from main() at every start before the
 * game's window opens: 0 to carry on, -1 when the player quit. */
int conker_firstrun_show(const char *data_dir);
/* conker_firstrun.c: from the guest thread at boot, shows the build of the
 * pipelines until it is done. */
void conker_firstrun_wait_for_pipelines(void);

#endif /* CONKER_SETTINGS_H */
