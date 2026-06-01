#include <stm32g431_sys.h>
#include <stm32g431_gpio.h>
#include <stm32g431_usart.h>

#include <stdio.h>
#include <math.h>

#define CALC_METHOD			0

#define PI					(3.1415926535f)
#define DEG_TO_RAD(x)		((x) * PI / 180.0f)
#define RAD_TO_DEG(x)		((x) * 180.0f / PI)

#define FLOAT_TO_Q31(x)		((int32_t)((x) * 2147483648.0f))
#define Q31_TO_FLOAT(x)		((x) / 2147483648.0f)

#define LD2					PB8

void USART2_Transmit_CmpltCallback(void);
void USART2_Receive_CmpltCallback(void);

static bool usart2_tx_req	= false;
static bool usart2_tx_state = false;
static bool usart2_rx_req	= false;
static bool usart2_rx_state = false;

int main(void)
{
	RCC_Init();

	Serial.init(115200);
	Serial.setCallback(USART_TX_COMPLETE, USART2_Transmit_CmpltCallback);
	Serial.setCallback(USART_RX_COMPLETE, USART2_Receive_CmpltCallback);

	pinMode(LD2, OUTPUT);

	RCC->AHB1ENR |= RCC_AHB1ENR_CORDICEN;

	CORDIC->CSR = 0;
	CORDIC->CSR |= (CORDIC_CSR_NARGS 				|
					CORDIC_CSR_NRES 				|
					6UL << CORDIC_CSR_PRECISION_Pos |
					1UL << CORDIC_CSR_FUNC_Pos);

	while(1)
	{
		uint64_t start, duration;

		float sin_cos_table[360][2];
		float reg_angle;
		int32_t q31_angle, q31_m;
		int32_t q31_sin, q31_cos;

		q31_m = FLOAT_TO_Q31(1);

		start = micros();
		for(int i = -180; i < 180; i++) {
#if (CALC_METHOD == 0)
			reg_angle = i / 180.0;
			q31_angle = FLOAT_TO_Q31(reg_angle);

			CORDIC->WDATA = q31_angle;
			CORDIC->WDATA = q31_m;
			while(!(CORDIC->CSR & CORDIC_CSR_RRDY));
			q31_sin = CORDIC->RDATA;
			q31_cos = CORDIC->RDATA;

			sin_cos_table[i+180][0] = Q31_TO_FLOAT(q31_sin);
			sin_cos_table[i+180][1] = Q31_TO_FLOAT(q31_cos);
#elif (CALC_METHOD == 1)
			reg_angle = DEG_TO_RAD(i);
			sin_cos_table[i+180][0] = sinf(reg_angle);
			sin_cos_table[i+180][1] = cosf(reg_angle);
#endif
		}
		duration = micros() - start;

		printf("duration:%d\n", (int)duration);
		for(int i = 0; i < 360; i++) {
			printf("%f %f\n", sin_cos_table[i][0], sin_cos_table[i][1]);
		}
		putchar('\n');

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
