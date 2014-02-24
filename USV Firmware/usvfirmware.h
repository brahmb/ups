/*
 * usvfirmware.h
 *
 * Created: 13.02.2014 03:27:04
 *  Author: Thorin Hopkins
 */ 

#ifndef USVFIRMWARE_H_
#define USVFIRMWARE_H_

// -- Constants
#define STATUSFREQ 5000
// Switching delays
#define ONDELAY 2000
#define SWITCHDELAY 5

// Fan delays
#ifdef DEBUG
	#define FANEXTPOWERON 5000
	#define FANMECHSWOFF 1500
#else
	#define FANEXTPOWERON 180*60000	// Run fan for 3 hours when ext. power turned on
	#define FANMECHSWOFF 3*60000	// Run fan for 3 minutes when mech. switch turned off
#endif

// -- Aliases
#define LOFF 0
#define LRED 1
#define LGREEN 2

// -- Prototypes
void pwrled(int col);
void statled(int col);
void fanrun(unsigned long ms);
void fancheck();
//unsigned long adcread(uint8_t ch);

#endif /* USVFIRMWARE_H_ */