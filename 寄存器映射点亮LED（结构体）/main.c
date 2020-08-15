#include "stm32f10x.h"


int main()
{
	RCC->APB2ENR |= (1<<2);        //打开控制GPIOA的时钟
	GPIOA->CRL &= ~(0x0F << 4*5);  //配置CRL寄存器为输出模式
	GPIOA->CRL |= (0x03 << 4*5);	
	GPIOA->BSRR |= (1 << 5);       //
	
	while(1)
	{
		
	}

}

void SystemInit(void)
{
}
