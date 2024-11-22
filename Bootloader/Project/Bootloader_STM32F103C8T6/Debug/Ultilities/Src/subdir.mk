################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Ultilities/Src/debug_function.c 

OBJS += \
./Ultilities/Src/debug_function.o 

C_DEPS += \
./Ultilities/Src/debug_function.d 


# Each subdirectory must supply rules for building sources it contributes
Ultilities/Src/%.o Ultilities/Src/%.su Ultilities/Src/%.cyclo: ../Ultilities/Src/%.c Ultilities/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Ultilities/Inc -I../Bootloader/Inc -I../Config -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Ultilities-2f-Src

clean-Ultilities-2f-Src:
	-$(RM) ./Ultilities/Src/debug_function.cyclo ./Ultilities/Src/debug_function.d ./Ultilities/Src/debug_function.o ./Ultilities/Src/debug_function.su

.PHONY: clean-Ultilities-2f-Src

