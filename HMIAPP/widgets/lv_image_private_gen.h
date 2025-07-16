/**
 * @file lv_image_private_gen.h
 *
 */

#ifndef LV_IMAGE_PRIVATE_H
#define LV_IMAGE_PRIVATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/src/core/lv_obj_private.h"
#include "lv_image.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

typedef struct {
    lv_obj_t obj;  /* Base widget to extend */
    void * lv_image_align;
    void * src;
    void * inner_align;
    int32_t rotation;
    int32_t scale_x;
    int32_t scale_y;
    int32_t pivot_x;
    int32_t pivot_y;
} lv_image_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

#if LV_USE_XML
    void lv_image_register(void);
#endif

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_IMAGE_PRIVATE_H*/