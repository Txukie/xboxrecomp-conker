/*
 * Finding the player's copy of the game, and installing it from a disc
 * image on first launch.
 *
 * The program ships without game data. It runs from a folder holding the
 * disc's files (default.xbe and dvddata/). That folder is, in order: the
 * first argument, CONKER_GAME_DIR, the copy installed earlier
 * (<data>/game), or a folder the player picked before (remembered in
 * <data>/game-location.txt). With none of those, the setup window
 * (conker-setup, beside the executable) asks for a disc image or a folder.
 *
 * <data> is the folder that holds saves/: $XDG_DATA_HOME/conker-recomp.
 */
#ifndef CONKER_INSTALL_H
#define CONKER_INSTALL_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* The game folder for this run into out. arg is argv[1] (may be NULL): a
 * game folder, a default.xbe, a disc image or an archive -- the last two
 * are installed into <data>/game first. exe_dir ends in a separator.
 * 0 on success; -1 when there is no game (the player closed the setup, or
 * it could not be installed; the reason is on stderr). */
int conker_find_game(const char *arg, const char *data_dir, const char *exe_dir,
                     char *out, size_t n);

/* Install src into installed (a disc image or archive is unpacked there;
 * a folder or a default.xbe is used where it is). The folder to run from
 * goes to out. 0 on success, else -1 and conker_install_error() says why,
 * in words for the player. */
int conker_install(const char *src, const char *installed, char *out, size_t n);
const char *conker_install_error(void);

/* Progress while installing (from the installing thread): bytes done of
 * total, or total 0 while an archive is unpacked (no measure). */
typedef void (*conker_progress_fn)(uint64_t done, uint64_t total, void *ud);
void conker_install_set_progress(conker_progress_fn fn, void *ud);

/* From another thread: stop the install in progress ("Cancelled."). */
void conker_install_cancel(void);

/* dir/default.xbe: 0 the release this build was recompiled from (USA,
 * title 4D530051), also with a patched header; 1 a different XBE; -1 none. */
int conker_check_xbe(const char *dir);

#ifdef __cplusplus
}
#endif

#endif /* CONKER_INSTALL_H */
