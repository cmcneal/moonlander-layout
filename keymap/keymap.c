#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_0_255,
  HSV_0_255_255,
  HSV_86_255_255,
  HSV_172_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       KC_EQUAL,       KC_BSPACE,      
    KC_GRAVE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_DELETE,                                      KC_LBRACKET,    KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,      
    KC_TAB,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           LT(6,KC_PSCREEN),                                                                KC_RBRACKET,    KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,       
    KC_LSPO,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER,       
    KC_LCTRL,       KC_F2,          LCTL(KC_F5),    KC_F12,         KC_LALT,        KC_LGUI,                                                                                                        TO(1),          KC_LEFT,        KC_UP,          KC_DOWN,        KC_RIGHT,       KC_RSPC,        
    KC_SPACE,       KC_PC_COPY,     KC_PC_PASTE,                    KC_HOME,        KC_END,         KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    TO(0),          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          RGB_TOG,                                        HSV_0_255_255,  KC_LPRN,        KC_RPRN,        KC_BSLASH,      KC_ASTR,        KC_MINUS,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         HSV_0_0_255,                                    HSV_86_255_255, KC_HASH,        KC_7,           KC_8,           KC_9,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(6,KC_PSCREEN),                                                                HSV_172_255_255,KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_COMMA,       KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_KP_ENTER,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_MOD,                                                                                                        TO(2),          KC_0,           KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                RGB_SLD,        RGB_HUD,        RGB_HUI
  ),
  [2] = LAYOUT_moonlander(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_MS_WH_UP,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_DOWN,  KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 TO(3),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_D,           KC_R,           KC_W,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_TRANSPARENT, KC_TRANSPARENT, KC_P,           KC_SCOLON,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_H,           KC_T,           KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_Y,           KC_N,           KC_E,           KC_O,           KC_I,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_M,           KC_C,           KC_V,                                           KC_K,           KC_L,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 TO(4),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F,           KC_P,           KC_G,           TO(0),                                          KC_TRANSPARENT, KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_R,           KC_S,           KC_T,           KC_D,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_N,           KC_E,           KC_I,           KC_O,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_K,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 TO(5),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRACKET,    KC_RBRACKET,    KC_TRANSPARENT, 
    KC_QUOTE,       KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           KC_F,           TO(0),                                          KC_TRANSPARENT, KC_G,           KC_C,           KC_R,           KC_L,           KC_SLASH,       KC_EQUAL,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_O,           KC_E,           KC_U,           KC_I,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_D,           KC_H,           KC_T,           KC_N,           KC_S,           KC_MINUS,       
    KC_TRANSPARENT, KC_SCOLON,      KC_Q,           KC_J,           KC_K,           KC_X,                                           KC_B,           KC_TRANSPARENT, KC_W,           KC_V,           KC_Z,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 TO(6),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, TO(1),          TO(2),          TO(3),          TO(3),          KC_TRANSPARENT, RESET,                                          ST_MACRO_1,     LALT(LSFT(KC_F)),KC_TRANSPARENT, LGUI(LSFT(KC_E)),KC_TRANSPARENT, LCTL(KC_W),     KC_DELETE,      
    KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LSFT(KC_W))),KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LSFT(KC_T))),KC_TRANSPARENT,                                 ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     KC_TRANSPARENT, WEBUSB_PAIR,    KC_TRANSPARENT, LALT(LSFT(KC_R)),
    KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LSFT(KC_S))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 ST_MACRO_5,     ST_MACRO_6,     ST_MACRO_7,     KC_TRANSPARENT, LGUI(KC_L),     KC_TRANSPARENT, LCTL(KC_F2),    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LSFT(KC_V))),KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_8,     KC_MY_COMPUTER, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_L)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F5,          KC_TRANSPARENT, KC_APPLICATION, ST_MACRO_0,                                                                                                     TO(0),          LALT(LGUI(KC_LBRACKET)),LALT(KC_UP),    LALT(KC_DOWN),  LALT(LGUI(KC_RBRACKET)),KC_SYSTEM_SLEEP,
    LCTL(LSFT(KC_P)),KC_PC_CUT,      LGUI(KC_V),                     KC_F3,          LCTL(LSFT(KC_F)),LALT(KC_F3)
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {243,222,234}, {10,225,255}, {205,255,255}, {105,255,255}, {243,222,234}, {32,176,255}, {134,255,213}, {134,255,213}, {134,255,213}, {32,176,255}, {32,176,255}, {134,255,213}, {134,255,213}, {134,255,213}, {32,176,255}, {32,176,255}, {134,255,213}, {134,255,213}, {134,255,213}, {32,176,255}, {32,176,255}, {134,255,213}, {85,203,158}, {134,255,213}, {243,222,234}, {32,176,255}, {134,255,213}, {134,255,213}, {134,255,213}, {32,176,255}, {10,225,255}, {154,255,255}, {205,255,255}, {243,222,234}, {243,222,234}, {243,222,234}, {243,222,234}, {10,225,255}, {10,225,255}, {205,255,255}, {105,255,255}, {10,225,255}, {134,255,213}, {10,225,255}, {10,225,255}, {0,0,255}, {10,225,255}, {134,255,213}, {134,255,213}, {10,225,255}, {0,0,255}, {32,176,255}, {134,255,213}, {134,255,213}, {10,225,255}, {0,0,255}, {32,176,255}, {134,255,213}, {85,203,158}, {134,255,213}, {0,0,255}, {32,176,255}, {134,255,213}, {134,255,213}, {134,255,213}, {32,176,255}, {10,225,255}, {10,225,255}, {205,255,255}, {105,255,255}, {105,255,255}, {154,255,255} },

    [1] = { {154,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {249,228,255}, {249,228,255}, {249,228,255}, {122,255,255}, {122,255,255}, {249,228,255}, {249,228,255}, {249,228,255}, {122,255,255}, {122,255,255}, {249,228,255}, {249,228,255}, {122,255,255}, {122,255,255}, {122,255,255}, {249,228,255}, {249,228,255}, {122,255,255}, {122,255,255}, {122,255,255}, {249,228,255}, {249,228,255}, {122,255,255}, {122,255,255}, {141,255,233}, {0,0,255}, {154,255,255}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {122,255,255}, {122,255,255}, {122,255,255}, {14,255,255}, {122,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {122,255,255}, {122,255,255}, {14,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {122,255,255}, {14,255,255}, {105,255,255}, {154,255,255}, {105,255,255}, {14,255,255}, {14,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {14,255,255}, {14,255,255}, {122,255,255}, {14,255,255}, {249,228,255}, {105,255,255}, {154,255,255}, {141,255,233}, {141,255,233}, {141,255,233}, {154,255,255} },

    [2] = { {154,255,255}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {105,255,255}, {137,255,254}, {137,255,254}, {137,255,254}, {105,255,255}, {105,255,255}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {105,255,255}, {137,255,254}, {137,255,254}, {137,255,254}, {249,228,255}, {249,228,255}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {35,255,255}, {35,255,255}, {35,255,255}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {137,255,254}, {154,255,255} },

    [3] = { {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {105,255,255}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {105,255,255}, {105,255,255}, {105,255,255}, {0,255,246}, {0,255,246}, {105,255,255}, {105,255,255}, {105,255,255}, {0,255,246}, {0,255,246}, {105,255,255}, {0,255,246}, {105,255,255}, {0,255,246}, {154,255,255}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {105,255,255}, {105,255,255}, {0,255,246}, {0,255,246}, {0,255,246}, {105,255,255}, {105,255,255}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {105,255,255}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {105,255,255}, {105,255,255}, {0,255,246}, {0,255,246}, {105,255,255}, {105,255,255}, {105,255,255}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {0,255,246}, {154,255,255} },

    [4] = { {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {105,255,255}, {33,255,246}, {33,255,246}, {33,255,246}, {105,255,255}, {105,255,255}, {33,255,246}, {33,255,246}, {33,255,246}, {105,255,255}, {105,255,255}, {33,255,246}, {33,255,246}, {33,255,246}, {105,255,255}, {105,255,255}, {33,255,246}, {33,255,246}, {154,255,255}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {105,255,255}, {105,255,255}, {33,255,246}, {33,255,246}, {33,255,246}, {105,255,255}, {105,255,255}, {33,255,246}, {33,255,246}, {33,255,246}, {105,255,255}, {105,255,255}, {33,255,246}, {33,255,246}, {33,255,246}, {105,255,255}, {105,255,255}, {33,255,246}, {33,255,246}, {33,255,246}, {105,255,255}, {33,255,246}, {105,255,255}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {33,255,246}, {154,255,255} },

    [5] = { {45,255,242}, {105,255,255}, {45,255,242}, {45,255,242}, {45,255,242}, {45,255,242}, {105,255,255}, {45,255,242}, {105,255,255}, {45,255,242}, {45,255,242}, {105,255,255}, {105,255,255}, {105,255,255}, {45,255,242}, {45,255,242}, {105,255,255}, {105,255,255}, {105,255,255}, {45,255,242}, {45,255,242}, {105,255,255}, {105,255,255}, {105,255,255}, {45,255,242}, {45,255,242}, {105,255,255}, {105,255,255}, {105,255,255}, {45,255,242}, {154,255,255}, {45,255,242}, {45,255,242}, {45,255,242}, {45,255,242}, {45,255,242}, {45,255,242}, {105,255,255}, {105,255,255}, {45,255,242}, {45,255,242}, {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {45,255,242}, {105,255,255}, {105,255,255}, {105,255,255}, {105,255,255}, {45,255,242}, {45,255,242}, {105,255,255}, {105,255,255}, {105,255,255}, {45,255,242}, {45,255,242}, {105,255,255}, {105,255,255}, {45,255,242}, {45,255,242}, {45,255,242}, {105,255,255}, {105,255,255}, {105,255,255}, {45,255,242}, {45,255,242}, {45,255,242}, {45,255,242}, {45,255,242}, {45,255,242}, {154,255,255} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {105,255,255}, {105,255,255}, {0,0,0}, {32,176,255}, {154,255,255}, {0,0,0}, {0,0,0}, {105,255,255}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {105,255,255}, {0,0,0}, {0,0,0}, {249,228,255}, {0,0,0}, {154,255,255}, {14,255,255}, {154,255,255}, {154,255,255}, {85,203,158}, {243,222,234}, {10,225,255}, {10,225,255}, {10,225,255}, {0,183,238}, {10,225,255}, {0,0,0}, {0,0,0}, {0,0,0}, {10,225,255}, {0,0,0}, {0,183,238}, {0,183,238}, {0,0,0}, {0,0,255}, {10,225,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {10,225,255}, {10,225,255}, {249,228,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {10,225,255}, {85,203,158}, {85,203,158}, {85,203,158}, {14,255,255}, {10,225,255}, {154,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_DOT)));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_K)) SS_DELAY(100) SS_LCTL(SS_LSFT(SS_TAP(X_S))));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_V));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_S))) SS_DELAY(100) SS_TAP(X_A));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_S))) SS_DELAY(100) SS_TAP(X_U));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_P) SS_DELAY(100) SS_TAP(X_P));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_S))) SS_DELAY(100) SS_TAP(X_D));

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_S))) SS_DELAY(100) SS_TAP(X_N));

    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_K)) SS_DELAY(100) SS_TAP(X_O));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_0_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,0,255);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_86_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,255);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
  }
  return true;
}
