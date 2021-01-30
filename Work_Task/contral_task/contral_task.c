#include "contral_task.h"

#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

#include "motor.h"
/*
*@brief:系统运动控制任务
*@param:* pvParameters
*@retval:None
*/
void Contral_Task(void const * pvParameters)
{
	while(1)
	{
		Motor_Forward();
		
		
		Motor_Pwm_Output(0,30);
		Motor_Pwm_Output(1,30);

		osDelay(10);
	}
}