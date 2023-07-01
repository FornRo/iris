#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_ENT, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_ENT, KC_F4, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, LT(1,KC_SPC), KC_LALT, TT(1), LT(2,KC_BSPC), RALT_T(KC_DEL)),
	[1] = LAYOUT(KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO, KC_TRNS, KC_EQL, RCS(KC_TAB), LCTL(KC_TAB), KC_UNDS, KC_MINS, KC_PLUS, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, KC_TRNS, LCTL_T(KC_CAPS), KC_DOWN, KC_LEFT, KC_RGHT, KC_UP, KC_BSPC, KC_BSLS, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_PSCR, KC_TRNS, TO(4), KC_LPRN, KC_RPRN, KC_APP, KC_DEL, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT(KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, KC_VOLD, KC_VOLU, KC_MPLY, KC_MUTE, KC_NO, KC_NO, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_TRNS, KC_TRNS, KC_LBRC, KC_LCBR, KC_RCBR, KC_RBRC, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_APP, KC_PSCR, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, RGB_VAD, KC_WH_U, RCS(KC_TAB), RCTL(KC_TAB), KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, RGB_VAI, KC_WH_D, KC_UP, KC_NO, KC_PGUP, KC_NO, KC_TRNS, KC_WH_U, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGUP, RGB_HUI, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, RGB_MOD, KC_TRNS, KC_WH_D, KC_NO, KC_NO, KC_NO, KC_PGDN, TO(0), TO(0), RGB_HUD, RGB_TOG, RGB_M_P, KC_NO, KC_NO, RGB_RMOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, TO(3), KC_TAB, KC_T, KC_Q, KC_W, KC_E, KC_R, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_ENT, KC_LCTL, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_Z, KC_TRNS, KC_X, KC_C, KC_V, KC_B, TO(0), TO(0), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_LALT, KC_SPC, TT(1), LT(2,KC_BSPC), KC_DEL)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




