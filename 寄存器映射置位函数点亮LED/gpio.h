#ifndef __GPIO_H
#define __GPIO_H

#include "stm32f10x.h"

#define GPIO_Pin_0     ((uint16_t)0x0001)  //00000000 00000001
#define GPIO_Pin_1     ((uint16_t)0x0002)  //00000000 00000010
#define GPIO_Pin_2     ((uint16_t)0x0004)  //00000000 00000100
#define GPIO_Pin_3     ((uint16_t)0x0008)  //00000000 00001000
#define GPIO_Pin_4     ((uint16_t)0x0010)  //00000000 00010000
#define GPIO_Pin_5     ((uint16_t)0x0020)  //00000000 00100000
#define GPIO_Pin_6     ((uint16_t)0x0040)  //00000000 01000000
#define GPIO_Pin_7     ((uint16_t)0x0080)  //00000000 10000000

#define GPIO_Pin_8     ((uint16_t)0x0100)  //00000001 00000000
#define GPIO_Pin_9     ((uint16_t)0x0200)  //00000010 00000000
#define GPIO_Pin_10    ((uint16_t)0x0400)  //00000100 00000000
#define GPIO_Pin_11    ((uint16_t)0x0800)  //00001000 00000000
#define GPIO_Pin_12    ((uint16_t)0x1000)  //00010000 00000000
#define GPIO_Pin_13    ((uint16_t)0x2000)  //00100000 00000000
#define GPIO_Pin_14    ((uint16_t)0x4000)  //01000000 00000000
#define GPIO_Pin_15    ((uint16_t)0x8000)  //10000000 00000000
#define GPIO_Pin_ALL   ((uint16_t)0xFFFF)  //11111111 11111111


void GPIO_SetBits(GPIO_TypeDef* GPIOx,uint16_t GPIO_Pin);
void GPIO_ResetBits(GPIO_TypeDef* GPIOx,uint16_t GPIO_Pin);

#endif
