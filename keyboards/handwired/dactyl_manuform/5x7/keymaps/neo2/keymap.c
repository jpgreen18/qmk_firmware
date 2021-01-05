#include QMK_KEYBOARD_H
#include "quantum/keymap_extras/keymap_neo2.h"


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _NEO2   0
#define _FN     1
#define _NUMPAD 2

// Some basic macros
#define TASK    LCTL(LSFT(KC_ESC))
#define TAB_R   LCTL(KC_TAB)
#define TAB_L   LCTL(LSFT(KC_TAB))
#define TAB_RO  LCTL(LSFT(KC_T))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_NEO2] = LAYOUT_5x7(
    // left hand
    NE_CIRC, NE_1,    NE_2,    NE_3,    NE_4,    NE_5,   NE_6,
    KC_INS,  NE_X,    NE_V,    NE_L,    NE_C,    NE_W,   NE_L4L,
    KC_TAB,  NE_U,    NE_I,    NE_A,    NE_E,    NE_O,   NE_L3L,
    TT(_FN), NE_UDIA, NE_ODIA, NE_ADIA, NE_P,    NE_Z,
    KC_NO,   KC_NO,   KC_HOME, KC_END,
                                        KC_LSFT, KC_SPC,
                                                         KC_LCTRL,   KC_LSFT,
                                                         KC_LALT,    KC_LGUI,
    // right hand
             NE_GRV,  NE_7,    NE_8,   NE_9,    NE_0,   NE_MINS, NE_ACUT,
             NE_L4R,  NE_K,    NE_H,   NE_G,    NE_F,   NE_Q,    NE_SS,
             NE_L3R,  NE_S,    NE_N,   NE_R,    NE_T,   NE_D,    NE_Y,
                      NE_B,    NE_M,   NE_COMM, NE_DOT, NE_J,    KC_NO,
                                       KC_APP,  KC_NO,  KC_NO,   KC_NO,
                      KC_BSPC, KC_ENT,
    KC_RSFT, KC_RCTL,
    KC_DEL,  KC_RALT),

[_FN] = LAYOUT_5x7(
   // left hand
   KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
   _______, _______, KC_HOME, KC_UP,   KC_END,  KC_PGUP, _______,
   _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, RESET,
   KC_TRNS, KC_NO,   _______, _______, _______, _______,
   KC_NO,   KC_NO,   KC_MPRV, KC_MNXT,
                                       KC_MSTP, KC_MPLY,
                                                         _______, _______,
                                                         _______, _______,
    // right hand
             KC_NO,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
             _______, _______, _______, _______, _______, _______, _______,
             _______, _______, _______, _______, _______, _______, _______,
                      _______, _______, _______, _______, _______, _______,
                                        _______, _______, _______, _______,
                      KC_DEL, _______,
    _______, _______,
    _______, _______),

[_NUMPAD] = LAYOUT_5x7(
    // left hand
    _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______,
                                        _______, _______,
                                                          _______, _______,
                                                          _______, _______,
    // right hand
             _______, _______, KC_NLCK, _______, KC_PMNS, KC_PPLS, _______,
             _______, _______, KC_P7,   KC_P8,   KC_P9,   _______, _______,
             _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PAST, _______,
                      _______, KC_P1,   KC_P2,   KC_P3,   KC_PSLS, _______,
                                        KC_P0,   KC_PDOT, _______, _______,
                      _______, KC_PENT,
    _______, _______,
    _______, _______),

};
