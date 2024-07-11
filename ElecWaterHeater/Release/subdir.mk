################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC.c \
../Buttons.c \
../EEPROM.c \
../Heat_Cool_Att.c \
../LED.c \
../SevenSeg.c \
../Sys.c \
../Timer.c \
../main.c 

OBJS += \
./ADC.o \
./Buttons.o \
./EEPROM.o \
./Heat_Cool_Att.o \
./LED.o \
./SevenSeg.o \
./Sys.o \
./Timer.o \
./main.o 

C_DEPS += \
./ADC.d \
./Buttons.d \
./EEPROM.d \
./Heat_Cool_Att.d \
./LED.d \
./SevenSeg.d \
./Sys.d \
./Timer.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


