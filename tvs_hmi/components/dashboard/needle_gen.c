/**
 * @file needle_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "needle_gen.h"
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

lv_obj_t * needle_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * lv_image_1 = lv_image_create(parent);
        lv_image_set_src(lv_image_1, img_needle);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_image_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/