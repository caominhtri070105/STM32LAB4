/*
 * fsm_automatic.c
 *
 *  Created on: Nov 1, 2025
 *      Author: tri
 */
#include "fsm_automatic.h"
int default_green=3000;
int default_red=5000;
int default_yellow=2000;
int counter_red;
int counter_green;
int counter_yellow;
int counter_red1;
int counter_green1;
int counter_yellow1;
int default_green1;
int default_red1;
int default_yellow1;
int index_led=0;
int index_led1=0;
int counter;
int countermode;
void Countdown() {
    switch(status) {
        case AUTO_RED: if(counter_red>0) counter_red--; break;
        case AUTO_GREEN: if(counter_green>0) counter_green--; break;
        case AUTO_YELLOW: if(counter_yellow>0) counter_yellow--; break;
        default: break;
    }
    switch(status1) {
        case AUTO_RED: if(counter_red1>0) counter_red1--; break;
        case AUTO_GREEN: if(counter_green1>0) counter_green1--; break;
        case AUTO_YELLOW: if(counter_yellow1>0) counter_yellow1--; break;
        default: break;
    }
}
void Count_index_led(){
	index_led++;
	if (index_led>1) index_led=0;
}
void Count_index_led1(){
	index_led1++;
	if (index_led1>1) index_led1=0;
}
void fsm_automatic_run(){
	default_green1=default_green;
	default_red1=default_red;
	default_yellow1=default_yellow;
	switch(status){
	case INIT:
		HAL_GPIO_WritePin(RED_LED_GPIO_Port,RED_LED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(YELLOW_LED_GPIO_Port,YELLOW_LED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GREEN_LED_GPIO_Port,GREEN_LED_Pin, GPIO_PIN_SET);

		status = AUTO_RED;

		counter_red=default_red/1000;
		break;
	case AUTO_RED:
		HAL_GPIO_WritePin(RED_LED_GPIO_Port,RED_LED_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(YELLOW_LED_GPIO_Port,YELLOW_LED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GREEN_LED_GPIO_Port,GREEN_LED_Pin, GPIO_PIN_SET);

		update7SEG(counter_red, index_led);
		if (counter_red<=0){
			status=AUTO_GREEN;
			counter_green=default_green/1000;
		}
		break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(RED_LED_GPIO_Port,RED_LED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(YELLOW_LED_GPIO_Port,YELLOW_LED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GREEN_LED_GPIO_Port,GREEN_LED_Pin, GPIO_PIN_RESET);

		update7SEG(counter_green, index_led);
		if (counter_green<=0){
			status=AUTO_YELLOW;
			counter_yellow=default_yellow/1000;
		}
		break;
	case AUTO_YELLOW:
		HAL_GPIO_WritePin(RED_LED_GPIO_Port, RED_LED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(YELLOW_LED_GPIO_Port, YELLOW_LED_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GREEN_LED_GPIO_Port, GREEN_LED_Pin, GPIO_PIN_SET);

		update7SEG(counter_yellow, index_led);
		if (counter_yellow<=0){
			status=AUTO_RED;
			counter_red=default_red/1000;
		}
		break;
	default:
		break;
	}
	switch(status1){
	case INIT:
		HAL_GPIO_WritePin(RED_LED1_GPIO_Port,RED_LED1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(YELLOW_LED1_GPIO_Port,YELLOW_LED1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GREEN_LED1_GPIO_Port,GREEN_LED1_Pin, GPIO_PIN_SET);
		status1 = AUTO_GREEN;

		counter_green1=default_green1/1000;
		break;
		case AUTO_GREEN:
			HAL_GPIO_WritePin(RED_LED1_GPIO_Port,RED_LED1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(YELLOW_LED1_GPIO_Port,YELLOW_LED1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GREEN_LED1_GPIO_Port,GREEN_LED1_Pin, GPIO_PIN_RESET);

			update7SEGMODE(counter_green1, index_led1);
			if (counter_green1<=0){
				status1=AUTO_YELLOW;
				counter_yellow1=default_yellow1/1000;
			}
			break;
		case AUTO_YELLOW:
			HAL_GPIO_WritePin(RED_LED1_GPIO_Port,RED_LED1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(YELLOW_LED1_GPIO_Port,YELLOW_LED1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GREEN_LED1_GPIO_Port,GREEN_LED1_Pin, GPIO_PIN_SET);

			update7SEGMODE(counter_yellow1, index_led1);
			if (counter_yellow1<=0){
				status1=AUTO_RED;
				counter_red1=default_red1/1000;
			}
			break;
		case AUTO_RED:
			HAL_GPIO_WritePin(RED_LED1_GPIO_Port, RED_LED1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(YELLOW_LED1_GPIO_Port, YELLOW_LED1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GREEN_LED1_GPIO_Port, GREEN_LED1_Pin, GPIO_PIN_SET);

			update7SEGMODE(counter_red1, index_led1);
			if (counter_red1<=0){
				status1=AUTO_GREEN;
				counter_green1=default_green1/1000;
			}
			break;
		default:
			break;
		}
}
