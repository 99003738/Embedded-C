/*
 * State_machine.c
 *
 *  Created on: Mar 9, 2021
 *      Author: 99003738
 */

#include "State_machine.h"



void State_init(void)
{
	pinMode(GPIOA,0,INPUT);
}


void State_trans(void)
{

	state_value = digitalReadPin(GPIOA,0);
	if (state_value == HIGH)
	{
		state_01();
	}
}

void state_01()
{
	digitalWritePin(GPIOD,12,LOW);
	digitalWritePin(GPIOD,13,LOW);
	digitalWritePin(GPIOD,14,LOW);
	digitalWritePin(GPIOD,15,LOW);
	state_value = digitalReadPin(GPIOA,0);
	while(state_value != HIGH)
	{
		digitalWritePin(GPIOD,12,HIGH);
	}
	state_02();
}

void state_02()
{
	digitalWritePin(GPIOD,12,LOW);
	state_value = digitalReadPin(GPIOA,0);
	while(state_value != HIGH)
	{
		digitalWritePin(GPIOD,13,HIGH);
	}
	state_03();
}

void state_03()
{
	digitalWritePin(GPIOD,13,LOW);
	state_value = digitalReadPin(GPIOA,0);
		while(state_value != HIGH)
		{
			digitalWritePin(GPIOD,14,HIGH);
		}
		digitalWritePin(GPIOD,14,LOW);
}


