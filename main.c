/*
 * main.c
 *
 *  Created on: Aug 23, 2019
 *      Author: Mariam
 */
#include"std_types.h"
#include"Bit_calc.h"
#include<util/delay.h>
#include"DIO_interface.h"
#include"DIO_regs.h"

void main (void)
{
	while(1)
	{/*blinking led*/
		DIO_vidSetPinDirection(PORTC,PIN0,OUTPUT);
		DIO_vidSetPinValue(PORTC,PIN0,HIGH);
		_delay_ms(500);
		DIO_vidSetPinValue(PORTC,PIN0,LOW);
		_delay_ms(500);
	}
}
