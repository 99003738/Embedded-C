/*
 * myAPI.c
 *
 *  Created on: Mar 6, 2021
 *      Author: 99003738
 */

#include "API_header.h"



void delay(uint32_t num)
{
	uint32_t i=0;
	for( i =0;  i<= num; i++ );
}
void pinMode(GPIO_RegDef *inputPort, uint8_t Pin_Number, uint8_t Mode)
{
	GPIO_HANDLE_t gpioPort;
	if (Mode == OUTPUT)
	{
		                  gpioPort.pGPIOx = inputPort;

		                  gpioPort.pinConfig.GPIO_PinNum = Pin_Number;
						  gpioPort.pinConfig.GPIO_PinMode = GPIO_OUTPUT;
						  gpioPort.pinConfig.GPIO_Speed  = GPIO_Medium_Speed;
						  gpioPort.pinConfig.GPIO_OType = GPIO_Push_Pull;
						  gpioPort.pinConfig.GPIO_PuPd = GPIO_Pull_Up;
						  GPIO_PeripheralCLK(inputPort, ENABLE);
						  GPIO_Init(&gpioPort);
	}

	else if (Mode == INPUT)
	{
		                          gpioPort.pGPIOx = inputPort;

				                  gpioPort.pinConfig.GPIO_PinNum = Pin_Number;
								  gpioPort.pinConfig.GPIO_PinMode = GPIO_INPUT;
								 // gpioPort.pinConfig.GPIO_Speed  = GPIO_High_Speed;
								 // gpioPort.pinConfig.GPIO_OType = GPIO_Push_Pull;
								  gpioPort.pinConfig.GPIO_PuPd = GPIO_Pull_Down;
								  GPIO_PeripheralCLK(inputPort, ENABLE);
								  GPIO_Init(&gpioPort);
	}


}


void PinModePuPd(GPIO_RegDef *inputPort, uint8_t Pin_Number, uint8_t Mode, uint8_t PUPD_status)
{
	GPIO_HANDLE_t gpioPort;
		if ((Mode == OUTPUT) && (PUPD_status == PullUp))
		{

			                  gpioPort.pGPIOx = inputPort;

			                  gpioPort.pinConfig.GPIO_PinNum = Pin_Number;
							  gpioPort.pinConfig.GPIO_PinMode = GPIO_OUTPUT;
							  gpioPort.pinConfig.GPIO_Speed  = GPIO_Medium_Speed;
							  gpioPort.pinConfig.GPIO_OType = GPIO_Push_Pull;
							  gpioPort.pinConfig.GPIO_PuPd = GPIO_Pull_Up;
							  GPIO_PeripheralCLK(inputPort, ENABLE);
							  GPIO_Init(&gpioPort);
		}

		else if ((Mode == OUTPUT) && (PUPD_status == PullDown))
		{
			               gpioPort.pGPIOx = inputPort;

		                  gpioPort.pinConfig.GPIO_PinNum = Pin_Number;
			              gpioPort.pinConfig.GPIO_PinMode = GPIO_OUTPUT;
			              gpioPort.pinConfig.GPIO_Speed  = GPIO_Medium_Speed;
			              gpioPort.pinConfig.GPIO_OType = GPIO_Open_Drain;
			              gpioPort.pinConfig.GPIO_PuPd = GPIO_Pull_Down;
			              GPIO_PeripheralCLK(inputPort, ENABLE);
			              GPIO_Init(&gpioPort);
		}
}

void digitalWritePin(GPIO_RegDef *pGPIOx, uint8_t Pin_Number, uint8_t Value)
{
	 if (Value == HIGH)
		 {
			 pGPIOx->ODR |= (1<< Pin_Number);
		 }
     if (Value == LOW)
		 {
			 ((pGPIOx -> ODR) &= ~(1<< Pin_Number));
		 }
}


void digitalWritePort(GPIO_RegDef *pGPIOx, uint16_t Value)
{
	 pGPIOx->ODR = Value;
}

uint16_t digitalReadPort(GPIO_RegDef *pGPIOx)
{
	     uint16_t temp = 0;
		 temp = (uint16_t) pGPIOx -> IDR;
		 return temp;
}
uint16_t digitalReadPin(GPIO_RegDef *pGPIOx, uint8_t Pin_Number)
{
	      uint8_t value;
		 value = (uint8_t)((pGPIOx->IDR >> Pin_Number) & 0x00000001);
		 return value;
}

int ledStart(void);



