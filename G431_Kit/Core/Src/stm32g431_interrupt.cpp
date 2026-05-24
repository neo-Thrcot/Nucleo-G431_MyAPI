/*
 * stm32g431_interrupt.cpp
 *
 *  Created on: May 24, 2026
 *      Author: neoki
 */

#include <stm32g431_sys.h>

extern "C" {

void SysTick_Handler(void)
{
	IncTick();
}

}


