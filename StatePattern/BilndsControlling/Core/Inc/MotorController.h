/*
 * MotorController.h
 *
 *  Created on: Feb 6, 2024
 *      Author: Ammar Salhi
 */

#ifndef INC_MOTORCONTROLLER_H_
#define INC_MOTORCONTROLLER_H_

#include "MotorState.h"
#include "Backward.h"
#include "Forward.h"

class MotorController{
	public:
		MotorController();
		void handleEvent();
	private:
		Backward backward;
		Forward forward;
 		MotorState *currentState;
};

#endif /* INC_MOTORCONTROLLER_H_ */
