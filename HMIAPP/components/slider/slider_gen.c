/**
 * @file slider_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "slider_gen.h"
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

lv_obj_t * slider_create(lv_obj_t * parent, lv_subject_t * brightness)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_label_style;
    static lv_style_t style_slider_style;

    static bool style_inited = false;

    if (!style_inited) {
        
        lv_style_init(&style_main);
        lv_style_set_x(&style_main, 500);
        lv_style_set_y(&style_main, 200);

        lv_style_init(&style_label_style);
        lv_style_set_text_font(&style_label_style, font_subtitle);
        lv_style_set_text_color(&style_label_style, lv_color_hex(0x64de1b));

        lv_style_init(&style_slider_style);
        lv_style_set_width(&style_slider_style, 300);
        lv_style_set_height(&style_slider_style, 21);
        lv_style_set_bg_color(&style_slider_style, lv_color_hex(0x1ddb32));
        lv_style_set_pad_all(&style_slider_style, 4);

        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(parent);
        lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_pad_all(lv_obj_1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(lv_obj_1, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(lv_obj_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_height(lv_obj_1, 240);
    lv_obj_set_width(lv_obj_1, 320);

    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_add_style(lv_label_1, &style_label_style, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(lv_label_1, "Brightness");

    lv_obj_t * lv_slider_1 = lv_slider_create(lv_obj_1);
    lv_obj_add_style(lv_slider_1, &style_slider_style, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_slider_bind_value(lv_slider_1, brightness);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/