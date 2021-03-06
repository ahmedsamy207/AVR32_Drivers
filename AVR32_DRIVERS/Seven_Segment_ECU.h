﻿/*
 * Seven_Segment_ECU.h
 *
 * Created: 10/04/2020 03:36:17 ص
 *  Author: Ahmed SemSem
 */ 

#include "GPIO_MCAL.h"
#include "Data_type.h"
#define Four_Bit	0
#define Eight_Bit	1
#define High_Nibble	1
#define Low_Nibble	0
#ifndef SEVEN_SEGMENT_ECU_H_
#define SEVEN_SEGMENT_ECU_H_

	/*
	Function Name		 : Seven_Segment_Init
	Function Returns	 : void
	Function Arguments	 : unsigned char port mode,unsigned char port name, unsigned char Nibble desired
	Function Description : define the given pins as output pins
	*/
		void Seven_Segment_Init(u8 Mode, u8 port, u8 Nibble);
		
	/*
	Function Name		 : Seven_Segment_Display
	Function Returns	 : void
	Function Arguments	 : unsigned char port mode,unsigned char port name, unsigned char Nibble desired, unsigned char value
	Function Description : Display the value sent on the Seven Segment
	*/
		void Seven_Segment_Display(u8 Mode, u8 Nibble, u8 port, u8 value);




#endif /* SEVEN_SEGMENT_ECU_H_ */