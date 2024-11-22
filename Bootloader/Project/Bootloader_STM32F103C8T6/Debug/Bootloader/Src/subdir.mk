################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Bootloader/Src/bootloader.c \
../Bootloader/Src/crc_check.c \
../Bootloader/Src/firmware_update.c \
../Bootloader/Src/flash_manager.c 

OBJS += \
./Bootloader/Src/bootloader.o \
./Bootloader/Src/crc_check.o \
./Bootloader/Src/firmware_update.o \
./Bootloader/Src/flash_manager.o 

C_DEPS += \
./Bootloader/Src/bootloader.d \
./Bootloader/Src/crc_check.d \
./Bootloader/Src/firmware_update.d \
./Bootloader/Src/flash_manager.d 


# Each subdirectory must supply rules for building sources it contributes
Bootloader/Src/%.o Bootloader/Src/%.su Bootloader/Src/%.cyclo: ../Bootloader/Src/%.c Bootloader/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Ultilities/Inc -I../Bootloader/Inc -I../Config -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Bootloader-2f-Src

clean-Bootloader-2f-Src:
	-$(RM) ./Bootloader/Src/bootloader.cyclo ./Bootloader/Src/bootloader.d ./Bootloader/Src/bootloader.o ./Bootloader/Src/bootloader.su ./Bootloader/Src/crc_check.cyclo ./Bootloader/Src/crc_check.d ./Bootloader/Src/crc_check.o ./Bootloader/Src/crc_check.su ./Bootloader/Src/firmware_update.cyclo ./Bootloader/Src/firmware_update.d ./Bootloader/Src/firmware_update.o ./Bootloader/Src/firmware_update.su ./Bootloader/Src/flash_manager.cyclo ./Bootloader/Src/flash_manager.d ./Bootloader/Src/flash_manager.o ./Bootloader/Src/flash_manager.su

.PHONY: clean-Bootloader-2f-Src

