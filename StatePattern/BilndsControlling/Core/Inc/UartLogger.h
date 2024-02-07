/*
 * UartLogger.h
 *
 *  Created on: Feb 6, 2024
 *      Author: Ammar Salhi
 */

#ifndef INC_UARTLOGGER_H_
#define INC_UARTLOGGER_H_

//#include "stm32f401xe.h"
//#include "stm32f4xx_hal_uart.h"
#include <stdio.h>
#include <string.h>
#include "main.h"

extern UART_HandleTypeDef huart2;
class UartLogger{
public:
	UartLogger();
	virtual ~UartLogger();
	void printUart(const char *text);
};

#endif /* INC_UARTLOGGER_H_ */
