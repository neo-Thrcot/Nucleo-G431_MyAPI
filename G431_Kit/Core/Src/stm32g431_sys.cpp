/*
 * stm32g431_sys.cpp
 *
 *  Created on: May 24, 2026
 *      Author: neoki
 */

#include <stm32g431_sys.h>

static volatile uint32_t preTick = 0;
static volatile uint32_t tickCarry = 0;

void RCC_Init(void)
{
	/*Range 1 boost mode*/
	RCC->APB1ENR1 |= RCC_APB1ENR1_PWREN;

	RCC->CFGR &= ~RCC_CFGR_HPRE;
	RCC->CFGR |= RCC_CFGR_HPRE_DIV2;

	PWR->CR5 &= ~PWR_CR5_R1MODE;

	/*Flash access latency : 4 wait state*/
	FLASH->ACR &= ~FLASH_ACR_LATENCY;
	FLASH->ACR |= FLASH_ACR_DCEN | FLASH_ACR_ICEN | FLASH_ACR_PRFTEN |
				  FLASH_ACR_LATENCY_4WS;
	while((FLASH->ACR & FLASH_ACR_LATENCY) != FLASH_ACR_LATENCY_4WS);

	/*PLL config*/
	RCC->PLLCFGR &= ~(RCC_PLLCFGR_PLLR |
					  RCC_PLLCFGR_PLLN |
					  RCC_PLLCFGR_PLLM |
					  RCC_PLLCFGR_PLLSRC);
	RCC->PLLCFGR |= (RCC_PLLCFGR_PLLREN |
					 68UL << RCC_PLLCFGR_PLLN_Pos |
					 RCC_PLLCFGR_PLLSRC_HSE);

	RCC->CFGR &= ~(RCC_CFGR_PPRE1 | RCC_CFGR_PPRE2);

	/*PLL apply*/
	RCC->CR |= RCC_CR_HSEBYP | RCC_CR_HSEON;
	while(!(RCC->CR & RCC_CR_HSERDY));
	RCC->CR |= RCC_CR_PLLON;
	while(!(RCC->CR & RCC_CR_PLLRDY));

	RCC->CFGR |= RCC_CFGR_SW_PLL;
	while((RCC->CFGR & RCC_CFGR_SWS_Msk) != RCC_CFGR_SWS_PLL);

	for(uint16_t i = 0; i < 10000; i++);
	RCC->CFGR &= ~RCC_CFGR_HPRE;

	CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;
	DWT->CTRL |= DWT_CTRL_CYCCNTENA_Msk;

	preTick = DWT->CYCCNT;

	SysTick->LOAD = (AHBCLK / 1000) - 1;
	SysTick->VAL = 0;
	SysTick->CTRL |= SysTick_CTRL_CLKSOURCE_Msk |
				     SysTick_CTRL_TICKINT_Msk |
					 SysTick_CTRL_ENABLE_Msk;
}

void IncTick(void)
{
	if(DWT->CYCCNT < preTick) {
		tickCarry++;
	}
	preTick = DWT->CYCCNT;
}

uint64_t GetTick(void)
{
	uint32_t tick;
	uint32_t prev = preTick;
	uint32_t carry = tickCarry;

	tick = DWT->CYCCNT;
	if(tick < prev) {
		carry++;
	}

	return FULLTICK(carry, tick);
}

uint64_t millis(void)
{
	return GetTick() / 170000;
}

uint64_t micros(void)
{
	return GetTick() / 170;
}

void delay_ms(uint64_t ms)
{
	uint64_t start = millis();
	while((millis() - start) < ms);
}

void delay_us(uint64_t us)
{
	uint64_t start = micros();
	while((micros() - start) < us);
}
