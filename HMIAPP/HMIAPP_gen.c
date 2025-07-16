/**
 * @file HMIAPP_gen.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "HMIAPP_gen.h"

#if LV_USE_XML
   #include "widgets/lv_image_private_gen.h"
   #include "LvglWindowsSimulator/HMIAPP\widgets/lv_image_private_gen.h"
   #include "widgets/dark_slider/dark_slider_private_gen.h"
   #include "widgets/slider_box/slider_box_private_gen.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/* Global Styles */

/* Fonts */
lv_font_t * font_title;
extern uint8_t Inter_SemiBold_ttf_data[];
extern size_t Inter_SemiBold_ttf_data_size;
lv_font_t * font_subtitle;

/* Images */
const void * img_wifi;
const void * img_bluetooth;
const void * img_bell;
const void * img_tvs;
const void * img_speed;
const void * img_back;
const void * img_arc;
const void * img_indicator;
const void * img_left_ind;
const void * img_right_ind;
const void * img_music_bar;
const void * img_nav_bar;
const void * img_nav_box;
const void * img_next;
const void * img_prev_music;
const void * img_icon_bar;
const void * img_album;
const void * img_play;
const void * img_needle;

/*Subjects*/
lv_subject_t subject_hours;
lv_subject_t subject_mins;
lv_subject_t subject_age;
lv_subject_t subject_bluetooth_on;
lv_subject_t subject_wifi_on;
lv_subject_t subject_notification_on;
lv_subject_t subject_hour_edited;
lv_subject_t subject_min_edited;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void HMIAPP_init_gen(const char * asset_path)
{
    char buf[256];

    /* Global Styles */

    /* Subjects */
    lv_subject_init_int(&subject_hours, 17);
    lv_subject_init_int(&subject_mins, 45);
    lv_subject_init_int(&subject_age, 17);
    lv_subject_init_int(&subject_bluetooth_on, 0);
    lv_subject_init_int(&subject_wifi_on, 0);
    lv_subject_init_int(&subject_notification_on, 0);
    lv_subject_init_int(&subject_hour_edited, 0);
    lv_subject_init_int(&subject_min_edited, 0);

    /* Fonts */
    /* create tiny ttf font 'font_title' from C array */
    font_title = lv_tiny_ttf_create_data(Inter_SemiBold_ttf_data, Inter_SemiBold_ttf_data_size, 20);
    /* create tiny ttf font 'font_subtitle' from C array */
    font_subtitle = lv_tiny_ttf_create_data(Inter_SemiBold_ttf_data, Inter_SemiBold_ttf_data_size, 14);

    /* Images */
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/wifi-solid.png");
    img_wifi = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/bluetooth-brands.png");
    img_bluetooth = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/bell-solid.png");
    img_bell = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/tvs-motor.png");
    img_tvs = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/SpeedometerCenter.png");
    img_speed = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/Background.png");
    img_back = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/SpeedMain.png");
    img_arc = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/SpeedometerIndicator.png");
    img_indicator = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/left_ind.png");
    img_left_ind = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/right_ind.png");
    img_right_ind = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/music_bar.png");
    img_music_bar = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/nav_bar.png");
    img_nav_bar = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/nav_box.png");
    img_nav_box = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/next.png");
    img_next = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/prev_music.png");
    img_prev_music = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/icon_bar.png");
    img_icon_bar = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/album_circle.png");
    img_album = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/play.png");
    img_play = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/Needle.png");
    img_needle = lv_strdup(buf);

    #if LV_USE_XML
        lv_image_register();
        lv_image_register();
        dark_slider_register();
        slider_box_register();

        lv_xml_register_font(NULL, "font_title", font_title);
        lv_xml_register_font(NULL, "font_subtitle", font_subtitle);

        lv_xml_register_image(NULL, "img_wifi", img_wifi);
        lv_xml_register_image(NULL, "img_bluetooth", img_bluetooth);
        lv_xml_register_image(NULL, "img_bell", img_bell);
        lv_xml_register_image(NULL, "img_tvs", img_tvs);
        lv_xml_register_image(NULL, "img_speed", img_speed);
        lv_xml_register_image(NULL, "img_back", img_back);
        lv_xml_register_image(NULL, "img_arc", img_arc);
        lv_xml_register_image(NULL, "img_indicator", img_indicator);
        lv_xml_register_image(NULL, "img_left_ind", img_left_ind);
        lv_xml_register_image(NULL, "img_right_ind", img_right_ind);
        lv_xml_register_image(NULL, "img_music_bar", img_music_bar);
        lv_xml_register_image(NULL, "img_nav_bar", img_nav_bar);
        lv_xml_register_image(NULL, "img_nav_box", img_nav_box);
        lv_xml_register_image(NULL, "img_next", img_next);
        lv_xml_register_image(NULL, "img_prev_music", img_prev_music);
        lv_xml_register_image(NULL, "img_icon_bar", img_icon_bar);
        lv_xml_register_image(NULL, "img_album", img_album);
        lv_xml_register_image(NULL, "img_play", img_play);
        lv_xml_register_image(NULL, "img_needle", img_needle);

        lv_xml_register_subject(NULL, "hours", &subject_hours);
        lv_xml_register_subject(NULL, "mins", &subject_mins);
        lv_xml_register_subject(NULL, "age", &subject_age);
        lv_xml_register_subject(NULL, "bluetooth_on", &subject_bluetooth_on);
        lv_xml_register_subject(NULL, "wifi_on", &subject_wifi_on);
        lv_xml_register_subject(NULL, "notification_on", &subject_notification_on);
        lv_xml_register_subject(NULL, "hour_edited", &subject_hour_edited);
        lv_xml_register_subject(NULL, "min_edited", &subject_min_edited);

    #endif
}

/* callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/
