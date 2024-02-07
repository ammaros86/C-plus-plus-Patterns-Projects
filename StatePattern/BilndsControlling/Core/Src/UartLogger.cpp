/*
 * UartLogger.cpp
 *
 *  Created on: Feb 6, 2024
 *      Author: Ammar Salhi
 */

#include "UartLogger.h"

UartLogger::UartLogger(){

}

UartLogger::~UartLogger(){

}
void UartLogger::printUart(const char *text){
    HAL_UART_Transmit(&huart2, (uint8_t*)text, strlen(text), HAL_MAX_DELAY);
}


