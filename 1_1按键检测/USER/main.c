#include "stm32f10x.h"
#include "led.h"
#include "key.h"

void delay( uint32_t count )
{
	for( ; count != 0; count-- );

}


int main(void)
{	
	
  led_init();
	key_init();

	while(1)
	{
		if( Key_Scan(KEY_PIN_PORT, KEY_PIN) == KEY_ON )
		{

		  LED_PIN_TOGGLE;
		}
	}

}


