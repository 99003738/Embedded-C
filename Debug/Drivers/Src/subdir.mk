################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Src/Fuel.c \
../Drivers/Src/Gas.c \
../Drivers/Src/Led_Blinking.c \
../Drivers/Src/Light.c \
../Drivers/Src/Relay.c \
../Drivers/Src/STM32F4xx_GPIO_driver.c \
../Drivers/Src/State_machine.c \
../Drivers/Src/main.c \
../Drivers/Src/myAPI.c 

OBJS += \
./Drivers/Src/Fuel.o \
./Drivers/Src/Gas.o \
./Drivers/Src/Led_Blinking.o \
./Drivers/Src/Light.o \
./Drivers/Src/Relay.o \
./Drivers/Src/STM32F4xx_GPIO_driver.o \
./Drivers/Src/State_machine.o \
./Drivers/Src/main.o \
./Drivers/Src/myAPI.o 

C_DEPS += \
./Drivers/Src/Fuel.d \
./Drivers/Src/Gas.d \
./Drivers/Src/Led_Blinking.d \
./Drivers/Src/Light.d \
./Drivers/Src/Relay.d \
./Drivers/Src/STM32F4xx_GPIO_driver.d \
./Drivers/Src/State_machine.d \
./Drivers/Src/main.d \
./Drivers/Src/myAPI.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Src/Fuel.o: ../Drivers/Src/Fuel.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -DDEBUG -c -I"D:/STM32Cube/Driver_development/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/Src/Fuel.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/Src/Gas.o: ../Drivers/Src/Gas.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -DDEBUG -c -I"D:/STM32Cube/Driver_development/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/Src/Gas.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/Src/Led_Blinking.o: ../Drivers/Src/Led_Blinking.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -DDEBUG -c -I"D:/STM32Cube/Driver_development/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/Src/Led_Blinking.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/Src/Light.o: ../Drivers/Src/Light.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -DDEBUG -c -I"D:/STM32Cube/Driver_development/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/Src/Light.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/Src/Relay.o: ../Drivers/Src/Relay.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -DDEBUG -c -I"D:/STM32Cube/Driver_development/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/Src/Relay.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/Src/STM32F4xx_GPIO_driver.o: ../Drivers/Src/STM32F4xx_GPIO_driver.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -DDEBUG -c -I"D:/STM32Cube/Driver_development/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/Src/STM32F4xx_GPIO_driver.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/Src/State_machine.o: ../Drivers/Src/State_machine.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -DDEBUG -c -I"D:/STM32Cube/Driver_development/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/Src/State_machine.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/Src/main.o: ../Drivers/Src/main.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -DDEBUG -c -I"D:/STM32Cube/Driver_development/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/Src/main.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/Src/myAPI.o: ../Drivers/Src/myAPI.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -DDEBUG -c -I"D:/STM32Cube/Driver_development/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/Src/myAPI.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

