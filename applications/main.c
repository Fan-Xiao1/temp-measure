/*
 * Copyright (c) 2023, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2023-07-06     Supperthomas first version
 * 2023-12-03     Meco Man     support nano version
 */
#include <hello.h>
#include <board.h>
#include <rtthread.h>
#include <drv_gpio.h>
#include <aht10.h>
#include <rtdbg.h>
#include <lvgl.h>
#include <temp.h>
#ifndef RT_USING_NANO
#include <rtdevice.h>
#endif /* RT_USING_NANO */

// #define GPIO_LED_B    GET_PIN(F, 11)
// #define GPIO_LED_R    GET_PIN(F, 12)
// #define PIN_KEY1      GET_PIN(C, 0)
// #define PIN_WK_UP      GET_PIN(C, 1)

// void irq_callback(void *args)
// {
// rt_uint32_t sign = (rt_uint32_t) args;
// switch (sign)
// {
// case PIN_WK_UP :
// rt_pin_write(PIN_BEEP,PIN_HIGH);
// rt_kprintf("WK_UP interrupt. beep on.");
// break;
// case PIN_KEY1 :
// rt_pin_write(PIN_BEEP,PIN_LOW);
// rt_kprintf("KEY1 interrupt. beep off.");
// break;
// default:
// LOG_E("error sign= %d !", sign);
// break;
// }
// }
char buf[32];
int main(void)
{
    rt_pin_mode(GET_PIN(B, 0), PIN_MODE_OUTPUT);


//     rt_pin_mode(PIN_KEY1, PIN_MODE_INPUT_PULLUP);
// rt_pin_mode(PIN_WK_UP, PIN_MODE_INPUT_PULLUP);
// /* 设 置 蜂 鸣 器 引 脚 为 输 出 模 式 */
// rt_pin_mode(PIN_BEEP, PIN_MODE_OUTPUT);

// /* 设 置 按 键 中 断 模 式 与 中 断 回 调 函 数 */
// rt_pin_attach_irq(PIN_KEY1, PIN_IRQ_MODE_FALLING, irq_callback, (void *)
// PIN_KEY1);
// rt_pin_attach_irq(PIN_WK_UP, PIN_IRQ_MODE_FALLING, irq_callback, (void *)
// PIN_WK_UP);
//     rt_pin_irq_enable(PIN_KEY1, PIN_IRQ_ENABLE);
// rt_pin_irq_enable(PIN_WK_UP, PIN_IRQ_ENABLE);
    while (1)
    {
       
        AHT10_Creat_Thread();
        
        // rt_sprintf(buf,"Temp: %d C", Temp);
        // lv_label_set_text(label,buf);

        // rt_pin_write(PIN_BEEP,PIN_HIGH);
    
        // // Print_Hello();
        // // rt_thread_mdelay(1000);
        return RT_EOK;
    }
    
}
