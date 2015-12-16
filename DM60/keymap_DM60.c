#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty base layer */
    KEYMAP(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
			LGUI, LALT, SPC, FN1, SPC, RGUI, RCTL, TRNS),
    /* 1: FN1 Layer */
    
    KEYMAP(
        ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS, \
        TRNS,FN2, UP,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,CALC,TRNS,HOME,INS, FN4,  \
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,PSCR,SLCK,PAUS,TRNS,FN3, END,      TRNS, \
        TRNS,DEL, TRNS,WHOM,MUTE,VOLU,VOLD,TRNS,PGUP,PGDN,DEL,           TRNS, \
            TRNS, TRNS, TRNS, FN1, TRNS, TRNS, TRNS, TRNS),

};
const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(6),  // to Fn overlay
    [1] = ACTION_LAYER_TOGGLE(4),     // toggle arrow overlay
    [2] = ACTION_LAYER_TOGGLE(5),     // toggle Esc overlay
    [3] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // Task(RControl,RShift+Esc)
    [4] = ACTION_LAYER_MOMENTARY(7),  // to Layout selector
    [5] = ACTION_DEFAULT_LAYER_SET(0),  // set qwerty layout
    [6] = ACTION_DEFAULT_LAYER_SET(1),  // set colemak layout
    [7] = ACTION_DEFAULT_LAYER_SET(2),  // set dvorak layout
    [8] = ACTION_DEFAULT_LAYER_SET(3),  // set workman layout
};
