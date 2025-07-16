/**
 * @file tvs_hmi_gen.h
 */

#ifndef TVS_HMI_GEN_H
#define TVS_HMI_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl/lvgl.h"

/*Include all the widget and components of this library*/
#include "components/dashboard/album_gen.h"
#include "components/dashboard/background_gen.h"
#include "components/dashboard/battery_gen.h"
#include "components/dashboard/call_gen.h"
#include "components/dashboard/direction_gen.h"
#include "components/dashboard/icon_bar_gen.h"
#include "components/dashboard/indicator_gen.h"
#include "components/dashboard/left_ind_gen.h"
#include "components/dashboard/msg_gen.h"
#include "components/dashboard/music_bar_gen.h"
#include "components/dashboard/nav_bar_gen.h"
#include "components/dashboard/nav_box_gen.h"
#include "components/dashboard/needle_gen.h"
#include "components/dashboard/next_gen.h"
#include "components/dashboard/play_gen.h"
#include "components/dashboard/prev_gen.h"
#include "components/dashboard/right_ind_gen.h"
#include "components/dashboard/road_gen.h"
#include "components/dashboard/setting_gen.h"
#include "components/dashboard/speedarc_gen.h"
#include "components/dashboard/speedo_gen.h"
#include "components/dashboard/touch_gen.h"
#include "screens/Home/main_screen_gen.h"

/*********************
 *      DEFINES
 *********************/

// TODO: should these definitions be prefixed with the project name?


/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/* Global Styles */

/* Fonts */
extern lv_font_t * font_title;
extern lv_font_t * font_subtitle;

/* Images */
extern const void * img_wifi;
extern const void * img_bluetooth;
extern const void * img_bell;
extern const void * img_tvs;
extern const void * img_speed;
extern const void * img_back;
extern const void * img_arc;
extern const void * img_indicator;
extern const void * img_needle;
extern const void * img_left_ind;
extern const void * img_right_ind;
extern const void * img_music_bar;
extern const void * img_nav_bar;
extern const void * img_nav_box;
extern const void * img_next;
extern const void * img_prev_music;
extern const void * img_icon_bar;
extern const void * img_album;
extern const void * img_play;
extern const void * img_battery;
extern const void * img_call;
extern const void * img_msg;
extern const void * img_setting;
extern const void * img_touch;
extern const void * img_direction;
extern const void * img_road;

/* Subjects */

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/* callbacks */

/**
 * Initialize the component library
 */

void tvs_hmi_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*TVS_HMI_GEN_H*/
