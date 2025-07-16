/**
 * @file thermostat_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "thermostat_gen.h"
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

lv_obj_t * thermostat_create(lv_obj_t * parent, lv_subject_t * temp)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * lv_arc_1 = lv_arc_create(parent);
        lv_obj_set_width(lv_arc_1, 95);
    lv_obj_set_height(lv_arc_1, 80);
    lv_obj_set_x(lv_arc_1, 32);
    lv_obj_set_y(lv_arc_1, 30);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_arc_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/