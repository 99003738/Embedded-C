/*
 * Relay.c
 *
 *  Created on: Mar 9, 2021
 *      Author: 99003738
 */

#include "Relay.h"



void Motor_Init(void)
{
	// Initialising the Motor controll pin of relay IN1;
	// Taking PORT-GPIOD and Pin PD3 as output for relay connection.
	pinMode(GPIOD,3,INPUT);
	pinMode(GPIOD,12,OUTPUT);
}
void Motor_function(void)
{
	uint8_t button_pin=0;
	button_pin = digitalReadPin(GPIOD,3);
	if (button_pin == HIGH)
	{
		digitalWritePin(GPIOD,12,HIGH);
		delay(30000);
		digitalWritePin(GPIOD,12,LOW);
		delay(30000);

	}
	if (button_pin == LOW)
	{
		digitalWritePin(GPIOD,12,HIGH);
	}
}
