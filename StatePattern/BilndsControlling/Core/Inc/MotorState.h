/*
 * MotorState.h
 *
 *  Created on: Feb 6, 2024
 *      Author: Ammar Salhi
 */

#ifndef INC_MOTORSTATE_H_
#define INC_MOTORSTATE_H_

#include "UartLogger.h"
#include "stm32f4xx_hal.h"

class MotorState{

public:
	virtual ~MotorState();
	virtual void enterState() = 0 ;
	virtual void exitState() = 0;
	MotorState *nextState;
	UartLogger uartLogger;
};


#endif /* INC_MOTORSTATE_H_ */
