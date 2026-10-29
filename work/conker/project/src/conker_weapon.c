/*
 * Weapon (Recomp Options): Conker's bat, or the frying pan he had on the
 * Nintendo 64.
 *
 * The remake has the pan only in the training level ("Pan Handled"): its
 * model, aid\bfdmodel\attach\FryingPanBound, is inside that level's package
 * and nowhere else. Conker's body animations for the pan are the bat's, so
 * the pan needs no animations of its own.
 *
 * With the pan chosen, the first start unpacks the training level's package
 * from the player's copy of the game and writes the pan's model, with the
 * scene graph, texture and string table it points at, as a loose file
 * (conker_caff.c) under <data>/generated/pan, which is laid over the game
 * like a mod. Nothing of the game's is shipped. Then the bat's entry in the
 * held-object name table (0x006A6108, indexed by object id: 0x280 the bat,
 * 0x281 the pan) is pointed at the pan's name, and every level loads the
 * pan where it loaded the bat, from that file.
 *
 * It also sounds like the pan. A hit (sub_00137060) plays fryingpan_impact
 * (sound 0xDC4) for the training level's pan, weapon class 0x47, and
 * baseballbat_impact (0xC98) for anything else; the swipe and the rest are
 * the bat's in both. The sound table (0x0065E060, 0x30 bytes a sound,
 * indexed by sound: bank, name, the bank's wave, ...) has both waves in the
 * same bank, so the bat's impact is pointed at the pan's wave.
 *
 * Both happen at start, before the game runs: the unpacking needs guest
 * RAM the game uses once it is up, and a level loaded with the name
 * changed but no file to load hangs. A change in the menu applies at the
 * next start.
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include "conker_settings.h"

extern ptrdiff_t g_xbox_mem_offset;
uint8_t *conker_caff_unpack_mem(const char *in, size_t *size);
int conker_caff_extract(const uint8_t *pkg, size_t size, const char *name, const char *out);

#define NAME_TABLE_BAT   0x006A6B08u     /* 0x006A6108 + 0x280 * 4 */
#define NAME_TABLE_PAN   0x006A6B0Cu     /* 0x006A6108 + 0x281 * 4 */
#define PAN_RESOURCE     "aid\\bfdmodel\\attach\\FryingPanBound\\default.rbm"
#define TRAINING_PACKAGE "dvddata/aid/zpackage/Level/TrainingLevel/default.rbm"
#define PAN_FILE         "dvddata/aid/bfdmodel/attach/FryingPanBound/default.rbm"
#define SOUND_TABLE      0x0065E060u
#define SOUND_BAT_IMPACT 0xC98u
#define SOUND_PAN_IMPACT 0xDC4u

static char s_overlay[2304];
static int s_active, s_failed;

static void mkdirs(const char *path)
{
    char p[2600];
    size_t i;

    snprintf(p, sizeof p, "%s", path);
    for (i = 1; p[i]; i++)
        if (p[i] == '/' || p[i] == '\\') {
            char c = p[i];
            p[i] = 0;
#ifdef _WIN32
            mkdir(p);
#else
            mkdir(p, 0755);
#endif
            p[i] = c;
        }
}

/* main(), before the mods are laid over the game (conker_mods_init). */
void conker_weapon_init(const char *data_dir)
{
    snprintf(s_overlay, sizeof s_overlay, "%s/generated/pan", data_dir);
}

/* The folder to lay over the game, or NULL with the bat. */
const char *conker_weapon_overlay(void)
{
    return conker_weapon_choice() && s_overlay[0] ? s_overlay : NULL;
}

int conker_weapon_active(void) { return s_active; }
int conker_weapon_failed(void) { return s_failed; }

/* conker_boot(), with the XBE in guest memory and before the game starts. */
void conker_weapon_boot(const char *game_dir)
{
    char pan[2600], pkg_path[2600];
    struct stat st;

    if (!conker_weapon_choice() || !s_overlay[0])
        return;
    snprintf(pan, sizeof pan, "%s/" PAN_FILE, s_overlay);
    if (stat(pan, &st) != 0 || st.st_size == 0) {
        uint8_t *pkg;
        size_t size;
        snprintf(pkg_path, sizeof pkg_path, "%s/" TRAINING_PACKAGE, game_dir);
        fprintf(stderr, "[WEAPON] extracting the frying pan from %s\n", pkg_path);
        mkdirs(pan);
        pkg = conker_caff_unpack_mem(pkg_path, &size);
        if (!pkg || conker_caff_extract(pkg, size, PAN_RESOURCE, pan) != 0) {
            fprintf(stderr, "[WEAPON] no frying pan: the bat stays\n");
            remove(pan);
            free(pkg);
            s_failed = 1;
            return;
        }
        free(pkg);
    }
    *(volatile uint32_t *)(g_xbox_mem_offset + NAME_TABLE_BAT) =
        *(volatile uint32_t *)(g_xbox_mem_offset + NAME_TABLE_PAN);
    {
        volatile uint32_t *bat = (volatile uint32_t *)(g_xbox_mem_offset + SOUND_TABLE
                                                       + SOUND_BAT_IMPACT * 0x30u);
        volatile uint32_t *pan = (volatile uint32_t *)(g_xbox_mem_offset + SOUND_TABLE
                                                       + SOUND_PAN_IMPACT * 0x30u);
        bat[0] = pan[0];                /* bank */
        bat[2] = pan[2];                /* wave */
        bat[3] = pan[3];
    }
    s_active = 1;
    fprintf(stderr, "[WEAPON] Conker holds the frying pan\n");
}
