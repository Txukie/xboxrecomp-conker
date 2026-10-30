/*
 * Host-OS services for the Conker executable.
 *
 * main.c and recomp_manual.c stay OS-neutral; everything that needs Win32
 * (vectored exception handler, dbghelp, known folders) or POSIX (sigaction,
 * dladdr/backtrace, XDG/Application Support paths) lives behind this
 * interface in host_win32.c / host_posix.c.
 */

#ifndef CONKER_HOST_H
#define CONKER_HOST_H

#include <stddef.h>
#include <stdint.h>

/* Install the crash handler. Faults on trapped device registers (APU,
 * AC'97, USB) are handed to the toolkit first and resumed; anything else is
 * reported with the guest context and left to crash. */
void conker_host_install_fault_handler(void);

/* Print the native call stack as "<tag> name+off ..." (symbols when known). */
void conker_host_print_native_stack(const char *tag, int max_frames);

/* Write the per-user save directory into buf. Win32 creates it here; on
 * POSIX xbox_path_init() creates whatever save directory it is given. */
void conker_host_default_save_dir(char *buf, size_t size);

/* Write the path of the settings file (Recomp Options) into buf, creating
 * its directory: $XDG_CONFIG_HOME/conker-recomp/settings.cfg (or
 * ~/.config/...), ~/Library/Application Support/ConkerRecomp on macOS,
 * %LOCALAPPDATA%\ConkerRecomp on Windows. Empty on failure. */
void conker_host_config_path(char *buf, size_t size);

/* The folder holding the executable, ending in a separator (empty when it
 * cannot be found). */
void conker_host_exe_dir(char *buf, size_t size);

/* Windows, where the game is a GUI program: with no console or redirect to
 * write to, stdout and stderr go to %LOCALAPPDATA%\ConkerRecomp\conker.log
 * (the previous run's kept as conker.old.log). Nothing on POSIX. */
void conker_host_open_log(void);

/* Set an environment variable unless the user already set it. */
void conker_host_setenv_default(const char *name, const char *value);

/* Shared by both hosts (main.c): guest registers and guest call chain. */
void conker_dump_xbox_state(void);

#endif /* CONKER_HOST_H */
