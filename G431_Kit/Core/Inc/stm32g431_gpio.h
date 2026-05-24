/*
 * stm32g431_gpio.h
 *
 *  Created on: May 24, 2026
 *      Author: neoki
 */

#ifndef INC_STM32G431_GPIO_H_
#define INC_STM32G431_GPIO_H_

#include <stm32g431_sys.h>

#define GPIOx_BASE(port)		(AHB2PERIPH_BASE + (port * 0x0400UL))
#define GPIOx(port)				((GPIO_TypeDef*)GPIOx_BASE(port))

#define PORT_NUM(pin)			((pin) >> 4)
#define PIN_NUM(pin)			(pin & 0x0F)

#define HIGH					true
#define LOW						false

typedef enum
{
	PORTA			= 0UL,
	PORTB,
	PORTF			= 5UL,
	PORTG
} GPIOPort_t;

typedef enum
{
	PA0				= 0x00UL,
	PA1,
	PA2,
	PA3,
	PA4,
	PA5,
	PA6,
	PA7,
	PA8,
	PA9,
	PA10,
	PA11,
	PA12,
	PA13,
	PA14,
	PA15,
	PB0,
	PB1,
	PB3				= 0x13UL,
	PB4,
	PB5,
	PB6,
	PB7,
	PB8,
	PF0				= 0x50UL,
	PF1,
	PG10			= 0x6AUL
} GPIOPin_t;

typedef enum
{
	INPUT 			= 0b00UL,
	OUTPUT,
	OTHER,
	ANALOG
} GPIOMode_t;

typedef enum
{
	AF0				= 0U,
	AF1,
	AF2,
	AF3,
	AF4,
	AF5,
	AF6,
	AF7,
	AF8,
	AF9,
	AF10,
	AF11,
	AF12,
	AF13,
	AF14,
	AF15
} GPIOAF_t;

typedef enum
{
	PUSHPULL		= 0U,
	OPENDRAIN
} GPIOOutType_t;

typedef enum
{
	LOWSPEED		= 0U,
	MEDSPEED,
	FASTSPEED,
	HIGHSPEED
} GPIOSpeed_t;

typedef enum
{
	NO_PULLUP_DOWN	= 0U,
	PULLUP,
	PULLDOWN
} GPIOPullType_t;

void pinMode(GPIOPin_t pin, GPIOMode_t mode);
void pinOutType(GPIOPin_t pin, GPIOOutType_t type);
void pinSpeed(GPIOPin_t pin, GPIOSpeed_t speed);
void pinPullSelect(GPIOPin_t pin, GPIOPullType_t pull);
void AFSelect(GPIOPin_t pin, GPIOAF_t af_num);

void pinWrite(GPIOPin_t pin, bool states);
void portWrite(GPIOPort_t port, uint16_t states);

void pinToggle(GPIOPin_t pin);
void portToggle(GPIOPort_t port);

bool pinRead(GPIOPin_t pin);
uint16_t portRead(GPIOPort_t port);

#endif /* INC_STM32G431_GPIO_H_ */
