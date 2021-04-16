// This is MCU specific header file.

//#include <stdio.h>
#include <stdint.h>

#define ENABLE   1
#define DISABLE  0
#define SET 1
#define RESET 0
/*********************************************** Macros for different BASE_MEMory ****************************************************************/


#define SRAM1                  0x20000000U
#define SRAM2                  0x2001C000U
#define BASE_MEM_FLASH    (uint32_t)0x08000000
#define BASE_MEM_ROM                0x1FFF0000U

/*********************************************** This is Macros for Bus system  ********************************************************************/


#define BUS_BASEADDR         0x40000000U
#define APB1_BUSADDR         0x40000000U
#define APB2_BUSADDR         0x40010000U
#define AHB1_BUSADDR         0x40020000U
#define AHB2_BUSADDR         0x50000000U
#define AHB3_BUSADDR         0xA0000000U

/************************************************ Macros for peripherals hanging onto AHB1 bus ******************************************************/

/**********************  Macros for GPIO'S  **************************************/

#define GPIOA_BASEADDR   (AHB1_BUSADDR + 0x0000)   //0x40020000U
#define GPIOB_BASEADDR   (AHB1_BUSADDR + 0x0400)
#define GPIOC_BASEADDR   (AHB1_BUSADDR + 0x0800)
#define GPIOD_BASEADDR   (AHB1_BUSADDR + 0x0C00)
#define GPIOE_BASEADDR   (AHB1_BUSADDR + 0x1000)
#define GPIOF_BASEADDR   (AHB1_BUSADDR + 0x1400)
#define GPIOG_BASEADDR   (AHB1_BUSADDR + 0x1800)
#define GPIOH_BASEADDR   (AHB1_BUSADDR + 0x1C00)
#define GPIOI_BASEADDR   (AHB1_BUSADDR + 0x2000)
#define GPIOJ_BASEADDR   (AHB1_BUSADDR + 0x2400)
#define GPIOK_BASEADDR   (AHB1_BUSADDR + 0x2800)

/* Macros for Peripherals attached in  AHB1 Bus*/

#define BASE_MEM_RCC               (AHB1_BUSADDR + 0x3800)
#define BASE_MEM_CRC               (AHB1_BUSADDR + 0x3000)
#define BASE_MEM_FLASH_INTERFACE   (AHB1_BUSADDR + 0x3C00)
#define BASE_MEM_BKPSRAM           (AHB1_BUSADDR + 0x4000)
#define BASE_MEM_DM1               (AHB1_BUSADDR + 0x6000)


/* Macros for Peripherals attached in AHB2 Bus*/

#define BASE_MEM_USBOTGFS     (AHB2_BASSADDR + 0x0000)

/* Macros for Peripherals attached in APB1 Bus*/

