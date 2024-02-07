/*
 * MotorController.cpp
 *
 *  Created on: Feb 6, 2024
 *      Author: Ammar Salhi
 */

#include "MotorController.h"

MotorController::MotorController(){
	backward.nextState = &forward;
	forward.nextState = &backward;
	currentState = &forward;
}

void MotorController::handleEvent(){
	currentState->exitState();
	currentState = currentState->nextState;
	currentState->enterState();
}

