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
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_COLUMN);

    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_label_set_text(lv_label_1, "SpeedoMeter");
    lv_obj_set_style_pad_left(lv_label_1, 80, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(lv_label_1, 197);
    lv_obj_set_height(lv_label_1, 21);

    lv_obj_t * guage_1 = guage_create(lv_obj_1, &subject_temp1);
    lv_obj_set_width(guage_1, 290);
    lv_obj_set_height(guage_1, 178);
    lv_obj_set_style_pad_left(guage_1, 60, LV_PART_MAIN | LV_STATE_DEFAULT);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/