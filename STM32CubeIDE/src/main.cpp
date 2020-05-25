/* Includes ------------------------------------------------------------------*/
#include "cmsis_os.h"
#include "app_touchgfx.h"
#include "stm32f7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
//#include <stm32746g_discovery_qspi.h>
#include <gui/screen1_screen/Screen1View.hpp>
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include "my_main.h"


void moveAxis(AxisId axis, bool start){
	//......
}

void StartTask02(void const * argument);

void StartTask02(void const * argument)
{
  /* USER CODE BEGIN StartTask02 */
  /* Infinite loop */
  for(;;)
  {
	 osDelay(1000);


  }
}


