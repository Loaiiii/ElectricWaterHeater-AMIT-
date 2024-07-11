/*
 * Sys.h
 *
 *  Created on: Jul 11, 2024
 *      Author: mloai
 */

#ifndef SYS_H_
#define SYS_H_



#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "Sys_Config.h"
#include "std_macros.h"
#include "ADC.h"
#include "Buttons.h"
#include "Heat_Cool_Att.h"
#include "LED.h"
#include "SSD_disp.h"
#include "Timer.h"
#include "EEPROM.h"

#define OFF 0
#define ON 1
#define SETTING 2

/************* FUNCTIONS ************/
/*
	Function Name        : sys_init
	Function Returns     : void
	Function Arguments   : void
	Function Description : To initialize system by initializing all modules, and setting the
initial temperature to the EEPROM.
*/
void sys_init(void);
/*
	Function Name        : ON_state
	Function Returns     : void
	Function Arguments   : void
	Function Description : To initialize system by initializing all modules, and setting the
initial temperature to the EEPROM.
*/
void ON_state(void);
/*
	Function Name        : OFF_state
	Function Returns     : void
	Function Arguments   : void
	Function Description : This is the working state where it does the following:
	- waits for the timer to measure temperature using ADC every 100ms.
	- checks for the UP and DOWN buttons to switch to the SETTING mode.
*/
void OFF_state(void);
/*
	Function Name        : SET_state
	Function Returns     : void
	Function Arguments   : void
	Function Description : Setting state
*/
void SET_state(void);
/*
	Function Name        : change_temp
	Function Returns     : void
	Function Arguments   : void
	Function Description : This function turns on the Heater or the Cooler
*/
void change_temp(void);
/*
	Function Name        : add_new_temp
	Function Returns     : void
	Function Arguments   : unit16_t * arr
						   unit16_t new_val
	Function Description : This function is used to add the new measured temperature to
					the temperature array that will have its average during the code.
*/
void add_new_temp(uint16_t * arr , uint16_t new_val);
/*
	Function Name        : calc_avg_temp
	Function Returns     : void
	Function Arguments   : unit16_t * arr
	Function Description : To calculate the last 10 measured temperatures.
*/
uint16_t calc_avg_temp(uint16_t * arr);
/*
	Function Name        : temp_arr_init
	Function Returns     : void
	Function Arguments   : void
	Function Description : This function is a part of the Sys_init. function
				that reads the first actual temperature and put it at all elements in the
				temperature array.
*/
void temp_arr_init(void);
/*
	Function Name        : go_to_sleep
	Function Returns     : void
	Function Arguments   : void
	Function Description : This function is to keep the CPU in the idle mode to save more
				power when it doesn't need to do any task at the moment.
*/
void go_to_sleep(void);

/************* VARIABLES ************/

// will add as needed

uint8_t Curr_state;

uint16_t temp_arr[NUM_OF_TEMP_MEASURES];
uint16_t desired_temp;
uint16_t actual_temp;
uint16_t avg_temp;

uint8_t temp_measure_f;
uint8_t temp_measure_counter;
uint8_t setting_counter;

uint16_t toggle_f;
uint8_t arr_counter;

#endif /* SYS_H_ */
