/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "quantum.h"

#define def_ 0
#define num_ 1
#define sym_ 2
#define func_ 3

#define LNG_KANA    KC_LNG1
#define LNG_ENG     KC_LNG2

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [def_] = LAYOUT_universal(
//+---------------+---------------+---------------+---------------+---------------+                                          +---------------+---------------+---------------+---------------+---------------+
    KC_Q          , KC_W          , KC_E          , KC_R          , KC_T          ,                                             KC_Y          , KC_U          , KC_I          , KC_O          , KC_P          ,
//+---------------+---------------+---------------+---------------+---------------+                                          +---------------+---------------+---------------+---------------+---------------+
    KC_A          , KC_S          , KC_D          , KC_F          , KC_G          ,                                            KC_H          , KC_J          , KC_K          , KC_L          , KC_LCTL       ,
//+---------------+---------------+---------------+---------------+---------------+                                          +---------------+---------------+---------------+---------------+---------------+
    KC_Z          , KC_X          , KC_C          , KC_V          , KC_B          ,                                            KC_N          , KC_M          , KC_BTN1       , KC_BTN2       , MT(MOD_RSFT, KC_BTN3) ,
//+---------------+---------------+---------------+---------------+---------------+---------------+          +---------------+---------------+---------------+---------------+---------------+---------------+
    LT(func_,KC_LSFT), _______    , KC_LALT       , KC_LCMD       , LT(sym_,LNG_ENG), LT(num_,KC_SPC),        KC_ENT         , LT(sym_,LNG_KANA), XXXXXXX    , XXXXXXX       , XXXXXXX       , LT(func_,KC_LCTL)
//+---------------+---------------+---------------+---------------+---------------+---------------+          +---------------+---------------+---------------+---------------+---------------+---------------+
  ),

  [num_] = LAYOUT_universal(
//+---------------+---------------+---------------+---------------+---------------+                                          +---------------+---------------+---------------+---------------+---------------+
    KC_ESC        , KC_7          , KC_8          , KC_9          , KC_QUOT       ,                                            KC_CIRC       , KC_AMPR       , KC_ASTR       , KC_PIPE       , KC_BSLS       ,
//+---------------+---------------+---------------+---------------+---------------+                                          +---------------+---------------+---------------+---------------+---------------+
    _______       , KC_4          , KC_5          , KC_6          , KC_SLSH       ,                                            KC_MINUS      , KC_PLUS       , KC_EQL        , KC_COLN       , KC_SCLN       ,
//+---------------+---------------+---------------+---------------+---------------+                                           +---------------+---------------+---------------+---------------+---------------+
    KC_0          , KC_1          , KC_2          , KC_3          , KC_DOT        ,                                            KC_UNDS       , KC_TILD       , KC_COMM      , KC_DOT         , KC_GRV        ,
//+---------------+---------------+---------------+---------------+---------------+---------------+          +---------------+---------------+---------------+---------------+---------------+---------------+
    LT(func_,KC_LSFT), _______    , KC_LALT       , KC_LCMD       , _______       , _______       ,            KC_ENT        , _______       , XXXXXXX       , XXXXXXX       , XXXXXXX       , KC_DQUO
//+---------------+---------------+---------------+---------------+---------------+---------------+          +---------------+---------------+---------------+---------------+---------------+---------------+
  ),

  [sym_] = LAYOUT_universal(
//+---------------+---------------+---------------+---------------+---------------+                                          +---------------+---------------+---------------+---------------+---------------+
    KC_EXLM       , KC_AT         , KC_HASH       , KC_DLR        , KC_PERC       ,                                            KC_F14        , KC_F15        , KC_UP         , _______       , MEH(KC_M)     ,
//+---------------+---------------+---------------+---------------+---------------+                                          +---------------+---------------+---------------+---------------+---------------+
    KC_LPRN       , KC_RPRN       , KC_LBRC       , KC_RBRC       , LCMD(KC_SLSH) ,                                            KC_BSPC       , KC_LEFT       , KC_DOWN       , KC_RGHT       , KC_LCTL       ,
//+---------------+---------------+---------------+---------------+---------------+                                          +---------------+---------------+---------------+---------------+---------------+
    KC_LCBR       , KC_RCBR       , KC_LABK       , KC_RABK       , KC_QUES       ,                                            KC_DEL        , LALT(KC_LCMD) , LCTL(KC_LSFT) , LCTL(KC_SPC)  , KC_LSFT       ,
//+---------------+---------------+---------------+---------------+---------------+---------------+          +---------------+---------------+---------------+---------------+---------------+---------------+
    LT(func_,KC_LSFT), _______    , KC_LALT       , KC_LCMD       , _______       , _______       ,           KC_ENT         , _______       , XXXXXXX      , XXXXXXX       , XXXXXXX       , _______
//+---------------+---------------+---------------+---------------+---------------+---------------+          +---------------+---------------+---------------+---------------+---------------+---------------+
  ),

  [func_] = LAYOUT_universal(
//+---------------+---------------+---------------+---------------+---------------+                                          +---------------+---------------+---------------+---------------+---------------+
    KC_ESC        , KC_F7         , KC_F8         , KC_F9         , LSG(KC_4)     ,                                            MEH(KC_5)     , MEH(KC_4)     , MEH(KC_3)     , MEH(KC_2)     , MEH(KC_1)     ,
//+---------------+---------------+---------------+---------------+---------------+                                          +---------------+---------------+---------------+---------------+---------------+
	KC_LCTL       , KC_F4         , KC_F5         , KC_F6         , LSG(KC_5)     ,                                            LCMD(KC_W)    , RCS(KC_TAB)   , LCMD(KC_T)    , LCTL(KC_TAB)  , KC_LCTL       ,
//+---------------+---------------+---------------+---------------+---------------+                                          +---------------+---------------+---------------+---------------+---------------+
	KC_LSFT       , KC_F1         , KC_F2         , KC_F3         , _______       ,                                            LSG(KC_T)     , LCMD(KC_LEFT) , LCMD(KC_N)    , LCMD(KC_RGHT) , KC_LSFT       ,
//+---------------+---------------+---------------+---------------+---------------+---------------+          +---------------+---------------+---------------+---------------+---------------+---------------+
    _______       , _______       , KC_LALT       , LCMD(KC_COMM) , _______       , KC_TAB         ,          LCMD(LCTL(KC_D)), LCTL(KC_ESC) , XXXXXXX       , XXXXXXX       , XXXXXXX       , _______
//+---------------+---------------+---------------+---------------+---------------+---------------+          +---------------+---------------+---------------+---------------+---------------+---------------+
  ),

  [4] = LAYOUT_universal(
	_______       , _______       , _______       , _______       , _______       ,                                             _______        , _______       , _______       , _______       , _______        ,
	_______       , _______       , _______       , _______       , _______       ,                                             _______        , _______       , _______       , _______       , _______        ,
	_______       , _______       , _______       , _______       , _______       ,                                             _______        , _______       , KC_BTN1       , KC_BTN2       , KC_BTN3        ,
	_______       , _______       , _______       , _______       , _______       , _______  ,               _______          , _______        , XXXXXXX       , XXXXXXX       , XXXXXXX       , _______
  ),

};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
	// Auto enable scroll mode when the highest layer is 3
//    keyball_set_scroll_mode(get_highest_layer(state) == 3);
	switch(get_highest_layer(remove_auto_mouse_layer(state, true))) {
		case 3:
			// Auto enable scroll mode when the highest layer is 3
			// remove_auto_mouse_target must be called to adjust state *before* setting enable
			state = remove_auto_mouse_layer(state, false);
			set_auto_mouse_enable(false);
			keyball_set_scroll_mode(true);
			break;
		case 2:
			state = remove_auto_mouse_layer(state, false);
			set_auto_mouse_enable(false);
			break;
		case 1:
			state = remove_auto_mouse_layer(state, false);
			set_auto_mouse_enable(false);
			break;
		default:
			set_auto_mouse_enable(true);
			keyball_set_scroll_mode(false);
			break;
	}
	return state;
}

// ctrl-H -> backspace
const key_override_t backspace_key_override = ko_make_basic(MOD_MASK_CTRL, KC_H, KC_BSPC);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
		&backspace_key_override,
		NULL // Null terminate the array of overrides!
};

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
}
#endif
