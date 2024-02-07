/*
 * Backward.cpp
 *
 *  Created on: Feb 6, 2024
 *      Author: Ammar Salhi
 */

#include "Backward.h"

void Backward::enterState(){
 	uartLogger.printUart("Backward enterState \r\n");
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_RESET);
  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
 }


void Backward::exitState(){
 	uartLogger.printUart("Backward exitState \r\n");
}


