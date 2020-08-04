#include "stm32f10x.h"


int main(void)
{
	
  // 打开时钟
	 RCC_APB2ENR |= (1 << 2);
	
	// 配置 IO 口为输出
	GPIOA_CRL &= ~(0x0F << 4*5);
	GPIOA_CRL |= (0x01 << 4*5);
	
	// 控制 BSRR 寄存器
	GPIOA_ODR |= (1 << 5);

}

void SystemInit(void)
{

	
	//

}
