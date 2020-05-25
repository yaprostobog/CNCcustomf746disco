#include <gui/screen1_screen/Screen1View.hpp>
#include "stm32f7xx_hal.h"
#include "main.h"
#include "my_main.h"

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}


static constexpr size_t vTimersCount = 10;

uint8_t vTimer[vTimersCount] = {0};


// Called each ms
void virtualTimer() {

	for(int i = 0; i < vTimersCount; i++){
		if (vTimer[i] > 0) {
			vTimer[i]--;
			if (vTimer[i] == 0){
				///..... call function
				///moveAxis(AxisId::x, false);
			}
		}
	}

}

void virtualTimerStart(uint8_t timerId){
	if (vTimersCount >= timerId){
		if ( vTimer[timerId] == 0){
			//...moveAxis(AxisId::x, true);
		}
		vTimer[timerId] = 5;
	}
}

void Screen1View::function1()
{


/*
  	   HAL_GPIO_WritePin(GPIOI,GPIO_PIN_1,GPIO_PIN_SET);
	   TIM12->CNT = 0;
*/
}


