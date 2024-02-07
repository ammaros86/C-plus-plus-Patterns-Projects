/*
 * Backward.h
 *
 *  Created on: Feb 6, 2024
 *      Author: Ammar Salhi
 */

#ifndef INC_BACKWARD_H_
#define INC_BACKWARD_H_

#include <iostream>
using namespace std;
#include "MotorState.h"

class Backward : public MotorState{
public:
	  void enterState();
	  void exitState();
};

#endif /* INC_BACKWARD_H_ */
