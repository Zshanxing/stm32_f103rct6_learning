//#include "stm32f10x.h"


int main(void)
{
	
	// ��ʱ��
	*(unsigned int *)0x40021018 |= (0x01 << 2);
	
	// ���� IO ��Ϊ���
	*(unsigned int *)0x40010800 &= ~(0x0F << 4*5);
	*(unsigned int *)0x40010800 |= (0x01 << 4*5);
	
	// ���� ODR �Ĵ���
	*(unsigned int *)0x4001080C |= (1 << 5);

}

void SystemInit(void)
{

	
	//

}
