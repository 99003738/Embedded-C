/*
 * Fuel.c
 *
 *  Created on: Mar 8, 2021
 *      Author: 99003738
 */

#include "Fuel_Meter.h"


void Fuel_Init(void)
{
	pinMode(GPIOD,1,INPUT);                  // Making Port-GPIOD & Pin-01 to be input for fuel
	pinMode(GPIOD,13,OUTPUT);                // Making Port - GPIOD & Pin-13 as output check.
    pinMode(GPIOD,12,OUTPUT);
}
void Fuel_status(void)
{
	uint8_t value=0;
	value = digitalReadPin(GPIOD,1);
	if (value == 1)
	{
		digitalWritePin(GPIOD,13,HIGH);
		digitalWritePin(GPIOD,12,LOW);
	}
	if (value == 0)
	{
		digitalWritePin(GPIOD,13,LOW);
		digitalWritePin(GPIOD,12,HIGH);
	}
}

