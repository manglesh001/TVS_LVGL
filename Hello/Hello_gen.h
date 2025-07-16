/**
 * @file Hello_gen.h
 */

#ifndef HELLO_GEN_H
#define HELLO_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl/lvgl.h"

/*Include all the widget and components of this library*/
#include "components/thermostat_gen.h"
#include "screens/main_screen_gen.h"

/*********************
 *      DEFINES
 *********************/

// TODO: should these definitions be prefixed with the project name?


/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/* Global Styles */

/* Fonts */


/* Images */

/* Subjects */
extern lv_subject_t subject_temp1;
extern lv_subject_t subject_temp2;
extern lv_subject_t subject_temp3;
extern lv_subject_t subject_hide;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/* callbacks */

/**
 * Initialize the component library
 */

void Hello_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*HELLO_GEN_H*/