#define BASE_MEM_TIM2         (APB1_BASSADDR + 0x0000)
#define BASE_MEM_TIM3         (APB1_BASSADDR + 0x0400)
#define BASE_MEM_TIM4         (APB1_BASSADDR + 0x0800)
#define BASE_MEM_TIM5         (APB1_BASSADDR + 0x0C00)
#define BASE_MEM_TIM6         (APB1_BASSADDR + 0x1000)
#define BASE_MEM_TIM7         (APB1_BASSADDR + 0x1400)
#define BASE_MEM_TIM12        (APB1_BASSADDR + 0x1800)
#define BASE_MEM_TIM13        (APB1_BASSADDR + 0x1C00)
#define BASE_MEM_TIM14        (APB1_BASSADDR + 0x2000)
#define BASE_MEM_RTCBKP       (APB1_BASSADDR + 0x2800)
#define BASE_MEM_WWDG         (APB1_BASSADDR + 0x2C00)
#define BASE_MEM_IWDG         (APB1_BASSADDR + 0x3000)
#define BASE_MEM_I2S2EXT      (APB1_BASSADDR + 0x3400)
#define BASE_MEM_SPI2_I2S2    (APB1_BASSADDR + 0x3800)
#define BASE_MEM_SPI3_I2S3    (APB1_BASSADDR + 0x3C00)
#define BASE_MEM_I2S3EXT      (APB1_BASSADDR + 0x4000)
#define BASE_MEM_USART2       (APB1_BASSADDR + 0x4400)
#define BASE_MEM_USART3       (APB1_BASSADDR + 0x4800)
#define BASE_MEM_USART4       (APB1_BASSADDR + 0x4C00)
#define BASE_MEM_USART5       (APB1_BASSADDR + 0x5000)
#define BASE_MEM_I2C1         (APB1_BASSADDR + 0x5400)
#define BASE_MEM_I2C2         (APB1_BASSADDR + 0x5800)
#define BASE_MEM_I2C3         (APB1_BASSADDR + 0x5C00)
#define BASE_MEM_CAN1         (APB1_BASSADDR + 0x6400)
#define BASE_MEM_CAN2         (APB1_BASSADDR + 0x6800)
#define BASE_MEM_PWR          (APB1_BASSADDR + 0x7000)
#define BASE_MEM_DAC          (APB1_BASSADDR + 0x7400)
#define BASE_MEM_UART7        (APB1_BASSADDR + 0x7800)
#define BASE_MEM_UART8        (APB1_BASSADDR + 0x7C00)


/* Macros for Peripherals in APB2*/

#define BASE_MEM_TIM1         (APB2_BASSADDR + 0x0000)
#define BASE_MEM_TIM8         (APB2_BASSADDR + 0x0400)
#define BASE_MEM_USART1       (APB2_BASSADDR + 0x1000)
#define BASE_MEM_USART6       (APB2_BASSADDR + 0x1400)
#define BASE_MEM_ADC          (APB2_BASSADDR + 0x2000)
#define BASE_MEM_SDIO         (APB2_BASSADDR + 0x2C00)
#define BASE_MEM_SPI1         (APB2_BASSADDR + 0x3000)
#define BASE_MEM_SPI4         (APB2_BASSADDR + 0x3400)
#define BASE_MEM_SYSCFG       (APB2_BASSADDR + 0x3800)
#define BASE_MEM_EXT1         (APB2_BASSADDR + 0x3C00)
#define BASE_MEM_TIM9         (APB2_BASSADDR + 0x4000)
#define BASE_MEM_TIM10        (APB2_BASSADDR + 0x4400)
#define BASE_MEM_TIM11        (APB2_BASSADDR + 0x4800)
#define BASE_MEM_SPI5         (APB2_BASSADDR + 0x5000)
#define BASE_MEM_SPI6         (APB2_BASSADDR + 0x5400)
#define BASE_MEM_SAI1         (APB2_BASSADDR + 0x5800)
#define BASE_MEM_LCD_TFT      (APB2_BASSADDR + 0x6800)



/********************************* GPIO Register Definition ******************************************/
#define _vo volatile


typedef struct
{
	_vo uint32_t MODER ;               //00 +offset
	_vo uint32_t OTYPER;               //04 +offset
	_vo uint32_t OSPEEDR;              //08 +offset
	_vo uint32_t PUPDR;                //0C +offset
	_vo uint32_t IDR;                  //10 +offset
	_vo uint32_t ODR ;                 //14 +offset
	_vo uint32_t BSRR;                 //18 +offset
	_vo uint32_t LCKR;                 //1C +offset
	_vo uint32_t AFR[2];               //20 +offset

}GPIO_RegDef;

/************************************ RCC Register Definition ********************************/


