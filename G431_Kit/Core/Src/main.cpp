#include <stm32g431_sys.h>
#include <stm32g431_gpio.h>

#define LD2				PB8

int main(void)
{
	RCC_Init();

	pinMode(LD2, OUTPUT);

	while(1)
	{
		pinToggle(LD2);
		delay_ms(1000);
	}

	return 0;
}
