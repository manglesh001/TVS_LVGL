/**
 * @file AppHmi_gen.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "AppHmi_gen.h"

#if LV_USE_XML
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
lv_subject_t subject_temp1;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void AppHmi_init_gen(const char * asset_path)
{
    char buf[256];

    /* Global Styles */

    /* Subjects */
    lv_subject_init_int(&subject_temp1, 10);

    /* Fonts */

    /* Images */

    #if LV_USE_XML
        dark_slider_register();
        slider_box_register();



        lv_xml_register_subject(NULL, "temp1", &subject_temp1);

    #endif
}

/* callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/