typedef struct
{

    _vo uint32_t RCC_CR;
    _vo uint32_t RCC_PLLCFGR;
    _vo uint32_t RCC_CFGR;
    _vo uint32_t RCC_CIR;
    _vo uint32_t RCC_AHB1RSTR;
    _vo uint32_t RCC_AHB2RSTR;
    _vo uint32_t RCC_AHB3RSTR;
        uint32_t RESERVED0;
    _vo uint32_t RCC_APB1RSTR;
    _vo uint32_t RCC_APB2RSTR;
         uint32_t RESERVED1[2];
    _vo uint32_t RCC_AHB1ENR;
    _vo uint32_t RCC_AHB2ENR;
    _vo uint32_t RCC_AHB3ENR;
         uint32_t RESERVED2;
    _vo uint32_t RCC_APB1ENR;
    _vo uint32_t RCC_APB2ENR;
        uint32_t RESERVED3[2];
    _vo uint32_t RCC_AHB1LPENR;
    _vo uint32_t RCC_AHB2LPENR;
    _vo uint32_t RCC_AHB3LPENR;
        uint32_t RESERVED4;
    _vo uint32_t RCC_APB1LPENR;
    _vo uint32_t RCC_APB2LPENR;
        uint32_t RESERVED5[2];
    _vo uint32_t RCC_BDCR;
    _vo uint32_t RCC_CSR;
        uint32_t RESERVED6[2];
    _vo uint32_t RCC_SSCGR;
    _vo uint32_t RCC_PLLI2SCFGR;
    _vo uint32_t RCC_PLLSAICFGR;
    _vo uint32_t RCC_DCKCFGR;

}RCC_RegDef_t;

#define RCC  ((RCC_RegDef_t*)BASE_MEM_RCC)      // 0x40023800
/******************************************* MACROS FOR GPIO POINTER STRUCTURE *****************************************************************/


#define GPIOA (GPIO_RegDef*)GPIOA_BASEADDR
#define GPIOB (GPIO_RegDef*)GPIOB_BASEADDR
#define GPIOC (GPIO_RegDef*)GPIOC_BASEADDR
#define GPIOD (GPIO_RegDef*)GPIOD_BASEADDR
#define GPIOE (GPIO_RegDef*)GPIOE_BASEADDR
#define GPIOF (GPIO_RegDef*)GPIOF_BASEADDR
#define GPIOG (GPIO_RegDef*)GPIOG_BASEADDR
#define GPIOH (GPIO_RegDef*)GPIOH_BASEADDR
#define GPIOI (GPIO_RegDef*)GPIOI_BASEADDR
#define GPIOJ (GPIO_RegDef*)GPIOJ_BASEADDR
#define GPIOK (GPIO_RegDef*)GPIOK_BASEADDR



/********************************************* MACROS FOR ENABLING THE CLOCK FOR GPIO'S **********************************************************/


#define GPIOA_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR |= (1<<0))
#define GPIOB_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR |= (1<<1))
#define GPIOC_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR|=(1<<2))
#define GPIOD_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR|=(1<<3))
#define GPIOE_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR|=(1<<4))
#define GPIOF_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR|=(1<<5))
#define GPIOG_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR|=(1<<6))
#define GPIOH_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR|=(1<<7))
#define GPIOI_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR|=(1<<8))
#define GPIOJ_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR|=(1<<9))
#define GPIOK_PCLOCK_ENABLE  (RCC->RCC_AHB1ENR|=(1<<10))



/*********************************************** MACROS FOR DISABLING THE CLOCK FOR GPIO'S  ********************************************************/



#define GPIOA_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR &=~(1<<0))
#define GPIOB_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR &=~(1<<1))
#define GPIOC_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR &=~(1<<2))
#define GPIOD_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR &=~(1<<3))
#define GPIOE_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR &=~(1<<4))
#define GPIOF_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR &=~(1<<5))
#define GPIOG_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR &=~(1<<6))
#define GPIOH_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR &=~(1<<7))
#define GPIOI_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR &=~(1<<8))
#define GPIOJ_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR &=~(1<<9))
#define GPIOK_PCLOCK_DISABLE  (RCC->RCC_AHB1ENR &=~(1<<10))










