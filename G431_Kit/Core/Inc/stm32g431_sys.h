/*
 * stm32g431_sys.h
 *
 *  Created on: May 24, 2026
 *      Author: neoki
 */

#ifndef INC_STM32G431_SYS_H_
#define INC_STM32G431_SYS_H_

#include <stm32g4xx.h>

#define SYSCLK					170000000
#define AHBCLK					170000000
#define APB1CLK					170000000
#define APB1TIMERCLK			170000000
#define APB2CLK					170000000
#define APB2TIMERCLK			170000000

#define ABS_DIFF(a, b)			((a > b) ? a - b : b - a)
#define FULLTICK(carry, tick)	(((uint64_t)(carry) << 32) | (tick))

#define DISABLE					false
#define ENABLE					true

typedef enum
{
	SYS_OK		= 0UL,
	SYS_ERROR,
	SYS_BUSY,
	SYS_TIMEOUT
}SysError_t;

typedef void (*CallbackFunc_t)(void);

void RCC_Init(void);

void IncTick(void);
uint64_t GetTick_64(void);

uint64_t millis(void);
uint64_t micros(void);
void delay_ms(uint64_t ms);
void delay_us(uint64_t us);

#endif /* INC_STM32G431_SYS_H_ */
