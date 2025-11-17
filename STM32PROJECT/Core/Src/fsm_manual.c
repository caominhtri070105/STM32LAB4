/*
 * fsm_manual.c
 *
 *  Created on: Nov 2, 2025
 *      Author: tri
 */

int display_red;
int display_green;
int display_yellow;
#include "fsm_manual.h"
#include "fsm_automatic.h"
void fsm_manual_run(){
	if(isButton3Pressed()==1){
		mode=INIT;
		status = INIT;
	    status1 = INIT;
	}
	switch(mode){
	case INIT:
		fsm_automatic_run();
		if(isButton1Pressed()==1){
			mode=MAN_RED;
			display_red = default_red / 1000;
		}
		break;
	case MAN_RED:
		HAL_GPIO_TogglePin(RED_LED_GPIO_Port,RED_LED_Pin);
		HAL_GPIO_TogglePin(RED_LED1_GPIO_Port,RED_LED1_Pin);
		HAL_GPIO_WritePin(YELLOW_LED_GPIO_Port,YELLOW_LED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GREEN_LED_GPIO_Port,GREEN_LED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(YELLOW_LED1_GPIO_Port,YELLOW_LED1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GREEN_LED1_GPIO_Port,GREEN_LED1_Pin, GPIO_PIN_SET);

		countermode=02;
		update7SEG(display_red, index_led);
		update7SEGMODE(2, index_led1);


		Increasing_time(&display_red, &default_red);
		Saving_time(&display_red, &default_red);

		if(isButton1Pressed()==1){
			mode=MAN_GREEN;
			display_green = default_green / 1000;
		}
		break;
	case MAN_GREEN:
		HAL_GPIO_TogglePin(GREEN_LED_GPIO_Port,GREEN_LED_Pin);
		HAL_GPIO_TogglePin(GREEN_LED1_GPIO_Port,GREEN_LED1_Pin);
		HAL_GPIO_WritePin(YELLOW_LED_GPIO_Port,YELLOW_LED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(RED_LED_GPIO_Port,RED_LED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(YELLOW_LED1_GPIO_Port,YELLOW_LED1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(RED_LED1_GPIO_Port,RED_LED1_Pin, GPIO_PIN_SET);

		counter=display_green;
		countermode=03;
		update7SEG(display_green, index_led);
		update7SEGMODE(3, index_led1);

		Increasing_time(&default_green,&display_green);
		Saving_time(&display_green,&default_green);
		if(isButton1Pressed()==1){
			mode=MAN_YELLOW;
			display_yellow = default_yellow / 1000;
		}
		break;
	case MAN_YELLOW:
		HAL_GPIO_TogglePin(YELLOW_LED_GPIO_Port,YELLOW_LED_Pin);
		HAL_GPIO_TogglePin(YELLOW_LED1_GPIO_Port,YELLOW_LED1_Pin);
		HAL_GPIO_WritePin(RED_LED_GPIO_Port,RED_LED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GREEN_LED_GPIO_Port,GREEN_LED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(YELLOW_LED1_GPIO_Port,YELLOW_LED1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(RED_LED1_GPIO_Port,RED_LED1_Pin, GPIO_PIN_SET);

		counter=display_yellow;
		countermode=04;
		update7SEG(display_yellow, index_led);
		update7SEGMODE(4, index_led1);

		Increasing_time(&display_yellow, &default_yellow);
		Saving_time(&display_yellow, &default_yellow);
		if(isButton1Pressed()==1){
			mode=INIT;
		}
		break;
	default:
		break;
	}
}
