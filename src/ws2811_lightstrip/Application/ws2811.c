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
 * @description: 延时函数
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
 * @description: 初始化函数
 * @param {*}
 * @return {*}
 * @author: ZOOM
 */
void WS2811_Init(void)
{
    Reset();
}


///**
// * @description: 发送0码函数
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
// * @description: 发送1码函数
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
 * @description: 发送0码函数
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
 * @description: 发送1码函数
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
 * @description:发送结束函数
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
 * @description: 发送单个ws2811数据
 * @param {const uint8_t} *data
 * @return {*}
 * @author: ZOOM
 */
void Send_Single_Data(const uint8_t *data)                                             //锟斤拷锟捷革拷式:R7~R0~G7~G0~B7~B0
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
 * @description: 发送多个ws2811数据
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
 * @description: 常亮蓝灯
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
 * @description: 常亮红灯
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
 * @description: 常亮绿灯
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
 * @description: 常亮黄灯
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
 * @description: 灭
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
 * @description: 蓝灯流水灯效果
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

    for(i = 0; i <= SEND_TIMES; i++)//锟狡达拷锟斤拷示锟侥憋拷锟斤拷
    {
        for(j = 0; j <= SEND_TIMES; j++)//锟狡达拷锟斤拷锟斤拷
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
