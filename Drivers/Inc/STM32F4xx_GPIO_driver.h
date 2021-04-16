/*
 * STM32F4xx_GPIO_driver.h
 *
 *  Created on: Mar 5, 2021
 *      Author: 99003738
 */

#ifndef INC_STM32F4XX_GPIO_DRIVER_H_
#define INC_STM32F4XX_GPIO_DRIVER_H_
 /* INC_STM32F4XX_GPIO_DRIVER_H_ */

#include "STM32F4xx.h"


/***************************** Creating the structure for GPIO Pin Configuration ***********************************************/

typedef struct
{
	uint8_t GPIO_PinNum;      // 16
	uint8_t GPIO_PinMode;     // 4
	uint8_t GPIO_Speed;       // 4
	uint8_t GPIO_OType;       // 2
	uint8_t GPIO_PuPd;        // 3
	uint8_t GPIO_AltFun;       //16
}GPIO_PinConfig;

/****************************************************************************************************************************/

/******************************************  Creating handle structure  ****************************************************/

typedef struct
{
   GPIO_RegDef *pGPIOx;         // Declaring a pointer variable of GPIO_RegDef type for selecting the port.
   GPIO_PinConfig pinConfig;    // Declaring the variable for pin configuration of structure type GPIO-PinConfig structure.

}GPIO_HANDLE_t;

/*****************************************************************************************************************************/

/*****************************************   API's Prototype  ***************************************************************/

// I.    Peripheral Clock Enabled or Disabled

 void GPIO_PeripheralCLK(GPIO_RegDef *pGPIOx, uint8_t ENorDI);


// II.   Init and DInit

 void GPIO_Init(GPIO_HANDLE_t *pGPIOHandle);
 void GPIO_DInit(GPIO_RegDef *pGPIOx);


// III.  Read/Write to/from Port/Pin

 uint16_t GPIO_ReadfromPort(GPIO_RegDef *pGPIOx);
 uint8_t GPIO_ReadfromPin(GPIO_RegDef *pGpIOx, uint8_t Pin_Number);
 void GPIO_WritetoPort(GPIO_RegDef *pGPIOx, uint16_t Value);
 void GPIO_WritetoPin(GPIO_RegDef *pGPIOx, uint8_t Pin_Number, uint8_t Value);
 void GPIO_Toggle(GPIO_RegDef *pGPIOx, uint8_t Pin_Number);





 /****************************************************************************************************************************/

/***********************************  Defining Macros For PinNum    *********************************************************/

#define GPIO_Pin_Numb_0     0
#define GPIO_Pin_Numb_1     1
#define GPIO_Pin_Numb_2     2
#define GPIO_Pin_Numb_3     3
#define GPIO_Pin_Numb_4     4
#define GPIO_Pin_Numb_5     5
#define GPIO_Pin_Numb_6     6
#define GPIO_Pin_Numb_7     7
#define GPIO_Pin_Numb_8     8
#define GPIO_Pin_Numb_9     9
#define GPIO_Pin_Numb_10    10
#define GPIO_Pin_Numb_11    11
#define GPIO_Pin_Numb_12    12
#define GPIO_Pin_Numb_13    13
#define GPIO_Pin_Numb_14    14
#define GPIO_Pin_Numb_15    15


/*************************************************************************************************************************************/

/************************************  Defining Macros for PinMode  ******************************************************************/


#define GPIO_INPUT   0
#define GPIO_OUTPUT  1
#define GPIO_ALtFun  2
#define GPIO_Analog  3

/************************************************************************************************************************************/


/******************************** Defining Macros for Speed  *************************************************************************/

#define GPIO_Low_Speed         0
#define GPIO_Medium_Speed      1
#define GPIO_High_Speed        2
#define GPIO_Very_High_Speed   3

/***************************************************************************************************************************************/

 /********************************  Defining Macros for OTYPER *************************************************************************/


#define GPIO_Push_Pull       0
#define GPIO_Open_Drain      1


/****************************************************************************************************************************************/

/********************************* Defining Macros for PUPDR ****************************************************************************/


#define GPIO_No_Pullup_Pulldown    0
#define GPIO_Pull_Up               1
#define GPIO_Pull_Down             2
#define GPIO_Reserved              3



/*****************************************************************************************************************************************/

/********************************* Defining Macros for Alternate Function ****************************************************************/


/*
#define AFO        0x0000
#define AF1        0x0001
#define AF2        0x0010
#define AF3        0x0011
#define AF4        0x0100
#define AF5        0x0101
#define AF6        0x0110
#define AF7        0x0111
#define AF8        0x1000
#define AF9        0x1001
#define AF10       0x1010
#define AF11       0x1011
#define AF12       0x1100
#define AF13       0x1101
#define AF14       0x1110
#define AF15       0x1111
*/












#endif

















