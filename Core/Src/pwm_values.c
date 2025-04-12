/*
 * pwm_values.c
 *
 *  Created on: Mar 29, 2025
 *      Author: renox
 */

#include "LCD1602.h"
#include "stm32f1xx_hal.h"

void pwm_8(void)
{
    TIM2->CCR1 = 8;
     lcd_put_cur(1, 0);
     lcd_send_string("Fan speed: 8%");
}

void pwm_10(void)
{
    TIM2->CCR1 = 10;
     lcd_put_cur(1, 0);
     lcd_send_string("Fan speed: 10%");
}

void pwm_30(void)
{
    TIM2->CCR1 = 30;
     lcd_put_cur(1, 0);
     lcd_send_string("Fan speed: 30%");
}

void pwm_45(void)
{
    TIM2->CCR1 = 45;
     lcd_put_cur(1, 0);
     lcd_send_string("Fan speed: 45%");
}

void pwm_55(void)
{
    TIM2->CCR1 = 55;
     lcd_put_cur(1, 0);
     lcd_send_string("Fan speed: 55%");
}

void pwm_65(void)
{
    TIM2->CCR1 = 65;
     lcd_put_cur(1, 0);
     lcd_send_string("Fan speed: 65%");
}

void pwm_80(void)
{
    TIM2->CCR1 = 80;
     lcd_put_cur(1, 0);
     lcd_send_string("Fan speed: 80%");
}

void pwm_90(void)
{
    TIM2->CCR1 = 90;
     lcd_put_cur(1, 0);
     lcd_send_string("Fan speed: 90%");
}

void pwm_95(void)
{
    TIM2->CCR1 = 95;
     lcd_put_cur(1, 0);
     lcd_send_string("Fan speed: 95%");
}

void pwm_100(void)
{
    TIM2->CCR1 = 100;
     lcd_put_cur(1, 0);
     lcd_send_string("Fan speed: 100%");
}
