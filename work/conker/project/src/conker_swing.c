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
 *   character + 0x170, 0x174
 *                           the way he faces, and the way he turns to: 16-bit
 *                           angles, 0x10000 a turn
 *   [character + 0x564]     his camera: the heading, in degrees, at +0x3C8,
 *                           or at [+4] + 0x5C when +0x3C8 holds 999 (as
 *                           sub_002D3370 reads it)
 *
 * A weapon this button brings out keeps the camera as it was: the
 * over-the-shoulder camera the game pushes for it is replaced by the one in
 * use (sub_0003D200_enter). B brings out the weapon with its camera as ever.
 *
 * It comes out quickly: the game's take-out lasts about a second, and this
 * button cuts it to TAKEOUT_MS by moving Conker on to the weapon's ready
 * state, with the weapon in his hand by then.
 *
 * With it out, Conker runs as he does without it. The game moves a Conker
 * holding a weapon along the stick's angle from the heading he had when it
 * came out, without turning him: he strafes, and keeps going the same way
 * when the camera changes. For a weapon this button brought out, the game
 * is handed the stick pushed straight ahead (so he runs, not strafes), and
 * the heading he moves along is the stick's direction from the camera in
 * use, as without a weapon, with Conker turned to face it
 * (conker_swing_heading, from sub_002DEF80_enter). A swing goes the way he
 * faces.
 *
 * The right stick, which turns a Conker holding a weapon, is kept from the
 * game while this button's weapon is out; pushing it puts the weapon away
 * (once a swing is over), and from then on it moves the camera as ever.
 *
 * The swing button itself never reaches the game while the option is on.
 * B and RT pressed by the player pass through untouched, so B-then-RT still
 * works; a weapon this button brought out goes away again after a moment
 * without another press, unless the player took it over with B.
 */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "conker_settings.h"
#include "xinput_xbox.h"

#define PLAYER_PTR        0x0084A5F8u
#define LEVEL_ID          0x007FA1F8u
#define CHAR_STATE        0xA4u
#define CHAR_CAMERA       0x564u
#define CHAR_WEAPON_USER  0x568u
#define CAM_HEADING       0x3C8u  /* degrees, or 999: see the next */
#define CAM_VIEW          0x4u    /* -> heading in degrees at +0x5C */
#define CAM_VIEW_HEADING  0x5Cu
#define USER_WEAPON_OUT   0xA0u
#define STATE_TAKEOUT     0x834u

#define PULSE_MS          80u     /* how long an injected press is held */
#define READY_TIMEOUT_MS  2500u   /* give up waiting for the weapon */
#define PUT_AWAY_MS       800u    /* idle time before an auto put-away */
#define RETRY_MS          200u    /* RT again while a press is not taken */
#define CHAIN_GAP_MS      300u    /* from one RT to the next of a combo */
#define PRESS_LIFE_MS     1200u   /* a press not taken by then is dropped */
#define STATE_READY       0x836u  /* the bat's idle */
#define STATE_PUT_AWAY    0x835u
#define TAKEOUT_MS        200u    /* how much of the take-out plays */
#define STICK_DEAD_ZONE   7849    /* XInput's left-stick dead zone */
#define STATE_MOVE_FIRST  0x837u  /* walking, strafing, turning with the bat */
#define STATE_MOVE_LAST   0x83Eu

enum { AB_B = 1, AB_X = 2, AB_RT = 7 };

#define DEG_TO_ANGLE      182.04444885f  /* 0x10000 / 360, as the game has it */
#define RAD_TO_ANGLE      10430.378f     /* 0x10000 / (2 pi) */

extern ptrdiff_t g_xbox_mem_offset;

static int s_x_was_down;
static volatile int s_waiting;              /* the weapon is on its way out */
static volatile int s_auto;        /* this button brought the weapon out */
static int s_pending;              /* swings asked for, not yet taken */
static int s_awaiting;             /* RT sent, waiting for the swing */
static uint32_t s_ready_state;     /* the weapon's idle state, once seen */
static uint64_t s_wait_since, s_last_x, s_last_busy, s_next_rt, s_rt_sent;
static uint64_t s_b_until, s_rt_until, s_takeout_since;
/* The stick's angle from straight ahead, 0x10000 a turn, while the game is
 * handed it straight ahead instead (read on the guest thread). */
static int s_stowing;              /* put away by this button, still out */
static volatile int s_stick_held;
static volatile uint32_t s_stick_angle;

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

static float guestf(uint32_t va)
{
    uint32_t v = guest32(va);
    float f;
    memcpy(&f, &v, sizeof f);
    return f;
}

