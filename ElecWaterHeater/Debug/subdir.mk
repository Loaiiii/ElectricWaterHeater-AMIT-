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
../SSD_disp.c \
../Sys.c \
../Timer.c \
../main.c 

OBJS += \
./ADC.o \
./Buttons.o \
./EEPROM.o \
./Heat_Cool_Att.o \
./LED.o \
./SSD_disp.o \
./Sys.o \
./Timer.o \
./main.o 

C_DEPS += \
./ADC.d \
./Buttons.d \
./EEPROM.d \
./Heat_Cool_Att.d \
./LED.d \
./SSD_disp.d \
./Sys.d \
./Timer.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


