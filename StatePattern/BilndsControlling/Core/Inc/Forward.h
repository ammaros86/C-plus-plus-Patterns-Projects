/*
 * Forward.h
 *
 *  Created on: Feb 6, 2024
 *      Author: Ammar Salhi
 */

#ifndef INC_FORWARD_H_
#define INC_FORWARD_H_

#include <iostream>
using namespace std;
#include "MotorState.h"


class Forward : public MotorState{
public:
	  void enterState();
	  void exitState();
};


#endif /* INC_FORWARD_H_ */
