/*
 * EEPROM.h
 *
 *  Created on: Jul 11, 2024
 *      Author: mloai
 */

#ifndef EEPROM_H_
#define EEPROM_H_

#include <avr/io.h>

#include "std_macros.h"

/************* FUNCTIONS ************/

void EEPROM_write(const unsigned short addr, unsigned char data);

unsigned char EEPROM_read(const unsigned short addr);

#endif /* EEPROM_H_ */
