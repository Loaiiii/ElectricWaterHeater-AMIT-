/*
 * Heat_Cool_Att.c
 *
 *  Created on: Jul 11, 2024
 *      Author: mloai
 */



/*----------------------------------------------------------------------------*-
Heater/Cooler Init. : to initialize cooler and heater pins by making them OUTPUT.
-*----------------------------------------------------------------------------*/

#include "Heat_Cool_Att.h"

#include "std_macros.h"

void heat_init(void){
	set_bit(HEAT_PORT_DIR,HEAT_PIN);
}

void cool_init(void){
	set_bit(COOL_PORT_DIR,COOL_PIN);
}


/*----------------------------------------------------------------------------*-
Heater/Cooler Start : to start the Heater OR the Cooler.
-*----------------------------------------------------------------------------*/

void heat_start(void){
	set_bit(HEAT_PORT,HEAT_PIN);
}

void cool_start(void){
	set_bit(COOL_PORT,COOL_PIN);
}


/*----------------------------------------------------------------------------*-
Heater/Cooler Stop : to stop Heater OR Cooler from working.
-*----------------------------------------------------------------------------*/

void heat_stop(void){
	clr_bit(HEAT_PORT,HEAT_PIN);
}

void cool_stop(void){
	clr_bit(COOL_PORT,COOL_PIN);
}
