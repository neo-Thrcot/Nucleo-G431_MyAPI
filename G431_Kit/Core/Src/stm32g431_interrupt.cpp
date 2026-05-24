/*
 * stm32g431_interrupt.cpp
 *
 *  Created on: May 24, 2026
 *      Author: neoki
 */

#include <stm32g431_sys.h>
#include <stm32g431_gpio.h>
#include <stm32g431_usart.h>

extern USART Serial;

extern "C" {

void SysTick_Handler(void)
{
	IncTick();
}

void USART2_IRQHandler(void)
{
	Serial.IRQHandler();
}

}


