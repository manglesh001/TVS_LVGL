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

    lv_obj_t * speedo_1 = speedo_create(lv_obj_1);
    lv_obj_set_x(speedo_1, 326);
    lv_obj_set_y(speedo_1, 71);
    lv_obj_set_width(speedo_1, 376);
    lv_obj_set_height(speedo_1, 356);

    lv_obj_t * speedarc_1 = speedarc_create(lv_obj_1);
    lv_obj_set_x(speedarc_1, 149);
    lv_obj_set_y(speedarc_1, 126);
    lv_obj_set_width(speedarc_1, 508);
    lv_obj_set_height(speedarc_1, 414);

    lv_obj_t * indicator_1 = indicator_create(lv_obj_1);
    lv_obj_set_x(indicator_1, 188);
    lv_obj_set_y(indicator_1, 145);
    lv_obj_set_width(indicator_1, 125);
    lv_obj_set_height(indicator_1, 361);

    lv_obj_t * needle_1 = needle_create(lv_obj_1);
    lv_obj_set_x(needle_1, 288);
    lv_obj_set_y(needle_1, 124);

    lv_obj_t * album_1 = album_create(lv_obj_1);
    lv_obj_set_x(album_1, 890);
    lv_obj_set_y(album_1, 70);
    lv_obj_set_width(album_1, 192);
    lv_obj_set_height(album_1, 192);

    lv_obj_t * left_ind_1 = left_ind_create(lv_obj_1);
    lv_obj_set_x(left_ind_1, 106);
    lv_obj_set_y(left_ind_1, 12);

    lv_obj_t * right_ind_1 = right_ind_create(lv_obj_1);
    lv_obj_set_x(right_ind_1, 540);
    lv_obj_set_y(right_ind_1, 10);

    lv_obj_t * music_bar_1 = music_bar_create(lv_obj_1);
    lv_obj_set_x(music_bar_1, 5);
    lv_obj_set_y(music_bar_1, 183);

    lv_obj_t * nav_bar_1 = nav_bar_create(lv_obj_1);
    lv_obj_set_x(nav_bar_1, -5);
    lv_obj_set_y(nav_bar_1, 199);
    lv_obj_set_width(nav_bar_1, 305);
    lv_obj_set_height(nav_bar_1, 51);

    lv_obj_t * nav_box_1 = nav_box_create(lv_obj_1);
    lv_obj_set_x(nav_box_1, 0);
    lv_obj_set_y(nav_box_1, 58);

    lv_obj_t * icon_bar_1 = icon_bar_create(lv_obj_1);
    lv_obj_set_x(icon_bar_1, 32);
    lv_obj_set_y(icon_bar_1, 576);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/