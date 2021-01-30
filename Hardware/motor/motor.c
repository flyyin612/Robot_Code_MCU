#include "motor.h"
#include "gpio.h"


/*
*@brief:С��ǰ��
*@param:None
*@retval:None
*/
void Motor_Forward(void)
{
	LEFT_AIN1_HIGH;
	LEFT_AIN2_LOW;
	
	RIGHT_BIN2_HIGH;
	RIGHT_BIN1_LOW;
}

/*
*@brief:С������
*@param:None
*@retval:None
*/
void Motor_Back(void)
{
	LEFT_AIN1_LOW;
	LEFT_AIN2_HIGH;
	
	RIGHT_BIN1_LOW;
	RIGHT_BIN2_HIGH;
}

/*
*@brief:���PWM����
*@param:None
*@retval:None
*/
void Motor_Pwm_Output(uint8_t ucPin,uint16_t ucDuty)
{
	switch(ucPin)
	{
		case PWM_PIN_RWheel: RIGHT_PWM_DUTY = ucDuty; break;
		case PWM_PIN_LWheel: LEFT_PWM_DUTY = ucDuty; break;
			
	 default :    break;
	}
}

