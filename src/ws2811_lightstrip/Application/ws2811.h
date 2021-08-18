/**
 * @file    : ws2811.h
 * @author  : ZOOM (easyzoom.wang@gmail.com)
 * @version : 1.0
 * @date    : 2021-08-18
 * @brief   : None
 * 
 * @copyright (c) 2021 Robot
 * 
**/
#ifndef _WS2811_H
#define _WS2811_H
#include "stm32f4xx_hal.h"

#define WS2811_LOW  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET)
#define WS2811_HIGH HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET)
#define SEND_TIMES 8

void WS2811_Init(void);
void Reset(void);
void Send_Single_Data(const uint8_t *data);
void Send_String_Data(const uint8_t *data,uint8_t size);
void RGB_Lighting_Blue(void);
void RGB_Lighting_Red(void);
void RGB_Lighting_Green(void);
void RGB_Lighting_Black(void);
void RGB_Lighting_Yellow(void);
void RGB_Lighting_Waterfall(void);
#endif


