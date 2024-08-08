/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author        Notes
 * 2021-10-17     Meco Man      first version
 * 2022-05-10     Meco Man      improve rt-thread initialization process
 */
#include <lvgl.h>
#include <lv_port_disp.h>
#include <temp.h>

lv_obj_t* label;


void lv_user_gui_init(void)
{
    /* display demo; you may replace with your LVGL application at here */
//    extern void lv_demo_pingpong(void);
//    extern lv_demo_calendar();
//    lv_demo_calendar();


//    extern void lv_demo_music(void);
//    lv_demo_music();


    // extern void lv_demo_benchmark(void);
    // lv_demo_benchmark();

    lv_port_disp_init();
    lv_obj_t  * obj = lv_obj_create(lv_scr_act());
    lv_obj_set_size(obj, 100, 100);
    lv_obj_align(obj, LV_ALIGN_CENTER, 0, 0);
     lv_obj_set_style_bg_color(obj,lv_color_hex(0x00ff00),LV_STATE_DEFAULT);

     label = lv_label_create(obj);
     
    
    // lv_snprintf(buf, sizeof(buf), "Temp: %.2f C", Temp);
    lv_label_set_text(label,"Temp:25");
    lv_obj_align(label,LV_ALIGN_CENTER,0,0);
//    extern lv_demo_widgets();
//    lv_demo_widgets();
}
