/*
 * SPI_configuration.h
 *
 *  Created on: Oct 5, 2019
 *      Author: Mariam
 */

#ifndef SPI_CONFIGURATION_H_
#define SPI_CONFIGURATION_H_


/*****************************************************/
/*Intr_Enable			Intr_Disable*/
#define SPI_Intrrupt_status		Intr_Disable
/*LSB				MSB*/
#define SPI_DataORder	LSB
/*Master 				slave*/
#define SPI_Status		Master
/*rising_edge		 falling_egde	*/
#define SPI_leading_edge	rising_edge
/* setup_leading_egde   sample_leading_egde */
#define SPI_Phase	setup_leading_egde
/*f4	f16		f64		f128*/
/*SPI2X =0 */
/*f2	f8		f32*/
#define SPI_Prescaler	f8


#endif /* SPI_CONFIGURATION_H_ */
