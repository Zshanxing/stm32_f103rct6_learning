#include "stm32f10x.h"


int main()
{
	RCC->APB2ENR |= (1<<2);        //�򿪿���GPIOA��ʱ��
	GPIOA->CRL &= ~(0x0F << 4*5);  //����CRL�Ĵ���Ϊ���ģʽ
	GPIOA->CRL |= (0x03 << 4*5);	
	GPIOA->BSRR |= (1 << 5);       //
	
	while(1)
	{
		
	}

}

void SystemInit(void)
{
}
