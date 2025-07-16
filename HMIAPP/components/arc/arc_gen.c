/**
 * @file arc_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "arc_gen.h"
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

lv_obj_t * arc_create(lv_obj_t * parent, lv_subject_t * main)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * lv_arc_1 = lv_arc_create(parent);
        lv_obj_set_style_pad_left(lv_arc_1, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(lv_arc_1, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(lv_arc_1, 388);
    lv_obj_set_height(lv_arc_1, 320);
    lv_obj_set_x(lv_arc_1, -9);
    lv_obj_set_y(lv_arc_1, -22);

    lv_obj_t * lv_label_1 = lv_label_create(lv_arc_1);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_arc_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/