
#include "zmk-helpers/helper.h"

// ##############################

#if !defined HOME_MOD_PRIOR_IDLE_MS_SLOW
    #define HOME_MOD_PRIOR_IDLE_MS_SLOW 200
#endif

#if !defined QUICK_TAP_MS_NORM
    #define QUICK_TAP_MS_NORM 200
#endif

// ####################
// ---- HOME ROW MOD
// ####################

#define MAKE_HRM(NAME, HOLD, TAP, TRIGGER_POS) \
    ZMK_HOLD_TAP(NAME, \
        flavor = "balanced"; \
        tapping-term-ms = <TAP_TERM_NORM>; \
        quick-tap-ms = <QUICK_TAP_MS_NORM>; \
        require-prior-idle-ms = <150>; \
        bindings = <HOLD>, <TAP>; \
        hold-trigger-key-positions = <TRIGGER_POS>; \
        hold-trigger-on-release; \
    )

// ####################
// ---- HRM combo hack
// ####################

// HRM combo hack - workaround for lack of tap-only combos (ZMK issue #544)

#define ZMK_COMBO_8(NAME, TAP, KEYPOS, LAYERS, COMBO_TERM, COMBO_IDLE, HOLD, SIDE) \
    MAKE_HRM(hm_combo_ ## NAME, &kp, TAP, SIDE THUMBS) \
    ZMK_COMBO_6(NAME, &hm_combo_ ## NAME HOLD 0, KEYPOS, LAYERS, COMBO_TERM, COMBO_IDLE)

/* ---- Explanation for `ZMK_COMBO_8`.

MAKE_HRM(hm_combo_xxx, &kp, &kp yyyyy, SIDE THUMBS)
                                ^ It takes the `&kp` for tap here.

ZMK_COMBO_6(NAME, &hm_combo_xxx HOLD 0, KEYPOS, LAYERS, COMBO_TERM, COMBO_IDLE)
                                     ^ This is a place holder.
*/

// ##############################

// ####################
// ---- Rotate Sensor
// ####################

#define ZMK_BEHAVIOR_CORE_rotate       compatible = "zmk,behavior-sensor-rotate";       #sensor-binding-cells = <0>
#define ZMK_ROTATE(name, ...) ZMK_BEHAVIOR(name, rotate, __VA_ARGS__)




