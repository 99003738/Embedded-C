/*
 * API_header.h
 *
 *  Created on: Mar 6, 2021
 *      Author: 99003738
 */

#ifndef INC_API_HEADER_H_
#define INC_API_HEADER_H_

#include "STM32F4xx_GPIO_driver.h"

#define INPUT 0
#define OUTPUT 1

#define HIGH 1
#define LOW 0

#define PullUp 1
#define PullDown 0

void pinMode(GPIO_RegDef *pGpIOx, uint8_t Pin_Number, uint8_t Mode);
void digitalWritePin(GPIO_RegDef *pGpIOx, uint8_t Pin_Number, uint8_t Value);
void digitalWritePort(GPIO_RegDef *pGPIOx, uint16_t Value);
uint16_t digitalReadPort(GPIO_RegDef *pGpIOx);
uint16_t digitalReadPin(GPIO_RegDef *pGpIOx, uint8_t Pin_Number);
void PinModePuPd(GPIO_RegDef *pGpIOx, uint8_t Pin_Number, uint8_t Mode, uint8_t PUPD_status);
void delay(uint32_t num);







#endif /* INC_API_HEADER_H_ */
