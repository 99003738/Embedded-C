/*
 * main.c
 *
 *  Created on: Mar 8, 2021
 *      Author: 99003738
 */
#include "Fuel_Meter.h"
#include "Vehicle_Night_Light.h"
#include "Relay.h"
#include "Gas.h"
#include "State_machine.h"

int main()
{
  uint8_t lr_status =0;
  lr_status = digitalReadPin(GPIOA,0);
    pinMode(GPIOA,0,INPUT);
	Fuel_Init();
	LDR_Init();
	Motor_Init();
	Gas_Init();
	State_init();
	while(1)
	{
    LDR_status();
	Fuel_status();
	Motor_function();
	Gas_detect();
	if (lr_status == HIGH)
	{
      State_trans();
	}
	}


	return 0;

}

