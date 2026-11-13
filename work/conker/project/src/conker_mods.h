/*
 * Mods: folders of replacement game files, laid over the game directory
 * without touching it.
 *
 * Each folder in <data>/mods/ is one mod, shaped like the game's own folder
 * (a file at <data>/mods/<mod>/dvddata/aid/... replaces the game's
 * dvddata/aid/...). A mod is active unless its folder holds a file named
 * .disabled, so turning it off keeps it. Active mods are handed to the
 * kernel's path translation (xbox_path_set_overlays), in name order.
 *
 * The game caches some of its files on the Z: partition (<saves>/Cache);
 * when the set of active mods changes, that cache is emptied at the next
 * launch so nothing stale is read back from it.
 *
 * One mod is known by name: the decensor patch ("Uncensor" in Recomp
 * Options, https://gamebanana.com/mods/697391), which the game can download,
 * update, and turn on or off. Changes take effect at the next launch.
 */
#ifndef CONKER_MODS_H
#define CONKER_MODS_H

#include <stddef.h>

/* main(), before the game starts: find the mods, empty the cache if the
 * active set changed since the last run, and lay the active mods over the
 * game directory. */
void conker_mods_init(const char *data_dir, const char *save_dir);

/* The folders alone, for the launcher before conker_mods_init (which sets
 * them too). */
void conker_mods_set_dirs(const char *data_dir, const char *save_dir);

/* The launcher's Mods tab: the mods besides Uncensor, in name order, with
 * whether each is on; and turning one on or off (its .disabled file). */
int  conker_mods_list(char names[][64], int *on, int max);
void conker_mods_set_on(const char *name, int on);

/* While the launcher shows (1), a change is this start's: no "Restart to
 * apply". */
void conker_mods_prelaunch(int on);

/* The Uncensor option. */
enum {
    CONKER_UNCENSOR_DISABLE,
    CONKER_UNCENSOR_ENABLE,
    CONKER_UNCENSOR_UPDATE,
    CONKER_UNCENSOR_CHOICES
};

/* The choice to show: Enable when the mod is installed and active, else
 * Disable. */
int conker_mods_uncensor_choice(void);

/* Carry out a choice: Enable (download it first if it is not installed),
 * Disable (keep it, inactive), Update (fetch a newer release if there is
 * one). Downloads run in the background. */
void conker_mods_uncensor_apply(int choice);

/* A short line for the menu about what happened last ("Downloading 45%",
 * "Restart to apply", "Up to date", an error), or "" for nothing. */
void conker_mods_uncensor_status(char *buf, size_t size);

/* Forget the last status (the player picked another choice); not while a
 * download runs. */
void conker_mods_uncensor_clear_status(void);

#endif /* CONKER_MODS_H */
