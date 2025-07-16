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
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW_WRAP);

    thermostat_create(lv_obj_1, &subject_temp1);

    thermostat_create(lv_obj_1, &subject_temp2);

    lv_obj_t * thermostat_3 = thermostat_create(lv_obj_1, &subject_temp3);
    lv_obj_bind_flag_if_eq(thermostat_3, &subject_hide, LV_OBJ_FLAG_HIDDEN, 1);

    lv_obj_t * lv_checkbox_1 = lv_checkbox_create(lv_obj_1);
    lv_checkbox_set_text(lv_checkbox_1, "Hide arc3");
    
    lv_obj_bind_checked(lv_checkbox_1, &subject_hide);
    lv_obj_set_flag(lv_checkbox_1, LV_OBJ_FLAG_FLEX_IN_NEW_TRACK, true);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/