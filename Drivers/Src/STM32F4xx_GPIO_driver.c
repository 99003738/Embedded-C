/*
 * STM32F4xx_GPIO_driver.c
 *
 *  Created on: Mar 5, 2021
 *      Author: 99003738
 */
#include "STM32F4xx_GPIO_driver.h"
// I.    Peripheral Clock Enabled or Disabled

 void GPIO_PeripheralCLK(GPIO_RegDef *pGPIOx, uint8_t ENorDI)
 {
	 if (ENorDI == ENABLE)
	 {
		 if (pGPIOx == GPIOA)
		 {
			 GPIOA_PCLOCK_ENABLE;
		 }
		 else if (pGPIOx == GPIOB)
		 {
			 GPIOB_PCLOCK_ENABLE;
		 }
		 else if (pGPIOx == GPIOC)
		 {
			GPIOC_PCLOCK_ENABLE;
		 }
		 else if (pGPIOx == GPIOD)
		 {
			 GPIOD_PCLOCK_ENABLE;
		 }
		 else if (pGPIOx == GPIOE)
		{
			 GPIOE_PCLOCK_ENABLE;
	    }


	 }

	 else
	 {
		 if (pGPIOx == GPIOA)
		 {
			 GPIOA_PCLOCK_DISABLE;
		 }
		 else if (pGPIOx == GPIOB)
		 {
			 GPIOA_PCLOCK_DISABLE;
		 }
	 }

///write the other GPIO enable and disable cjonfiguration.

 }


// II.   Init and DInit

 void GPIO_Init(GPIO_HANDLE_t *pGPIOHandle)
 {
	 // 1. Config Pin Mode
	 uint32_t temp;
	 uint16_t temp1;
	temp =  (pGPIOHandle->pinConfig.GPIO_PinMode << (2*pGPIOHandle->pinConfig.GPIO_PinNum));
	 pGPIOHandle->pGPIOx -> MODER &= ~(0x3 << (2*pGPIOHandle->pinConfig.GPIO_PinNum));
	(pGPIOHandle->pGPIOx->MODER) |= temp;


	// 2. Congiuration OTYPE

	  temp1 = (pGPIOHandle -> pinConfig.GPIO_OType << pGPIOHandle->pinConfig.GPIO_PinNum);
	  (pGPIOHandle -> pGPIOx ->OTYPER) &= ~(0x1 << pGPIOHandle->pinConfig.GPIO_PinNum);
	  (pGPIOHandle -> pGPIOx ->OTYPER) |= temp1;


	 // 3. Configuration Speed.
	  uint32_t temp2;
	  temp2 =  (pGPIOHandle ->pinConfig.GPIO_Speed << (2*pGPIOHandle->pinConfig.GPIO_PinNum));
	  pGPIOHandle -> pGPIOx->OSPEEDR = ~(0x3) << (2*pGPIOHandle->pinConfig.GPIO_PinNum);
	  pGPIOHandle -> pGPIOx ->OSPEEDR |= temp2;

	  // 4. COnfiguration PUPD

	  	uint32_t temp3;
	  	temp3 = (pGPIOHandle -> pinConfig.GPIO_PuPd) << (2*pGPIOHandle->pinConfig.GPIO_PinNum);
	    pGPIOHandle -> pGPIOx ->PUPDR &= ~(0x3) << (2*pGPIOHandle->pinConfig.GPIO_PinNum);
	    pGPIOHandle -> pGPIOx ->PUPDR |= temp3;


	  // 5. Configuration alter

	    uint32_t var1,var2;
	    var1 = pGPIOHandle -> pinConfig.GPIO_PinNum/8;
	    var2 = pGPIOHandle -> pinConfig.GPIO_PinNum%8;
	    (pGPIOHandle ->pGPIOx->AFR[var1]) &= ~(0xf) << (4*var2);
	    pGPIOHandle ->pGPIOx->AFR[var1] = (pGPIOHandle ->pinConfig.GPIO_AltFun << (4*var2));

 }
 void GPIO_DInit(GPIO_RegDef *pGPIOx);


// III.  Read/Write to/from Port/Pin

 uint16_t GPIO_ReadfromPort(GPIO_RegDef *pGPIOx)
 {
	 uint16_t temp = 0;
	 temp = (uint16_t) pGPIOx -> IDR;
	 return temp;

}

 uint8_t GPIO_ReadfromPin(GPIO_RegDef *pGPIOx, uint8_t Pin_Number)
 {

	 uint8_t value;
	 value = (uint8_t)((pGPIOx->IDR >> Pin_Number) & 0x00000001);
	 return value;




	 /* uint32_t temp = 0x0000000;
	 //temp = pGPIOx -> IDR;
	// Read_from_Pin = (uint8_t)(pGPIOx -> IDR >> GPIO_Pin_Num & 0x00000001);
	 if(temp & (1<<Pin_Number))
	 {
		return 1;
	 }
	 else
		 retuturn 0;*/
 }


 void GPIO_WritetoPort(GPIO_RegDef *pGPIOx, uint16_t Value)
 {
	 pGPIOx->ODR = Value;

 }


 void GPIO_WritetoPin(GPIO_RegDef *pGPIOx, uint8_t Pin_Number, uint8_t Value)
 {
	 if (Value == 1)
	 {
		 ((pGPIOx->ODR) |= (1<< Pin_Number));
	 }
	 else
	 {
		 ((pGPIOx -> ODR) &= ~(1<< Pin_Number));
	 }

 }



 void GPIO_Toggle(GPIO_RegDef *pGPIOx, uint8_t Pin_Number)
 {
	 (pGPIOx -> ODR) ^= (1 << Pin_Number);
 }

