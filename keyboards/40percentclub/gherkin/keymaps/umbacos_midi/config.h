#pragma once

#define IGNORE_MOD_TAP_INTERRUPT

#define RGB_DI_PIN F6
#define RGBLED_NUM 6
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#ifdef BACKLIGHT_LEVELS
#undef BACKLIGHT_LEVELS
#endif
#define BACKLIGHT_LEVELS 3

#define MIDI_ADVANCED
