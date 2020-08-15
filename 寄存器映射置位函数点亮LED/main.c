#include "stm32f10x.h"
#include "gpio.h"



int main()
{
	
	RCC->APB2ENR |= (1<<2);        //�򿪿���GPIOA��ʱ��
	
	GPIOA->CRL &= ~(0x0F << 4*5);  //����CRL�Ĵ���Ϊ���ģʽ
	GPIOA->CRL |= (0x03 << 4*5);	
	
	//GPIOA->BSRR |= (1 << 5);     //��λ

  GPIO_ResetBits(GPIOA,GPIO_Pin_5);
  GPIO_SetBits(GPIOA,GPIO_Pin_5);
	
	while(1)
	{
		
	}

}

void SystemInit(void)
{
}
