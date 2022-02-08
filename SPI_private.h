/*
 * SPI_private.h
 *
 *  Created on: Oct 5, 2019
 *      Author: Mariam
 */

#ifndef SPI_PRIVATE_H_
#define SPI_PRIVATE_H_

#define SPCR_Register *((volatile u8 *)(0x2D))
#define SPSR_Register *((volatile u8 *)(0x2E))
#define SPDR_Register *((volatile u8 *)(0x2F))

#define Intr_Enable		1
#define Intr_Disable	0
#define	Master			1
#define Slave			0
#define LSB				0
#define MSB				1
#define rising_edge		0 //cpol
#define falling_egde	1//cpol
#define setup_leading_egde  0//cphase
#define sample_leading_egde 1//cphase
#define f4		0
#define f16		1
#define f64		2
#define f128	3
#define f2		0
#define f8		1
#define f32		2


#endif /* SPI_PRIVATE_H_ */
