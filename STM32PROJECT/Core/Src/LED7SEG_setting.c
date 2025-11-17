/*
 * LED7SEG_setting.c
 *
 *  Created on: Nov 3, 2025
 *      Author: tri
 */

#include "LED7SEG_setting.h"


void display7SEG(int num) {
      switch(num) {
          case 0:
              HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
              break;
          case 1:
              HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
              break;
          case 2:
              HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
              break;
          case 3:
              HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
              break;
          case 4:
              HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
              break;
          case 5:
              HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
              break;
          case 6:
              HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
              break;
          case 7:
              HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
              break;
          case 8:
              HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
              break;
          case 9:
              HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
              break;
      }
  }
void display7SEGMODE(int num) {
      switch(num) {
          case 0:
              HAL_GPIO_WritePin(SEGM0_GPIO_Port, SEGM0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM1_GPIO_Port, SEGM1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM2_GPIO_Port, SEGM2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM3_GPIO_Port, SEGM3_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM4_GPIO_Port, SEGM4_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM5_GPIO_Port, SEGM5_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM6_GPIO_Port, SEGM6_Pin, GPIO_PIN_SET);
              break;
          case 1:
              HAL_GPIO_WritePin(SEGM0_GPIO_Port, SEGM0_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM1_GPIO_Port, SEGM1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM2_GPIO_Port, SEGM2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM3_GPIO_Port, SEGM3_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM4_GPIO_Port, SEGM4_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM5_GPIO_Port, SEGM5_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM6_GPIO_Port, SEGM6_Pin, GPIO_PIN_SET);
              break;
          case 2:
              HAL_GPIO_WritePin(SEGM0_GPIO_Port, SEGM0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM1_GPIO_Port, SEGM1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM2_GPIO_Port, SEGM2_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM3_GPIO_Port, SEGM3_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM4_GPIO_Port, SEGM4_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM5_GPIO_Port, SEGM5_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM6_GPIO_Port, SEGM6_Pin, GPIO_PIN_RESET);
              break;
          case 3:
              HAL_GPIO_WritePin(SEGM0_GPIO_Port, SEGM0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM1_GPIO_Port, SEGM1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM2_GPIO_Port, SEGM2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM3_GPIO_Port, SEGM3_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM4_GPIO_Port, SEGM4_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM5_GPIO_Port, SEGM5_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM6_GPIO_Port, SEGM6_Pin, GPIO_PIN_RESET);
              break;
          case 4:
              HAL_GPIO_WritePin(SEGM0_GPIO_Port, SEGM0_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM1_GPIO_Port, SEGM1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM2_GPIO_Port, SEGM2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM3_GPIO_Port, SEGM3_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM4_GPIO_Port, SEGM4_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM5_GPIO_Port, SEGM5_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM6_GPIO_Port, SEGM6_Pin, GPIO_PIN_RESET);
              break;
          case 5:
              HAL_GPIO_WritePin(SEGM0_GPIO_Port, SEGM0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM1_GPIO_Port, SEGM1_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM2_GPIO_Port, SEGM2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM3_GPIO_Port, SEGM3_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM4_GPIO_Port, SEGM4_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM5_GPIO_Port, SEGM5_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM6_GPIO_Port, SEGM6_Pin, GPIO_PIN_RESET);
              break;
          case 6:
              HAL_GPIO_WritePin(SEGM0_GPIO_Port, SEGM0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM1_GPIO_Port, SEGM1_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM2_GPIO_Port, SEGM2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM3_GPIO_Port, SEGM3_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM4_GPIO_Port, SEGM4_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM5_GPIO_Port, SEGM5_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM6_GPIO_Port, SEGM6_Pin, GPIO_PIN_RESET);
              break;
          case 7:
              HAL_GPIO_WritePin(SEGM0_GPIO_Port, SEGM0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM1_GPIO_Port, SEGM1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM2_GPIO_Port, SEGM2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM3_GPIO_Port, SEGM3_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM4_GPIO_Port, SEGM4_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM5_GPIO_Port, SEGM5_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM6_GPIO_Port, SEGM6_Pin, GPIO_PIN_SET);
              break;
          case 8:
              HAL_GPIO_WritePin(SEGM0_GPIO_Port, SEGM0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM1_GPIO_Port, SEGM1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM2_GPIO_Port, SEGM2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM3_GPIO_Port, SEGM3_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM4_GPIO_Port, SEGM4_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM5_GPIO_Port, SEGM5_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM6_GPIO_Port, SEGM6_Pin, GPIO_PIN_RESET);
              break;
          case 9:
              HAL_GPIO_WritePin(SEGM0_GPIO_Port, SEGM0_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM1_GPIO_Port, SEGM1_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM2_GPIO_Port, SEGM2_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM3_GPIO_Port, SEGM3_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM4_GPIO_Port, SEGM4_Pin, GPIO_PIN_SET);
              HAL_GPIO_WritePin(SEGM5_GPIO_Port, SEGM5_Pin, GPIO_PIN_RESET);
              HAL_GPIO_WritePin(SEGM6_GPIO_Port, SEGM6_Pin, GPIO_PIN_RESET);
              break;
      }
  }
void update7SEGMODE(int countermode, int index){
	switch(index){
	case 0:
		HAL_GPIO_WritePin(EN2_GPIO_Port,EN2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port,EN3_Pin, GPIO_PIN_SET);
		display7SEGMODE(countermode/10);
		break;
	case 1:
		HAL_GPIO_WritePin(EN2_GPIO_Port,EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port,EN3_Pin, GPIO_PIN_RESET);
		display7SEGMODE(countermode%10);
		break;
	default:
		break;
	}
}
void update7SEG(int counter, int index){
    switch(index){
    case 0:
        HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
        display7SEG(counter / 10);
        break;
    case 1:
        HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
        display7SEG(counter % 10);
        break;
    }
}


