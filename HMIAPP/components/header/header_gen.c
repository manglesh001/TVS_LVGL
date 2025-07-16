/**
 * @file header_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "header_gen.h"
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

lv_obj_t * header_create(lv_obj_t * parent, const char * title)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_button_left;
    static lv_style_t style_button_right;

    static bool style_inited = false;

    if (!style_inited) {
        
        lv_style_init(&style_main);
        lv_style_set_bg_color(&style_main, lv_color_hex(0x34304a));
        lv_style_set_border_width(&style_main, 2);
        lv_style_set_border_side(&style_main, LV_BORDER_SIDE_BOTTOM);
        lv_style_set_border_color(&style_main, lv_color_hex(0x47d81f));
        lv_style_set_radius(&style_main, 0);
        lv_style_set_width(&style_main, lv_pct(100));
        lv_style_set_height(&style_main, 32);
        lv_style_set_pad_hor(&style_main, 6);
        lv_style_set_layout(&style_main, LV_LAYOUT_FLEX);
        lv_style_set_flex_cross_place(&style_main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_track_place(&style_main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_flow(&style_main, LV_FLEX_FLOW_ROW);
        lv_style_set_text_color(&style_main, lv_color_hex(0xe1d8d8));

        lv_style_init(&style_button_left);
        lv_style_set_bg_color(&style_button_left, lv_color_hex(0xde1717));
        lv_style_set_y(&style_button_left, -5);
        lv_style_set_x(&style_button_left, 5);

        lv_style_init(&style_button_right);
        lv_style_set_y(&style_button_right, -5);
        lv_style_set_x(&style_button_right, -5);

        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(parent);
        lv_obj_add_style(lv_obj_1, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_flag(lv_obj_1, LV_OBJ_FLAG_SCROLLABLE, false);

    lv_obj_t * icon_1 = icon_create(lv_obj_1);
    lv_obj_bind_state_if_eq(icon_1, &subject_tvs_on, LV_STATE_DISABLED, 0);

    lv_obj_t * subtitle_1 = subtitle_create(lv_obj_1, title);
    lv_obj_set_flex_grow(subtitle_1, 1);

    lv_obj_t * icon_2 = icon_create(lv_obj_1);
    lv_obj_bind_state_if_eq(icon_2, &subject_notification_on, LV_STATE_DISABLED, 0);

    lv_obj_t * icon_3 = icon_create(lv_obj_1);
    lv_obj_bind_state_if_eq(icon_3, &subject_bluetooth_on, LV_STATE_DISABLED, 0);

    lv_obj_t * icon_4 = icon_create(lv_obj_1);
    lv_obj_bind_state_if_eq(icon_4, &subject_wifi_on, LV_STATE_DISABLED, 0);

    lv_obj_t * row_1 = row_create(lv_obj_1);
    lv_obj_set_width(row_1, 40);
    lv_obj_set_style_flex_main_place(row_1, LV_FLEX_ALIGN_END, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(row_1, lv_color_hex(0xcaafaf), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(row_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    subtitle_create(row_1, "TVS MOTOR");

    subtitle_create(row_1, ":");

    subtitle_create(row_1, "TVS MOTOR");


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/