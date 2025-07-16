/**
 * @file testt_gen.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "testt_gen.h"

#if LV_USE_XML
   #include "LvglWindowsSimulator/HMIAPP\widgets/lv_image_private_gen.h"
   #include "widgets/dark_slider/dark_slider_private_gen.h"
   #include "widgets/slider_box/slider_box_private_gen.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/* Global Styles */

/* Fonts */


/* Images */

/*Subjects*/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void testt_init_gen(const char * asset_path)
{
    char buf[256];

    /* Global Styles */

    /* Subjects */

    /* Fonts */

    /* Images */

    #if LV_USE_XML
        lv_image_register();
        dark_slider_register();
        slider_box_register();




    #endif
}

/* callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/
