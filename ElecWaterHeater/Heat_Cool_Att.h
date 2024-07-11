/*
 * Heat_Cool_Att.h
 *
 *  Created on: Jul 11, 2024
 *      Author: mloai
 */

#ifndef HEAT_COOL_ATT_H_
#define HEAT_COOL_ATT_H_
#include <avr/io.h>

#define HEAT_PORT_DIR DDRB
#define HEAT_PORT PORTB
#define HEAT_PIN 4

#define COOL_PORT_DIR DDRB
#define COOL_PORT PORTB
#define COOL_PIN 5

void heat_init(void);
void heat_start(void);
void heat_stop(void);

void cool_init(void);
void cool_start(void);
void cool_stop(void);


#endif /* HEAT_COOL_ATT_H_ */
