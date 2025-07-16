#include "lvgl/lvgl.h"
#include "lv_drivers/sdl/sdl.h"

int main(void) {
    lv_init();
    sdl_init();

    lv_disp_draw_buf_t draw_buf;
    static lv_color_t buf[800 * 480];
    lv_disp_draw_buf_init(&draw_buf, buf, NULL, 800 * 480);

    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.flush_cb = sdl_display_flush;
    disp_drv.draw_buf = &draw_buf;
    disp_drv.hor_res = 800;
    disp_drv.ver_res = 480;
    lv_disp_drv_register(&disp_drv);

    lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = sdl_mouse_read;
    lv_indev_drv_register(&indev_drv);

    lv_obj_t *label = lv_label_create(lv_scr_act());
    lv_label_set_text(label, "Hello, LVGL on Windows!");
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);

    while (1) {
        lv_timer_handler();
        SDL_Delay(5);
    }

    return 0;
}
