/*
 * Swing Button (Recomp Options): one press swings the weapon, as on the N64,
 * instead of B (weapon out, over-the-shoulder camera) and then RT.
 *
 * Driven from the pad, on the input filter's thread: the game is handed the
 * B and RT presses it would have had from the player, at the moments it
 * takes them. What it reads back from guest memory:
 *
 *   [0x0084A5F8]            the player's character
 *   character + 0xA4        its state: 0x834 weapon coming out (about 1.1 s,
 *                           RT is dropped meanwhile), 0x836 weapon ready,
 *                           0x83F..0x841 the three swings of the combo (RT
 *                           during a swing chains the next one), 0x835 weapon
 *                           going away; other values are Conker without it
 *   [character + 0x568] + 0xA0
 *                           non-zero while a weapon is out
 *   [0x007FA1F8]            the level (only single-player levels count)
 *
 * A weapon this button brings out keeps the camera as it was: the
 * over-the-shoulder camera the game pushes for it is replaced by the one in
 * use (sub_0003D200_enter). B brings out the weapon with its camera as ever.
 *
 * The swing button itself never reaches the game while the option is on.
 * B and RT pressed by the player pass through untouched, so B-then-RT still
 * works; a weapon this button brought out goes away again after a moment
 * without another press, unless the player took it over with B.
 */
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "conker_settings.h"
#include "xinput_xbox.h"

#define PLAYER_PTR        0x0084A5F8u
#define LEVEL_ID          0x007FA1F8u
#define CHAR_STATE        0xA4u
#define CHAR_WEAPON_USER  0x568u
#define USER_WEAPON_OUT   0xA0u
#define STATE_TAKEOUT     0x834u

#define PULSE_MS          80u     /* how long an injected press is held */
#define READY_TIMEOUT_MS  2500u   /* give up waiting for the weapon */
#define PUT_AWAY_MS       800u    /* idle time before an auto put-away */
#define RETRY_MS          200u    /* RT again while a press is not taken */
#define CHAIN_GAP_MS      300u    /* from one RT to the next of a combo */
#define PRESS_LIFE_MS     1200u   /* a press not taken by then is dropped */
#define STATE_READY       0x836u  /* the bat's idle */
#define STATE_MOVE_FIRST  0x837u  /* walking, strafing, turning with the bat */
#define STATE_MOVE_LAST   0x83Eu

enum { AB_B = 1, AB_X = 2, AB_RT = 7 };

extern ptrdiff_t g_xbox_mem_offset;

static int s_x_was_down;
static volatile int s_waiting;              /* the weapon is on its way out */
static volatile int s_auto;        /* this button brought the weapon out */
static int s_pending;              /* swings asked for, not yet taken */
static int s_awaiting;             /* RT sent, waiting for the swing */
static uint32_t s_ready_state;     /* the weapon's idle state, once seen */
static uint64_t s_wait_since, s_last_x, s_last_busy, s_next_rt, s_rt_sent;
static uint64_t s_b_until, s_rt_until;

/* Read on the guest thread each time the weapon's camera is pushed (every
 * frame it is out; sub_0003D200_enter, recomp_manual.c): keep the camera as
 * it is for a weapon this button brought out. */
int conker_swing_keep_camera(void)
{
    return conker_swing_enabled() && (s_waiting || s_auto);
}

static uint32_t guest32(uint32_t va)
{
    if (!g_xbox_mem_offset || va < 0x10000u || va > 0x07FFFFFCu)
        return 0;
    return *(volatile const uint32_t *)(g_xbox_mem_offset + va);
}

/* A level the weapon can be used in: the single-player world levels, not
 * the front end, the cutscene levels or multiplayer (the level enum at
 * 0x0068C398). */
static int gameplay_level(uint32_t id)
{
    static const uint8_t k_not[] = {
        0x05, 0x08, 0x09, 0x15, 0x16, 0x1A, 0x1D, 0x1F, 0x20, 0x21, 0x22,
        0x24, 0x25, 0x2A, 0x2B, 0x2D, 0x30, 0x33, 0x34, 0x3E, 0x3F, 0x45,
        0x46, 0x47, 0x48,
    };
    size_t i;
    if (id > 0x49)
        return 0;
    for (i = 0; i < sizeof k_not; i++)
        if (k_not[i] == id)
            return 0;
    return 1;
}

