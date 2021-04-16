/*
 * Gas.c
 *
 *  Created on: Mar 9, 2021
 *      Author: 99003738
 */

#include "Gas.h"


void Gas_Init(void)
{
	pinMode(GPIOD,5,INPUT);
	pinMode(GPIOD,15,OUTPUT);
}
void Gas_detect(void)
{
	uint8_t value=1;

	value = digitalReadPin(GPIOD,5);
	if(value == 0)
	{
		digitalWritePin(GPIOD,15,HIGH);
		delay(50000);
		digitalWritePin(GPIOD,15,LOW);
		delay(50000);
	}

		//digitalWritePin(GPIOD,15,HIGH);
}



