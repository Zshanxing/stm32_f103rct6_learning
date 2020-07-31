//#include "stm32f10x.h"


int main(void)
{
	
	// 打开时钟
	*(unsigned int *)0x40021018 |= (0x01 << 2);
	
	// 配置 IO 口为输出
	*(unsigned int *)0x40010800 &= ~(0x0F << 4*5);
	*(unsigned int *)0x40010800 |= (0x01 << 4*5);
	
	// 控制 ODR 寄存器
	*(unsigned int *)0x4001080C |= (1 << 5);

}

void SystemInit(void)
{

	
	//

}
