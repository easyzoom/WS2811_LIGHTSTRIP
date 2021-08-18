/**
 * @file    : ws2811.c
 * @author  : ZOOM (easyzoom.wang@gmail.com)
 * @version : 1.0
 * @date    : 2021-08-18
 * @brief   : None
 * 
 * @copyright (c) 2021 Robot
 * 
**/
#include "ws2811.h"

static uint8_t led_position[3]={0};

/**
 * @description: ÑÓÊ±º¯Êý
 * @param {unsigned long int} us
 * @return {*}
 * @author: ZOOM
 */
static void Delay(unsigned long int us)
{
    unsigned long int j;
    for (j = 5*us; j > 0; j--);
}


/**
 * @description: ³õÊ¼»¯º¯Êý
 * @param {*}
 * @return {*}
 * @author: ZOOM
 */
void WS2811_Init(void)
{
    Reset();
}


///**
// * @description: ·¢ËÍ0Âëº¯Êý
// * @param {*}
// * @return {*}
// * @author: ZOOM
// */
//void WS2811_Date0(void)
//{
//    WS2811_HIGH;
//    Delay(3);
//    WS2811_LOW;
//    Delay(15);
//}


///**
// * @description: ·¢ËÍ1Âëº¯Êý
// * @param {*}
// * @return {*}
// * @author: ZOOM
// */
//void WS2811_Date1(void)
//{
//    WS2811_HIGH;
//    Delay(9);
//    WS2811_LOW;
//    Delay(9);
//}


/**
 * @description: ·¢ËÍ0Âëº¯Êý
 * @param {*}
 * @return {*}
 * @author: ZOOM
 */
void WS2811_Date0(void)
{
    WS2811_HIGH;
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    WS2811_LOW;
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
}


/**
 * @description: ·¢ËÍ1Âëº¯Êý
 * @param {*}
 * @return {*}
 * @author: ZOOM
 */
void WS2811_Date1(void)
{
    WS2811_HIGH;
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    WS2811_LOW;
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
    __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
}


/**
 * @description:·¢ËÍ½áÊøº¯Êý
 * @param {*}
 * @return {*}
 * @author: ZOOM
 */
void Reset(void)
{
    WS2811_LOW;
    Delay(2000);
}


/**
 * @description: ·¢ËÍµ¥¸öws2811Êý¾Ý
 * @param {const uint8_t} *data
 * @return {*}
 * @author: ZOOM
 */
void Send_Single_Data(const uint8_t *data)                                             //ï¿½ï¿½ï¿½Ý¸ï¿½Ê½:R7~R0~G7~G0~B7~B0
{
    int8_t i=0, j=0;
    for(i = 0; i < 3; i++)
    {
        for(j = 7; j > -1; j--)
        {
            if((*(data+i) & (0x01 << j)) == (0x01 << j))
            {
                WS2811_Date1();
            }
            else
            {
                WS2811_Date0();
            }
        }
    }
}


/**
 * @description: ·¢ËÍ¶à¸öws2811Êý¾Ý
 * @param {const uint8_t} *data
 * @param {uint8_t} size
 * @return {*}
 * @author: ZOOM
 */
void Send_String_Data(const uint8_t *data, uint8_t size)                                             
{
    uint8_t i=0;
    for(i = 0; i < size; i++)
    {
        Send_Single_Data(data);
    }
    Reset();
}


/**
 * @description: ³£ÁÁÀ¶µÆ
 * @param {*}
 * @return {*}
 * @author: ZOOM
 */
void RGB_Lighting_Blue(void)
{
    led_position[0]=255;
    led_position[1]=0;
    led_position[2]=0;
    Send_String_Data(led_position,SEND_TIMES);
}


/**
 * @description: ³£ÁÁºìµÆ
 * @param {*}
 * @return {*}
 * @author: ZOOM
 */
void RGB_Lighting_Red(void)
{
    led_position[0]=0;
    led_position[1]=255;
    led_position[2]=0;
    Send_String_Data(led_position,SEND_TIMES);

}


/**
 * @description: ³£ÁÁÂÌµÆ
 * @param {*}
 * @return {*}
 * @author: ZOOM
 */
void RGB_Lighting_Green(void)
{
    led_position[0]=0;
    led_position[1]=0;
    led_position[2]=255;
    Send_String_Data(led_position,SEND_TIMES);
}


/**
 * @description: ³£ÁÁ»ÆµÆ
 * @param {*}
 * @return {*}
 * @author: ZOOM
 */
void RGB_Lighting_Yellow(void)
{
    led_position[0]=0;
    led_position[1]=255;
    led_position[2]=200;
    Send_String_Data(led_position,SEND_TIMES);
}


/**
 * @description: Ãð
 * @param {*}
 * @return {*}
 * @author: ZOOM
 */
void RGB_Lighting_Black(void)
{
    led_position[0]=0;
    led_position[1]=0;
    led_position[2]=0;
    Send_String_Data(led_position,SEND_TIMES);
}


/**
 * @description: À¶µÆÁ÷Ë®µÆÐ§¹û
 * @param {*}
 * @return {*}
 * @author: ZOOM
 */
void RGB_Lighting_Waterfall(void)
{
    led_position[0]=255;
    led_position[1]=0;
    led_position[2]=0;
    uint8_t led_place[3]={0};
    uint8_t i = 0, j = 0;

    for(i = 0; i <= SEND_TIMES; i++)//ï¿½Æ´ï¿½ï¿½ï¿½Ê¾ï¿½Ä±ï¿½ï¿½ï¿½
    {
        for(j = 0; j <= SEND_TIMES; j++)//ï¿½Æ´ï¿½ï¿½ï¿½ï¿½ï¿½
        {
            if(i == j)
            {
                Send_Single_Data(led_position);
            }
            else
            {
                Send_Single_Data(led_place);
            }
        }
        HAL_Delay(50);
    }
}
