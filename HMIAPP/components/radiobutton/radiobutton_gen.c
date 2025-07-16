/**
 * @file radiobutton_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "radiobutton_gen.h"
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

lv_obj_t * radiobutton_create(lv_obj_t * parent, const char * text, lv_subject_t * subject)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_radio;
    static lv_style_t style_radio_checked;

    static bool style_inited = false;

    if (!style_inited) {
        
        lv_style_init(&style_main);
        lv_style_set_width(&style_main, LV_SIZE_CONTENT);
        lv_style_set_height(&style_main, LV_SIZE_CONTENT);
        lv_style_set_pad_row(&style_main, 8);

        lv_style_init(&style_radio);
        lv_style_set_radius(&style_radio, 50);
        lv_style_set_border_width(&style_radio, 2);
        lv_style_set_border_color(&style_radio, lv_color_hex(0xffffff));
        lv_style_set_width(&style_radio, 16);
        lv_style_set_height(&style_radio, 16);
        lv_style_set_bg_color(&style_radio, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&style_radio, 0);

        lv_style_init(&style_radio_checked);
        lv_style_set_bg_opa(&style_radio_checked, 255);
        lv_style_set_bg_color(&style_radio_checked, lv_color_hex(0xffffff));

        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(parent);
        lv_obj_add_style(lv_obj_1, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_add_style(lv_obj_2, &style_radio, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_obj_2, &style_radio_checked, LV_PART_MAIN | LV_STATE_DEFAULT);

    subtitle_create(lv_obj_1, text);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/