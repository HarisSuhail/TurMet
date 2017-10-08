#include "globalvariables.h"

void addtoA(uint16_t data)
{
	bufferA[bufferAcount++] = data;
	bufferAcount %= BUFFERSIZE;
}



void addtoB(uint16_t data)
{
	bufferB[bufferBcount++] = data;
	bufferBcount %= BUFFERSIZE;
}

uint16_t averageA()
{
	uint32_t sum;
	for(int i = 0 ; i<BUFFERSIZE; i++)
	{
		sum+=bufferA[i];
	}
	return (uint16_t)(sum/BUFFERSIZE);
}

uint16_t averageB()
{
	uint32_t sum;
	for(int i = 0 ; i<BUFFERSIZE; i++)
	{
		sum+=bufferB[i];
	}
	return (uint16_t)(sum/BUFFERSIZE);
}


