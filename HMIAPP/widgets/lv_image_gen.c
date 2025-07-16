/**
 * @file lv_image_gen.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lv_image_private_gen.h"
#include "lvgl/src/core/lv_obj_class_private.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  GLOBAL PROTOTYPES
 **********************/

void lv_image_constructor_hook(lv_obj_t * obj);
void lv_image_destructor_hook(lv_obj_t * obj);
void lv_image_event_hook(lv_event_t * e);

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void lv_image_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_image_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_image_event(const lv_obj_class_t * class_p, lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/

const lv_obj_class_t lv_image_class = {
    .base_class = &lv_obj_class,
    .constructor_cb = lv_image_constructor,
    .destructor_cb = lv_image_destructor,
    .event_cb = lv_image_event,
    .instance_size = sizeof(lv_image_t),
    .editable = 1,
    .name = "lv_image"
};

/**********************
 *   GLOBAL FUNCTIONS
 **********************/


lv_obj_t * lv_image_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(&lv_image_class, parent);
    lv_obj_class_init_obj(obj);
    return obj;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/


static void lv_image_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    lv_image_t * widget = (lv_image_t *)obj;
    
    static bool style_inited = false;

    if(!style_inited) {
        
        style_inited = true;
    }


    lv_image_constructor_hook(obj);

    LV_TRACE_OBJ_CREATE("finished");
}

static void lv_image_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);

    lv_image_destructor_hook(obj);
}

static void lv_image_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    /* Call the ancestor's event handler */
    res = lv_obj_event_base(&lv_image_class, e);
    if(res != LV_RESULT_OK) return;

    lv_image_event_hook(e);
}