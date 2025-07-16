/**
 * @file background_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "background_gen.h"
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

lv_obj_t * background_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;

    static bool style_inited = false;

    if (!style_inited) {
        
        lv_style_init(&style_main);
        lv_style_set_width(&style_main, 1280);
        lv_style_set_height(&style_main, 720);

        style_inited = true;
    }

    lv_obj_t * lv_image_1 = lv_image_create(parent);
        lv_image_set_src(lv_image_1, img_back);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_image_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/