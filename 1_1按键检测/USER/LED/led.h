#ifndef __LED_H
#define __LED_H

#include "stm32f10x.h"


#define LED_PIN_PORT    GPIOA
#define LED_PIN         GPIO_Pin_5
#define LED_PIN_CLR     RCC_APB2Periph_GPIOA

#define LED_PIN_TOGGLE  {LED_PIN_PORT->ODR ^= LED_PIN;}


void led_init(void);

#endif

