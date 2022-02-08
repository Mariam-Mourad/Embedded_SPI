/*
 * SPI_prog.c
 *
 *  Created on: Oct 5, 2019
 *      Author: Mariam
 */
#include"std_types.h"
#include"Bit_calc.h"
#include"SPI_interface.h"
#include"SPI_private.h"
#include"SPI_configuration.h"


void vidSPIint_static(void)
{
	/*as master- interrupt disable- LSB, write on rising edge, prescaler 8*/
	SPCR_Register=0x55;
	SetBit(SPSR_Register,0);

}
/*********************************/
u8 u8SPI_GetData(void)
{
	while((GetBit(SPSR_Register,7))==0);
	return SPDR_Register;
}
/*******************************/
void vidSPIint(void)
{
#if ((SPI_Prescaler == f2) ||(SPI_Prescaler ==f8) ||(SPI_Prescaler ==f32))
	SetBit(SPSR_Register,0);
#endif
SPCR_Register=(SPI_Intrrupt_status<<7)|(SPI_Intrrupt_status<<6)|(SPI_DataORder<<5)|(SPI_Status<<4)
		|( SPI_leading_edge<<3) | (SPI_Phase<<2) |(SPI_Prescaler);

}
