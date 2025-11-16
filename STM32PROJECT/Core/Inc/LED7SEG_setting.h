/*
 * LED7SEG_setting.h
 *
 *  Created on: Nov 3, 2025
 *      Author: tri
 */

#ifndef INC_LED7SEG_SETTING_H_
#define INC_LED7SEG_SETTING_H_

#include "global.h"
#include "main.h"

void display7SEG();
void display7SEGMODE();
void update7SEGMODE();
void update7SEG();

extern int counter;
extern int countermode;

#endif /* INC_LED7SEG_SETTING_H_ */
