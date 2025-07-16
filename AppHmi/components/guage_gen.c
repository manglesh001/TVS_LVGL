/**
 * @file guage_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "guage_gen.h"
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

lv_obj_t * guage_create(lv_obj_t * parent, lv_subject_t * subject)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_indicator;
    static lv_style_t style_knob;

    static bool style_inited = false;

    if (!style_inited) {
        
        lv_style_init(&style_main);
        lv_style_set_arc_width(&style_main, 15);
        lv_style_set_bg_color(&style_main, lv_color_hex(0x312a97));
        lv_style_set_bg_opa(&style_main, 100);
        lv_style_set_radius(&style_main, 50);
        lv_style_set_pad_all(&style_main, 28);
        lv_style_set_arc_color(&style_main, lv_color_hex(0x98313c));

        lv_style_init(&style_indicator);
        lv_style_set_arc_color(&style_indicator, lv_color_hex(0xead618));
        lv_style_set_arc_width(&style_indicator, 15);

        lv_style_init(&style_knob);
        lv_style_set_bg_opa(&style_knob, 0);

        style_inited = true;
    }

    lv_obj_t * lv_arc_1 = lv_arc_create(parent);
        lv_obj_add_style(lv_arc_1, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_arc_1, &style_indicator, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_arc_1, &style_knob, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_width(lv_arc_1, 245);
    lv_obj_set_height(lv_arc_1, 222);
    
    lv_arc_bind_value(lv_arc_1, subject);
    lv_obj_set_x(lv_arc_1, 153);
    lv_obj_set_y(lv_arc_1, 40);

    lv_obj_t * lv_label_1 = lv_label_create(lv_arc_1);
    lv_label_set_text(lv_label_1, "80 KM/H");
    lv_obj_set_style_pad_all(lv_label_1, 49, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(lv_label_1, 60, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_label_bind_text(lv_label_1, subject, NULL);
    lv_obj_set_x(lv_label_1, 0);
    lv_obj_set_y(lv_label_1, 0);
    lv_obj_set_width(lv_label_1, 132);
    lv_obj_set_height(lv_label_1, 118);

    lv_obj_t * lv_label_2 = lv_label_create(lv_arc_1);
    lv_label_set_text(lv_label_2, "KM/H");
    lv_obj_set_style_pad_all(lv_label_2, 65, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_x(lv_label_2, 5);
    lv_obj_set_y(lv_label_2, 8);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_arc_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/