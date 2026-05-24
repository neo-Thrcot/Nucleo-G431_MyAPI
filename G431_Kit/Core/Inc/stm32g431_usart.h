/*
 * stm32g431_usart.h
 *
 *  Created on: May 25, 2026
 *      Author: neoki
 */

#ifndef INC_STM32G431_USART_H_
#define INC_STM32G431_USART_H_

#include <stm32g431_sys.h>
#include <stm32g431_gpio.h>

typedef enum
{
	USART_TX_COMPLETE,
	USART_RX_COMPLETE,
	USART_RX_OVERRUN
} USARTCallbackType_t;

class USART
{
	public:
		/*setting*/
		USART(USART_TypeDef* husart);
		USART(USART_TypeDef* husart, GPIOPin_t rx, GPIOPin_t tx);
		SysError_t init(uint32_t baudrate);
		SysError_t init(uint32_t baudrate, GPIOPin_t rx, GPIOPin_t tx);
		void setCallback(USARTCallbackType_t type, CallbackFunc_t func);

		/*transmit*/
		SysError_t __send(uint8_t data);
		SysError_t transmit(uint8_t* buf, uint16_t size, uint64_t timeout_ms);
		SysError_t transmit(const char* str, uint64_t timeout_ms);
		SysError_t transmitIT(uint8_t* buf, uint16_t size);

		/*receive*/
		SysError_t receive(uint8_t* buf, uint16_t size, uint64_t timeout_ms);
		SysError_t receiveIT(uint8_t* buf, uint16_t size);

		/*alternate handler*/
		void IRQHandler(void);

	private:
		USART_TypeDef* 	ch;
		IRQn_Type		USARTx_IRQn;
		uint32_t 		APBxClk;
		GPIOPin_t 		rx_pin, tx_pin;

		/*Transmit interrupt*/
		volatile uint8_t		*txdata_buf;
		volatile uint16_t		txdata_num;
		volatile uint16_t		txdata_cnt;
		volatile SysError_t		tx_states;
		CallbackFunc_t			Transmit_CmpltCallback;

		/*Receive interrupt*/
		volatile uint8_t		*rxdata_buf;
		volatile uint16_t		rxdata_num;
		volatile uint16_t		rxdata_cnt;
		volatile SysError_t		rx_states;
		CallbackFunc_t			Receive_CmpltCallback;
		CallbackFunc_t			Receive_OvrunCallback;

		/*GPIO config function*/
		void pinInit(void);
};

extern "C" int __io_putchar(int ch);

extern USART Serial;

#endif /* INC_STM32G431_USART_H_ */
