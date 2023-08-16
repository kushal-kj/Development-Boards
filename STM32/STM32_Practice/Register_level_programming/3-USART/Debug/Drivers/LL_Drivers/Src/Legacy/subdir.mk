################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/LL_Drivers/Src/Legacy/stm32f4xx_hal_can.c \
../Drivers/LL_Drivers/Src/Legacy/stm32f4xx_hal_eth.c 

OBJS += \
./Drivers/LL_Drivers/Src/Legacy/stm32f4xx_hal_can.o \
./Drivers/LL_Drivers/Src/Legacy/stm32f4xx_hal_eth.o 

C_DEPS += \
./Drivers/LL_Drivers/Src/Legacy/stm32f4xx_hal_can.d \
./Drivers/LL_Drivers/Src/Legacy/stm32f4xx_hal_eth.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/LL_Drivers/Src/Legacy/%.o Drivers/LL_Drivers/Src/Legacy/%.su Drivers/LL_Drivers/Src/Legacy/%.cyclo: ../Drivers/LL_Drivers/Src/Legacy/%.c Drivers/LL_Drivers/Src/Legacy/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F401xC -DSTM32F401xE -DNUCLEO_F401RE -DSTM32 -DSTM32F401RETx -DSTM32F4 -c -I"C:/Users/ravindra/Desktop/GitHub Repo_embedded/Development Boards/STM32/STM32_Practice/Register_level_programming/3-USART/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/ravindra/Desktop/GitHub Repo_embedded/Development Boards/STM32/STM32_Practice/Register_level_programming/3-USART/Drivers/LL_Drivers/Inc" -I"C:/Users/ravindra/Desktop/GitHub Repo_embedded/Development Boards/STM32/STM32_Practice/Register_level_programming/3-USART/Drivers/CMSIS/Include" -I../Inc -I"C:/Users/ravindra/Desktop/GitHub Repo_embedded/Development Boards/STM32/STM32_Practice/Register_level_programming/3-USART/Drivers/LL_Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-LL_Drivers-2f-Src-2f-Legacy

clean-Drivers-2f-LL_Drivers-2f-Src-2f-Legacy:
	-$(RM) ./Drivers/LL_Drivers/Src/Legacy/stm32f4xx_hal_can.cyclo ./Drivers/LL_Drivers/Src/Legacy/stm32f4xx_hal_can.d ./Drivers/LL_Drivers/Src/Legacy/stm32f4xx_hal_can.o ./Drivers/LL_Drivers/Src/Legacy/stm32f4xx_hal_can.su ./Drivers/LL_Drivers/Src/Legacy/stm32f4xx_hal_eth.cyclo ./Drivers/LL_Drivers/Src/Legacy/stm32f4xx_hal_eth.d ./Drivers/LL_Drivers/Src/Legacy/stm32f4xx_hal_eth.o ./Drivers/LL_Drivers/Src/Legacy/stm32f4xx_hal_eth.su

.PHONY: clean-Drivers-2f-LL_Drivers-2f-Src-2f-Legacy

