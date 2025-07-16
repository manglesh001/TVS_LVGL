/**
 * @file lv_image_gen.h
 *
 */

#ifndef LV_IMAGE_GEN_H
#define LV_IMAGE_GEN_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/lvgl.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Create a lv_image object
 * @param parent pointer to an object, it will be the parent of the new lv_image
 * @return pointer to the created lv_image
 */
lv_obj_t * lv_image_create(lv_obj_t * parent);


/**
 * Set the lv_image_align
 * @param obj   pointer to a lv_image
 * @param lv_image_align  lv_image_align
 */
void lv_image_set_lv_image_align(lv_obj_t * obj, void * lv_image_align);

/**
 * Set the src
 * @param obj   pointer to a lv_image
 * @param src  src
 */
void lv_image_set_src(lv_obj_t * obj, void * src);

/**
 * Set the inner_align
 * @param obj   pointer to a lv_image
 * @param inner_align  inner_align
 */
void lv_image_set_inner_align(lv_obj_t * obj, void * inner_align);

/**
 * Set the rotation
 * @param obj   pointer to a lv_image
 * @param rotation  rotation
 */
void lv_image_set_rotation(lv_obj_t * obj, int32_t rotation);

/**
 * Set the scale_x
 * @param obj   pointer to a lv_image
 * @param scale_x  scale_x
 */
void lv_image_set_scale_x(lv_obj_t * obj, int32_t scale_x);

/**
 * Set the scale_y
 * @param obj   pointer to a lv_image
 * @param scale_y  scale_y
 */
void lv_image_set_scale_y(lv_obj_t * obj, int32_t scale_y);

/**
 * Set the pivot_x
 * @param obj   pointer to a lv_image
 * @param pivot_x  pivot_x
 */
void lv_image_set_pivot_x(lv_obj_t * obj, int32_t pivot_x);

/**
 * Set the pivot_y
 * @param obj   pointer to a lv_image
 * @param pivot_y  pivot_y
 */
void lv_image_set_pivot_y(lv_obj_t * obj, int32_t pivot_y);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_IMAGE_GEN_H*/