static void guest32_set(uint32_t va, uint32_t v)
{
    if (g_xbox_mem_offset && va >= 0x10000u && va <= 0x07FFFFFCu)
        *(volatile uint32_t *)(g_xbox_mem_offset + va) = v;
}

static void guest16_set(uint32_t va, uint16_t v)
{
    if (g_xbox_mem_offset && va >= 0x10000u && va <= 0x07FFFFFEu)
        *(volatile uint16_t *)(g_xbox_mem_offset + va) = v;
}

/* Read on the guest thread as the game moves a character (sub_002DEF80,
 * heading in eax): for Conker holding a weapon this button brought out,
 * with the stick pushed, the heading to run along -- the stick's direction
 * from his camera, worked out as the game does it without a weapon -- and
 * Conker turned to face it. */
int conker_swing_heading(uint32_t character, uint32_t *heading)
{
    uint32_t cam, state, view;
    float deg;

    if (!conker_swing_enabled() || !s_auto || s_waiting || !s_stick_held
            || character != guest32(PLAYER_PTR))
        return 0;
    state = guest32(character + CHAR_STATE);
    if (state == STATE_TAKEOUT || state == STATE_PUT_AWAY
            || !(cam = guest32(character + CHAR_CAMERA)))
        return 0;
    deg = guestf(cam + CAM_HEADING);
    if (deg == 999.0f) {
        if (!(view = guest32(cam + CAM_VIEW)))
            return 0;
        deg = guestf(view + CAM_VIEW_HEADING);
    }
    if (!isfinite(deg))
        return 0;
    *heading = ((uint32_t)(int32_t)(deg * DEG_TO_ANGLE) + s_stick_angle) & 0xFFFFu;
    guest16_set(character + 0x170, (uint16_t)*heading);
    guest16_set(character + 0x174, (uint16_t)*heading);
    return 1;
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
    s_stick_held = 0;
    s_stowing = 0;
    s_takeout_since = 0;
    s_ready_state = 0;
    s_b_until = s_rt_until = 0;
}

void conker_swing_filter(XBOX_INPUT_STATE *st, uint64_t now)
{
    const uint32_t player = guest32(PLAYER_PTR);
    const uint32_t user = player ? guest32(player + CHAR_WEAPON_USER) : 0;
    uint32_t state, out;
    int x_down, x_pressed, right;

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

    /* Cut the take-out short: the weapon is in hand by TAKEOUT_MS. */
    if (s_auto && state == STATE_TAKEOUT) {
        if (!s_takeout_since)
            s_takeout_since = now;
        else if (now - s_takeout_since >= TAKEOUT_MS)
            guest32_set(player + CHAR_STATE, STATE_READY);
    } else {
        s_takeout_since = 0;
    }

    /* Running with it: the game gets the stick straight ahead, and the
     * guest thread its angle (conker_swing_heading). */
    s_stick_held = 0;
    if (s_auto && out && state != STATE_TAKEOUT && state != STATE_PUT_AWAY) {
        float x = st->Gamepad.sThumbLX, y = st->Gamepad.sThumbLY;
        float mag = sqrtf(x * x + y * y);
        if (mag > STICK_DEAD_ZONE) {
            s_stick_angle = (uint32_t)(int32_t)(atan2f(-x, y) * RAD_TO_ANGLE) + 0x4000u;
            s_stick_held = 1;
            st->Gamepad.sThumbLX = 0;
            st->Gamepad.sThumbLY = (int16_t)(mag > 32767.0f ? 32767.0f : mag);
        }
    }

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

    /* Put away a weapon this button brought out, once it has been idle, or
     * as soon as the right stick asks for the camera. */
    right = abs(st->Gamepad.sThumbRX) > STICK_DEAD_ZONE || abs(st->Gamepad.sThumbRY) > STICK_DEAD_ZONE;
    if (out && acting(state))
        s_last_busy = now;
    if (s_auto && !s_waiting && !s_pending && out && !acting(state) && now >= s_rt_until
            && (right || (now - s_last_x > PUT_AWAY_MS && now - s_last_busy > PUT_AWAY_MS))) {
        s_b_until = now + PULSE_MS;
        s_auto = 0;
        s_stowing = 1;
    }
    if (!out && !s_waiting && now >= s_b_until) {
        s_auto = 0;
        s_pending = 0;
        s_stowing = 0;
    }
    if ((s_auto || s_stowing) && out) {
        st->Gamepad.sThumbRX = 0;
        st->Gamepad.sThumbRY = 0;
    }

    if (now < s_b_until)
        st->Gamepad.bAnalogButtons[AB_B] = 0xFF;
    if (now < s_rt_until)
        st->Gamepad.bAnalogButtons[AB_RT] = 0xFF;
}
