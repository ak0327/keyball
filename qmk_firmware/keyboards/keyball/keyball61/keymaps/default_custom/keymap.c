/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keymap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takira <takira@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:34:01 by takira            #+#    #+#             */
/*   Updated: 2023/02/17 10:36:20 by takira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_universal(
    KC_ESC   , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     ,                                  KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , KC_MINS  ,
    KC_TAB   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                  KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_EQL   ,
    KC_LCTL  , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                  KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , KC_QUOT  ,
    KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     , KC_LBRC  ,              KC_RBRC, KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , MO(3)    ,
    MO(3)    , _______  , KC_LALT  , KC_LGUI  ,LT(1,KC_LNG2),KC_SPC , MO(3)    ,              KC_ENT ,LT(2,KC_LNG1), _______  , _______  , _______  , KC_BSLS  , KC_GRV
  ),

  [1] = LAYOUT_universal(
    _______  , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    ,                                  KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   ,
    _______  , MEH(KC_5), MEH(KC_4), MEH(KC_3), MEH(KC_2), MEH(KC_1),                                  _______  , _______  , KC_UP    , _______  , _______  , KC_F12   ,
    _______  , _______  , _______  , KC_DEL   , _______  , _______  ,                                  KC_BSPC  , KC_LEFT  , KC_DOWN  , KC_RGHT  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , KC_F14   , KC_F15
  ),

  [2] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , MEH(KC_7), MEH(KC_8), MEH(KC_9), _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  MEH(KC_Y), MEH(KC_U), MEH(KC_I), MEH(KC_O), _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  LGUI(KC_W),LGUI(KC_LEFT),LGUI(KC_N),LGUI(KC_RGHT), _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , LSG(KC_T),RCS(KC_TAB),LGUI(KC_T),LCTL(KC_TAB), _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______
  ),

  [3] = LAYOUT_universal(
   _______  , _______  , _______  , _______  , LSG(KC_4), LSG(KC_5),                                  _______  , _______  , _______  , _______  ,LCTL(KC_DOWN),LCTL(KC_UP),
   _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  ,LCTL(KC_LEFT),LCTL(KC_RGHT),
   _______  , CPI_I100 , CPI_I1K  , SCRL_DVI , _______  , _______  ,                                  _______  , KC_BTN1  , KC_BTN3  , KC_BTN2  , _______  , _______  ,
   _______  , CPI_D100 , CPI_D1K  , SCRL_DVD , _______  , _______  , KBC_SAVE ,            _______  , _______  , KC_BTN1  , KC_BTN3  , KC_BTN2  , _______  , _______  ,
   _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______
 ),

 [4] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , KC_BTN1  , KC_BTN3  , KC_BTN2   , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , KC_BTN1  , KC_BTN3  , KC_BTN2  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______
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

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
}
#endif
