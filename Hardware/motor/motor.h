#ifndef __MOTOR_H_
#define __MOTOR_H_

#include "stm32f1xx_hal.h"
#include "tim.h"

#define LEFT_AIN1_HIGH				HAL_GPIO_WritePin(AIN1_GPIO_Port, AIN1_Pin, GPIO_PIN_SET);
#define LEFT_AIN1_LOW				  HAL_GPIO_WritePin(AIN1_GPIO_Port, AIN1_Pin, GPIO_PIN_RESET);

#define LEFT_AIN2_HIGH				HAL_GPIO_WritePin(AIN2_GPIO_Port, AIN2_Pin, GPIO_PIN_SET);
#define LEFT_AIN2_LOW					HAL_GPIO_WritePin(AIN2_GPIO_Port, AIN2_Pin, GPIO_PIN_RESET);

#define RIGHT_BIN1_HIGH				HAL_GPIO_WritePin(BIN1_GPIO_Port, BIN1_Pin, GPIO_PIN_SET);
#define RIGHT_BIN1_LOW				HAL_GPIO_WritePin(BIN1_GPIO_Port, BIN1_Pin, GPIO_PIN_RESET);

#define RIGHT_BIN2_HIGH				HAL_GPIO_WritePin(BIN2_GPIO_Port, BIN2_Pin, GPIO_PIN_SET);
#define RIGHT_BIN2_LOW				HAL_GPIO_WritePin(BIN2_GPIO_Port, BIN2_Pin, GPIO_PIN_RESET);

#define PWM_PIN_RWheel        0        // ÓÒÇý¶¯ÂÖ  
#define PWM_PIN_LWheel        1        // ×óÇý¶¯ÂÖ 

#define LEFT_PWM_DUTY					htim1.Instance->CCR1
#define RIGHT_PWM_DUTY				htim1.Instance->CCR4

void Motor_Forward(void);

void Motor_Back(void);

void Motor_Pwm_Output(uint8_t ucPin,uint16_t ucDuty);

#endif
