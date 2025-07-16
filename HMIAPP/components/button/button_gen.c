/**
 * @file button_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "button_gen.h"
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

lv_obj_t * button_create(lv_obj_t * parent, const char * text)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;

    static bool style_inited = false;

    if (!style_inited) {
        
        lv_style_init(&style_main);
        lv_style_set_width(&style_main, 90);
        lv_style_set_height(&style_main, 40);
        lv_style_set_radius(&style_main, 8);
        lv_style_set_bg_color(&style_main, lv_color_hex(0x007AFF));
        lv_style_set_text_color(&style_main, lv_color_hex(0xffffff));
        lv_style_set_text_font(&style_main, font_subtitle);
        lv_style_set_border_width(&style_main, 0);
        lv_style_set_pad_all(&style_main, 12);
        lv_style_set_pad_left(&style_main, 20);

        style_inited = true;
    }

    lv_obj_t * lv_button_1 = lv_button_create(parent);
        lv_obj_add_style(lv_button_1, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);

    subtitle_create(lv_button_1, text);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_button_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/