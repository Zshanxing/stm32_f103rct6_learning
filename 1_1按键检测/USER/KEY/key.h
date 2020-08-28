#ifndef __KEY_H
#define __KEY_H

#include "stm32f10x.h"


#define KEY_PIN_PORT  GPIOA
#define KEY_PIN       GPIO_Pin_2
#define KEY_PIN_CLR   RCC_APB2Periph_GPIOA

#define KEY_ON    1
#define KEY_OFF   0


void key_init(void);
uint8_t Key_Scan(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

#endif
