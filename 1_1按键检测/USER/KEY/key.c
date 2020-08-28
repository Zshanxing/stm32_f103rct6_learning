#include "key.h"

void key_init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	
	RCC_APB2PeriphClockCmd(KEY_PIN_CLR,ENABLE);
		
  GPIO_InitStructure.GPIO_Pin = KEY_PIN;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(KEY_PIN_PORT,&GPIO_InitStructure);
}


uint8_t Key_Scan(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
	
	if( GPIO_ReadInputDataBit(GPIOx, GPIO_Pin) == KEY_ON ) 
	{
		while( GPIO_ReadInputDataBit(GPIOx, GPIO_Pin) == KEY_ON ); // 按着不亮，松手亮
	  return KEY_ON;
	}
	else return KEY_OFF;

}
