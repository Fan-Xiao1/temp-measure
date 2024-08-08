#ifndef TEMP_H
#define TEMP_H

#include <rtthread.h>
#include <lvgl.h>


void AHT10_Test(void *parameter);
void AHT10_Creat_Thread(void);
extern float Humi, Temp;
extern lv_obj_t* label;
extern char buf[32];
#endif