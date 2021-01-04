#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * ,-----------------------------------------------------------.
   * |Esc|1 !|2 "|3 #|4 $|5 %|6 ^|7 &|8 *|9 (|0 )|- _|= +|bck|bck|
   * |-----------------------------------------------------------|
   * | Tab | Q | W | E | R | T | Y | U | I | O | P |[ {|] }| \ | |
   * |-----------------------------------------------------------|
   * | Ctrl | A | S | D | F | G | H | J | K | L |; :|' "| Enter  |
   * |-----------------------------------------------------------|
   * |Sft |Sft| Z | X | C | V | B | N | M |, <|. >|/ ?| Caps |vU |
   * |-----------------------------------------------------------|
   * |Ctrl |GUI|Alt  | Space   |M0 | Bspace  |Alt|Lft|Dwn|Up |Rgt|
   * `-----------------------------------------------------------'
   */
  LAYOUT(
         KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,
         KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
         KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
         KC_LSFT, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, XXXXXXX,
         KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,  MO(1),   KC_BSPC,          KC_RALT, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT
         ),


  LAYOUT(
         KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_DEL,
         _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______, RESET,
         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
         _______, _______, _______, _______, BL_DEC,  BL_TOGG, BL_INC,  BL_STEP, _______, _______, _______, _______, _______, _______,
         _______, _______, _______,                   _______, _______, _______,          _______, _______, _______, _______, _______
         )
};
