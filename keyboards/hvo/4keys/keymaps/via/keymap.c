#include QMK_KEYBOARD_H

// Helpful defines
#define GRAVE_MODS  (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 *  You can use _______ in place for KC_TRNS (transparent)   *
 *  Or you can use XXXXXXX for KC_NO (NOOP)                  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// Each layer gets a name for readability.
// The underscores don't mean anything - you can
// have a layer called STUFF or any other name.
// Layer names don't all need to be of the same
// length, and you can also skip them entirely
// and just use numbers.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_4keys(
    KC_A, KC_B,
    KC_1, KC_3
),

[1] = LAYOUT_4keys(
    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS
),

[2] = LAYOUT_4keys(
    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS
),

[3] = LAYOUT_4keys(
    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS
),

};

// aheiko.vogeler@hvo.deheiko.vogeler@hvo.de