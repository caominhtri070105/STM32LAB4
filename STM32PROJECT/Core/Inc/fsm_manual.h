/*
 * fsm_manual.h
 *
 *  Created on: Nov 2, 2025
 *      Author: tri
 */

#ifndef INC_FSM_MANUAL_H_
#define INC_FSM_MANUAL_H_

#include "global.h"
#include "fsm_automatic.h"
#include "Increasing_time.h"

extern int default_red;
extern int default_green;
extern int default_yellow;

extern int index_led;
extern int index_led1;


void fsm_manual_run();
void ToggleLed();

#endif /* INC_FSM_MANUAL_H_ */
