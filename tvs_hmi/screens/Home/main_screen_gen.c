/**
 * @file main_screen_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "main_screen_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * main_screen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if(!style_inited) {
        
        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(NULL);
        lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, lv_pct(100));

    lv_obj_t * background_1 = background_create(lv_obj_1);
    lv_obj_set_x(background_1, -93);
    lv_obj_set_y(background_1, -15);
    lv_obj_set_width(background_1, 1432);
    lv_obj_set_height(background_1, 733);

    lv_obj_t * speedo_1 = speedo_create(lv_obj_1);
    lv_obj_set_x(speedo_1, 411);
    lv_obj_set_y(speedo_1, 195);
    lv_obj_set_width(speedo_1, 376);
    lv_obj_set_height(speedo_1, 356);

    lv_obj_t * needle_1 = needle_create(lv_obj_1);
    lv_obj_set_x(needle_1, 460);
    lv_obj_set_y(needle_1, 200);

    lv_obj_t * speedarc_1 = speedarc_create(lv_obj_1);
    lv_obj_set_x(speedarc_1, 347);
    lv_obj_set_y(speedarc_1, 144);
    lv_obj_set_width(speedarc_1, 508);
    lv_obj_set_height(speedarc_1, 414);

    lv_obj_t * indicator_1 = indicator_create(lv_obj_1);
    lv_obj_set_x(indicator_1, 370);
    lv_obj_set_y(indicator_1, 194);
    lv_obj_set_width(indicator_1, 125);
    lv_obj_set_height(indicator_1, 361);

    lv_obj_t * album_1 = album_create(lv_obj_1);
    lv_obj_set_x(album_1, 948);
    lv_obj_set_y(album_1, 173);
    lv_obj_set_width(album_1, 200);
    lv_obj_set_height(album_1, 204);

    lv_obj_t * left_ind_1 = left_ind_create(lv_obj_1);
    lv_obj_set_x(left_ind_1, 106);
    lv_obj_set_y(left_ind_1, 12);

    lv_obj_t * right_ind_1 = right_ind_create(lv_obj_1);
    lv_obj_set_x(right_ind_1, 1020);
    lv_obj_set_y(right_ind_1, 6);

    lv_obj_t * music_bar_1 = music_bar_create(lv_obj_1);
    lv_obj_set_x(music_bar_1, 909);
    lv_obj_set_y(music_bar_1, 541);
    lv_obj_set_width(music_bar_1, 305);
    lv_obj_set_height(music_bar_1, 28);

    lv_obj_t * nav_box_1 = nav_box_create(lv_obj_1);
    lv_obj_set_x(nav_box_1, 1);
    lv_obj_set_y(nav_box_1, 118);

    lv_obj_t * icon_bar_1 = icon_bar_create(lv_obj_1);
    lv_obj_set_x(icon_bar_1, 247);
    lv_obj_set_y(icon_bar_1, 605);

    lv_obj_t * play_1 = play_create(lv_obj_1);
    lv_obj_set_x(play_1, 1024);
    lv_obj_set_y(play_1, 436);

    lv_obj_t * prev_1 = prev_create(lv_obj_1);
    lv_obj_set_x(prev_1, 921);
    lv_obj_set_y(prev_1, 449);

    lv_obj_t * next_1 = next_create(lv_obj_1);
    lv_obj_set_x(next_1, 1129);
    lv_obj_set_y(next_1, 448);
    lv_obj_set_width(next_1, 54);
    lv_obj_set_height(next_1, 31);

    lv_obj_t * call_1 = call_create(lv_obj_1);
    lv_obj_set_x(call_1, 1096);
    lv_obj_set_y(call_1, 62);

    lv_obj_t * msg_1 = msg_create(lv_obj_1);
    lv_obj_set_x(msg_1, 1170);
    lv_obj_set_y(msg_1, 62);

    lv_obj_t * direction_1 = direction_create(lv_obj_1);
    lv_obj_set_x(direction_1, 40);
    lv_obj_set_y(direction_1, 138);

    lv_obj_t * battery_1 = battery_create(lv_obj_1);
    lv_obj_set_x(battery_1, 14);
    lv_obj_set_y(battery_1, 632);

    lv_obj_t * touch_1 = touch_create(lv_obj_1);
    lv_obj_set_x(touch_1, 864);
    lv_obj_set_y(touch_1, 2);

    lv_obj_t * setting_1 = setting_create(lv_obj_1);
    lv_obj_set_x(setting_1, 500);
    lv_obj_set_y(setting_1, 620);

    lv_obj_t * road_1 = road_create(lv_obj_1);
    lv_obj_set_x(road_1, -328);
    lv_obj_set_y(road_1, -104);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/