/*
 * ADC.h
 *
 *  Created on: Jul 11, 2024
 *      Author: mloai
 */

#ifndef ADC_H_
#define ADC_H_

#include <avr/io.h>

#include "std_macros.h"

void ADC_init(void);
uint16_t ADC_read(void);

#endif /* ADC_H_ */
