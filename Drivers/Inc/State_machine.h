/*
 * State_machine.h
 *
 *  Created on: Mar 9, 2021
 *      Author: 99003738
 */

#ifndef INC_STATE_MACHINE_H_
#define INC_STATE_MACHINE_H_

#include "API_header.h"

 volatile uint8_t state_value;

void State_init(void);
void State_trans(void);
void state(void);
void state_02(void);
void state_03(void);
void state_01(void);
#endif /* INC_STATE_MACHINE_H_ */
