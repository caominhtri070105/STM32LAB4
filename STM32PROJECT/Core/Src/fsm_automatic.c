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
void Countdown(){
	counter_red--;
	counter_green--;
	counter_yellow--;
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
		counter=counter_red;
		update7SEG(index_led);
		if (counter_red<=0){
			status=AUTO_GREEN;
			counter_green=default_green/1000;
		}
		break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(RED_LED_GPIO_Port,RED_LED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(YELLOW_LED_GPIO_Port,YELLOW_LED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GREEN_LED_GPIO_Port,GREEN_LED_Pin, GPIO_PIN_RESET);
		counter=counter_green;
		update7SEG(index_led);
		if (counter_green<=0){
			status=AUTO_YELLOW;
			counter_yellow=default_yellow/1000;
		}
		break;
	case AUTO_YELLOW:
		HAL_GPIO_WritePin(RED_LED_GPIO_Port, RED_LED_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(YELLOW_LED_GPIO_Port, YELLOW_LED_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GREEN_LED_GPIO_Port, GREEN_LED_Pin, GPIO_PIN_SET);
		counter=counter_yellow;
		update7SEG(index_led);
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

			countermode=counter_green1;
			update7SEGMODE(index_led1);
			if (counter_green1<=0){
				status1=AUTO_YELLOW;
				counter_yellow1=default_yellow1/1000;
			}
			break;
		case AUTO_YELLOW:
			HAL_GPIO_WritePin(RED_LED1_GPIO_Port,RED_LED1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(YELLOW_LED1_GPIO_Port,YELLOW_LED1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GREEN_LED1_GPIO_Port,GREEN_LED1_Pin, GPIO_PIN_SET);

			countermode=counter_yellow1;
			update7SEGMODE(index_led1);
			if (counter_yellow1<=0){
				status1=AUTO_RED;
				counter_red1=default_red1/1000;
			}
			break;
		case AUTO_RED:
			HAL_GPIO_WritePin(RED_LED1_GPIO_Port, RED_LED1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(YELLOW_LED1_GPIO_Port, YELLOW_LED1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GREEN_LED1_GPIO_Port, GREEN_LED1_Pin, GPIO_PIN_SET);

			countermode=counter_red1;
			update7SEGMODE(index_led1);
			if (counter_red1<=0){
				status1=AUTO_GREEN;
				counter_green1=default_green1/1000;
			}
			break;
		default:
			break;
		}
}
