/*
 * Forward.cpp
 *
 *  Created on: Feb 6, 2024
 *      Author: Ammar Salhi
 */

#include "Forward.h"
 
void Forward::enterState(){
 	uartLogger.printUart("Forward enterState \r\n");
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_RESET);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_SET);
}

void Forward::exitState(){
 	uartLogger.printUart("Forward exitState \r\n");
}


