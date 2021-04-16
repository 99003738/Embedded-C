/*
 * Light.c
 *
 *  Created on: Mar 8, 2021
 *      Author: 99003738
 */
#include "Vehicle_Night_Light.h"


void LDR_Init(void)
{
	// Connecting port - GPIOD and Pin D2 as input for LDR

	pinMode(GPIOD,2,INPUT);

	//Connecting multilight available on board for showing different section of vehicle to be activated during the Night

	pinMode(GPIOD,12,OUTPUT);
	pinMode(GPIOD,13,OUTPUT);
	pinMode(GPIOD,14,OUTPUT);
	pinMode(GPIOD,15,OUTPUT);



}

void  LDR_status(void)
{

	uint8_t ldr_state = digitalReadPin(GPIOD,2);;
			if (!(ldr_state))
			{
				digitalWritePin(GPIOD,12,LOW);
				digitalWritePin(GPIOD,13,LOW);
				digitalWritePin(GPIOD, 14,LOW);
				digitalWritePin(GPIOD, 15,LOW);
			}
			else
			{
				digitalWritePin(GPIOD,12,HIGH);
			    digitalWritePin(GPIOD,13,HIGH);
			    digitalWritePin(GPIOD, 14,HIGH);
			    digitalWritePin(GPIOD, 15,HIGH);
			}
}
