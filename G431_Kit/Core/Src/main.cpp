#include <stm32g431_sys.h>
#include <stm32g431_gpio.h>
#include <stm32g431_usart.h>

#include <stdio.h>

#define LD2				PB8

void USART2_Transmit_CmpltCallback(void);
void USART2_Receive_CmpltCallback(void);

static bool usart2_tx_req	= false;
static bool usart2_tx_state = false;
static bool usart2_rx_req	= false;
static bool usart2_rx_state = false;

int main(void)
{
	static uint8_t rbuf[8];

	RCC_Init();

	Serial.init(115200);
	Serial.setCallback(USART_TX_COMPLETE, USART2_Transmit_CmpltCallback);
	Serial.setCallback(USART_RX_COMPLETE, USART2_Receive_CmpltCallback);

	pinMode(LD2, OUTPUT);

	while(1)
	{
		if(usart2_rx_req == false && usart2_rx_state == false) {
			usart2_rx_req = true;
			Serial.receiveIT(rbuf, 4);
		} else if(usart2_rx_state == true) {
			usart2_rx_req = usart2_rx_state = false;

			for(uint8_t i = 0; i < 4; i++) {
				if(rbuf[i] >= 'A' && rbuf[i] <= 'Z') {
					rbuf[i] += 'a' - 'A';
				} else if(rbuf[i] >= 'a' && rbuf[i] <= 'z') {
					rbuf[i] -= 'a' - 'A';
				}
			}

			Serial.transmit(rbuf, 4, 1000);
		}

		pinToggle(LD2);
		delay_ms(500);
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
