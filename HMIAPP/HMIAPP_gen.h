/**
 * @file HMIAPP_gen.h
 */

#ifndef HMIAPP_GEN_H
#define HMIAPP_GEN_H

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
#include "widgets/lv_image_gen.h"
#include "components/arc/arc_gen.h"
#include "components/button/button_gen.h"
#include "components/checkbox/checkbox_gen.h"
#include "components/column/column_gen.h"
#include "components/dashboard/album_gen.h"
#include "components/dashboard/background_gen.h"
#include "components/dashboard/icon_bar_gen.h"
#include "components/dashboard/indicator_gen.h"
#include "components/dashboard/left_ind_gen.h"
#include "components/dashboard/music_bar_gen.h"
#include "components/dashboard/nav_bar_gen.h"
#include "components/dashboard/nav_box_gen.h"
#include "components/dashboard/needle_gen.h"
#include "components/dashboard/next_gen.h"
#include "components/dashboard/play_gen.h"
#include "components/dashboard/prev_gen.h"
#include "components/dashboard/right_ind_gen.h"
#include "components/dashboard/speedarc_gen.h"
#include "components/dashboard/speedo_gen.h"
#include "components/dropdown/dropmenu_gen.h"
#include "components/header/header_gen.h"
#include "components/icon/icon_gen.h"
#include "components/image/images_gen.h"
#include "components/radiobutton/radiobutton_gen.h"
#include "components/row/row_gen.h"
#include "components/setclock/setclock_gen.h"
#include "components/slider/slider_gen.h"
#include "components/subtitle/subtitle_gen.h"
#include "components/title/title_gen.h"
#include "screens/Home/main_screen_gen.h"
#include "screens/settings/settings_gen.h"

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
extern const void * img_needle;

/* Subjects */
extern lv_subject_t subject_hours;
extern lv_subject_t subject_mins;
extern lv_subject_t subject_age;
extern lv_subject_t subject_bluetooth_on;
extern lv_subject_t subject_wifi_on;
extern lv_subject_t subject_notification_on;
extern lv_subject_t subject_hour_edited;
extern lv_subject_t subject_min_edited;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/* callbacks */

/**
 * Initialize the component library
 */

void HMIAPP_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*HMIAPP_GEN_H*/
