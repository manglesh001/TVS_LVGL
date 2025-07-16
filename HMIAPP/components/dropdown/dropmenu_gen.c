/**
 * @file dropmenu_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "dropmenu_gen.h"
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

lv_obj_t * dropmenu_create(lv_obj_t * parent, lv_subject_t * selected_language)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_label_style;
    static lv_style_t style_dropdown_style;

    static bool style_inited = false;

    if (!style_inited) {
        
        lv_style_init(&style_label_style);
        lv_style_set_text_font(&style_label_style, font_subtitle);
        lv_style_set_text_color(&style_label_style, lv_color_hex(0x000000));

        lv_style_init(&style_dropdown_style);
        lv_style_set_width(&style_dropdown_style, 320);
        lv_style_set_height(&style_dropdown_style, 240);
        lv_style_set_bg_color(&style_dropdown_style, lv_color_hex(0xeeeeee));

        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(parent);
    

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/