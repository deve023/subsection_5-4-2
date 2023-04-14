//=====[#include guards - begin]===============================================

#ifndef _DATE_AND_TIME_H_
#define _DATE_AND_TIME_H_

//=====[Declaration of public defines]=========================================

#define DATE_AND_TIME_NUMBER_OF_CHARS 14

//=====[Declaration of public data types]======================================

//=====[Declarations (prototypes) of public functions]=========================

char* dateAndTimeRead();

void dateAndTimeWrite( int year, int month, int day, 
                       int hour, int minute, int second );

//=====[#include guards - end]=================================================

#endif // _DATE_AND_TIME_H_