/* Conker busy with something the weapon does (a swing): not ready, not
 * just moving with it. */
static int acting(uint32_t state)
{
    if (state == STATE_TAKEOUT || state == STATE_READY || state == s_ready_state)
        return 0;
    return state < STATE_MOVE_FIRST || state > STATE_MOVE_LAST;
}

static void reset(void)
{
    s_waiting = s_auto = s_pending = s_awaiting = 0;
    s_ready_state = 0;
    s_b_until = s_rt_until = 0;
}

void conker_swing_filter(XBOX_INPUT_STATE *st, uint64_t now)
{
    const uint32_t player = guest32(PLAYER_PTR);
    const uint32_t user = player ? guest32(player + CHAR_WEAPON_USER) : 0;
    uint32_t state, out;
    int x_down, x_pressed;

    if (!conker_swing_enabled() || !user || !gameplay_level(guest32(LEVEL_ID))) {
        s_x_was_down = 0;
        reset();
        return;
    }
    state = guest32(player + CHAR_STATE);
    out = guest32(user + USER_WEAPON_OUT);

    x_down = st->Gamepad.bAnalogButtons[AB_X] > 30;
    x_pressed = x_down && !s_x_was_down;
    s_x_was_down = x_down;
    st->Gamepad.bAnalogButtons[AB_X] = 0;       /* the game never sees it */

    /* The player's own B takes the weapon back from this button. */
    if (st->Gamepad.bAnalogButtons[AB_B] > 30 && now >= s_b_until)
        s_auto = 0;

    if (x_pressed) {
        s_last_x = now;
        if (!out && !s_waiting) {               /* weapon out first */
            s_b_until = now + PULSE_MS;
            s_waiting = 1;
            s_auto = 1;
            s_wait_since = now;
            s_ready_state = 0;
        }
        if (s_pending < 3)
            s_pending++;
    }

    if (s_waiting && now - s_wait_since > READY_TIMEOUT_MS && !(out && state != STATE_TAKEOUT))
        reset();                                /* B did something else */

    /* A swing whenever the weapon can take one. The game drops RT while
     * the weapon comes out and for a moment after a swing, so a press is
     * kept and RT sent again until Conker is swinging (or the press is
     * old); RT during a swing chains the next one of the combo. */
    if (s_pending && now - s_last_x > PRESS_LIFE_MS && !s_waiting)
        s_pending = 0;
    if (s_awaiting && acting(state)) {
        s_awaiting = 0;
        if (s_pending)
            s_pending--;
        s_next_rt = s_rt_sent + CHAIN_GAP_MS;
    }
    if (s_pending && out && state != STATE_TAKEOUT && now >= s_b_until && now >= s_next_rt) {
        if (s_waiting && !s_ready_state)
            s_ready_state = state;
        s_waiting = 0;
        s_rt_until = now + PULSE_MS;
        s_rt_sent = now;
        s_awaiting = !acting(state);            /* mid-swing: chains at once */
        s_next_rt = now + (s_awaiting ? RETRY_MS : CHAIN_GAP_MS);
        if (!s_awaiting)
            s_pending--;
    }

    /* Put away a weapon this button brought out, once it has been idle. */
    if (out && acting(state))
        s_last_busy = now;
    if (s_auto && !s_waiting && !s_pending && out && !acting(state)
            && now - s_last_x > PUT_AWAY_MS && now - s_last_busy > PUT_AWAY_MS
            && now >= s_rt_until) {
        s_b_until = now + PULSE_MS;
        s_auto = 0;
    }
    if (!out && !s_waiting && now >= s_b_until) {
        s_auto = 0;
        s_pending = 0;
    }

    if (now < s_b_until)
        st->Gamepad.bAnalogButtons[AB_B] = 0xFF;
    if (now < s_rt_until)
        st->Gamepad.bAnalogButtons[AB_RT] = 0xFF;
}
