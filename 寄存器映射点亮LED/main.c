#include "stm32f10x.h"


int main(void)
{
	
  // ��ʱ��
	 RCC_APB2ENR |= (1 << 2);
	
	// ���� IO ��Ϊ���
	GPIOA_CRL &= ~(0x0F << 4*5);
	GPIOA_CRL |= (0x01 << 4*5);
	
	// ���� BSRR �Ĵ���
	GPIOA_ODR |= (1 << 5);

}

void SystemInit(void)
{

	
	//

}
