#include "user_task.h"

#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

#include "gpio.h"
#include "usart.h"

/*
*@brief:ϵͳ�û�����
*@param:* pvParameters
*@retval:None
*/
void User_Task(void const * pvParameters)
{
	while(1)
	{
		printf("���ڲ���\r\n");
		HAL_GPIO_WritePin(USER_LED_GPIO_Port, USER_LED_Pin, GPIO_PIN_RESET);
		osDelay(1000);
		HAL_GPIO_WritePin(USER_LED_GPIO_Port, USER_LED_Pin, GPIO_PIN_SET);
		osDelay(1000);
	}
}

