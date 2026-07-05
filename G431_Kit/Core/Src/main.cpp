#include <stm32g431_sys.h>
#include <stm32g431_gpio.h>
#include <stm32g431_usart.h>
#include <stm32g431_i2c.h>

#define ARM_MATH_M4
extern "C" {
#include <arm_math.h>
}

#include <stdio.h>
#include <math.h>

#include <ssd1306.h>

#define LD2					PB8

void USART2_Transmit_CmpltCallback(void);
void USART2_Receive_CmpltCallback(void);

static bool usart2_tx_req	= false;
static bool usart2_tx_state = false;
static bool usart2_rx_req	= false;
static bool usart2_rx_state = false;

I2C i2c1(I2C1, PA15, PB7);

int main(void)
{
	uint8_t cnt = 0;

	RCC_Init();

	Serial.init(115200);
	Serial.setCallback(USART_TX_COMPLETE, USART2_Transmit_CmpltCallback);
	Serial.setCallback(USART_RX_COMPLETE, USART2_Receive_CmpltCallback);

	i2c1.init(400000);

	pinMode(LD2, OUTPUT);

	for(uint8_t i = 0; i <= 0x7F; i++) {
		if(i2c1.addressMatch(i) == true) {
			printf("Find %x\n", i);
			cnt++;
		}
	}
	if(cnt == 0) {
		printf("not found\n");
	}

	OLED_Init(&i2c1, OLED_Init_Data, sizeof(OLED_Init_Data));
	OLED_Thrcot_Large_Logo_Display(&i2c1);
	delay_ms(1000);
	OLED_AllClear(&i2c1);

	while(1)
	{
		uint8_t who;
		SysError_t err;

		err = i2c1.memRead(0x6A, 0x0F, false, &who, 1, 1000);
		if(err == SYS_OK) {
			if(who == 0x70) {
				printf("6 axis sensor find!\n");
			} else {
				printf("6 axis sensor not find!\n");
			}
		} else {
			printf("err:%d\n", (int)err);
		}

		delay_ms(5000);
	}

	return 0;
}

void USART2_Transmit_CmpltCallback(void)
{
	usart2_tx_state = true;
}

void USART2_Receive_CmpltCallback(void)
{
	usart2_rx_state = true;
}
