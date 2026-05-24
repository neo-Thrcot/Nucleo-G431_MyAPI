/*
 * stm32g431_gpio.cpp
 *
 *  Created on: May 24, 2026
 *      Author: neoki
 */

#include <stm32g431_gpio.h>

static uint8_t gpio_clk = 0x00;

void pinMode(GPIOPin_t pin, GPIOMode_t mode)
{
	uint8_t port = PORT_NUM(pin);
	uint8_t pin_num = PIN_NUM(pin);

	if(!(gpio_clk & (1UL << port))) {
		gpio_clk |= (1UL << port);
		RCC->AHB2ENR |= (1UL << port);
	}

	GPIOx(port)->MODER &= ~(0b11UL << (pin_num * 2));
	GPIOx(port)->MODER |= (mode << (pin_num * 2));
}

void pinOutType(GPIOPin_t pin, GPIOOutType_t type)
{
	uint8_t port = PORT_NUM(pin);
	uint8_t pin_num = PIN_NUM(pin);

	if(type == PUSHPULL){
		GPIOx(port)->OTYPER &= ~(1UL << pin_num);
	} else {
		GPIOx(port)->OTYPER |= (1UL << pin_num);
	}
}

void pinSpeed(GPIOPin_t pin, GPIOSpeed_t speed)
{
	uint8_t port = PORT_NUM(pin);
	uint8_t pin_num = PIN_NUM(pin);

	GPIOx(port)->OSPEEDR &= ~(0b11UL << (pin_num * 2));
	GPIOx(port)->OSPEEDR |= (speed << (pin_num * 2));
}

void pinPullSelect(GPIOPin_t pin, GPIOPullType_t pull)
{
	uint8_t port = PORT_NUM(pin);
	uint8_t pin_num = PIN_NUM(pin);

	GPIOx(port)->PUPDR &= ~(0b11UL << (pin_num * 2));
	GPIOx(port)->PUPDR |= (pull << (pin_num * 2));
}

void AFSelect(GPIOPin_t pin, GPIOAF_t af_num)
{
	uint8_t port = PORT_NUM(pin);
	uint8_t pin_num = PIN_NUM(pin);

	if(pin_num < 8) {
		GPIOx(port)->AFR[0] &= ~(0b1111UL << (pin_num * 4));
		GPIOx(port)->AFR[0] |= (af_num << (pin_num * 4));
	} else {
		GPIOx(port)->AFR[1] &= ~(0b1111UL << ((pin_num - 8) * 4));
		GPIOx(port)->AFR[1] |=  (af_num << ((pin_num - 8) * 4));
	}
}

void pinWrite(GPIOPin_t pin, bool states)
{
	uint8_t port = PORT_NUM(pin);
	uint8_t pin_num = PIN_NUM(pin);

	if(states == LOW) {
		GPIOx(port)->BSRR |= (1UL << (pin_num + 16));
	} else {
		GPIOx(port)->BSRR |= (1UL << pin_num);
	}
}

void portWrite(GPIOPort_t port, uint16_t states)
{
	GPIOx(port)->ODR = states;
}

void pinToggle(GPIOPin_t pin)
{
	uint8_t port = PORT_NUM(pin);
	uint8_t pin_num = PIN_NUM(pin);

	GPIOx(port)->ODR ^= (1UL << pin_num);
}

void portToggle(GPIOPort_t port)
{
	GPIOx(port)->ODR ^= 0xFFFFUL;
}

bool pinRead(GPIOPin_t pin)
{
	uint8_t port = PORT_NUM(pin);
	uint8_t pin_num = PIN_NUM(pin);

	return (GPIOx(port)->IDR & (1UL << pin_num)) >> pin_num;
}

uint16_t portRead(GPIOPort_t port)
{
	return (uint16_t)GPIOx(port)->IDR;
}


