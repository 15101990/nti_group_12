/*
 * TEMP_S.c
 * Created: 17/09/2021 12:19:29 ص
 *  Author: MOHAMED_HELMY
 */ 

#include "ADC.h"
#include "TEMP_S_CFG.h"

void TEMP_S_INIT(void)
{
	ADC_INIT();
}
u16  TEMP_S_READ(void)
{

	return temp;
}