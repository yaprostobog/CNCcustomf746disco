################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/projects/CNCcustomf746disco/Drivers/BSP/stm32746g_discovery_qspi.c 

OBJS += \
./Drivers/BSP/stm32746g_discovery_qspi.o 

C_DEPS += \
./Drivers/BSP/stm32746g_discovery_qspi.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/stm32746g_discovery_qspi.o: C:/projects/CNCcustomf746disco/Drivers/BSP/stm32746g_discovery_qspi.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx '-DUSE_BPP=16' -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/generated/gui_generated/include -I../../Drivers/BSP -I../../TouchGFX/target -I../../Drivers/STM32F7xx_HAL_Driver/Inc -I../../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../../TouchGFX/App -I../../Middlewares/ST/touchgfx/framework/include -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../../TouchGFX/target/generated -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../../TouchGFX/gui/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/images/include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../TouchGFX/generated/fonts/include -I../../Drivers/Components/ft5336 -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/stm32746g_discovery_qspi.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

