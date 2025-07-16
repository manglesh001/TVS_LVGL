/**
 * @file Hello_gen.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "Hello_gen.h"

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
lv_subject_t subject_temp2;
lv_subject_t subject_temp3;
lv_subject_t subject_hide;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void Hello_init_gen(const char * asset_path)
{
    char buf[256];

    /* Global Styles */

    /* Subjects */
    lv_subject_init_int(&subject_temp1, 10);
    lv_subject_init_int(&subject_temp2, 20);
    lv_subject_init_int(&subject_temp3, 30);
    lv_subject_init_int(&subject_hide, 0);

    /* Fonts */

    /* Images */

    #if LV_USE_XML
        dark_slider_register();
        slider_box_register();



        lv_xml_register_subject(NULL, "temp1", &subject_temp1);
        lv_xml_register_subject(NULL, "temp2", &subject_temp2);
        lv_xml_register_subject(NULL, "temp3", &subject_temp3);
        lv_xml_register_subject(NULL, "hide", &subject_hide);

    #endif
}

/* callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/
