#ifndef _GLOBAL_VARIABLE_H_
#define _GLOBAL_VARIABLE_H_
#include <stdint.h>
#define BUFFERSIZE 100


extern uint8_t bufferAcount;
extern uint8_t bufferBcount;


extern uint16_t bufferA[BUFFERSIZE];
extern uint16_t bufferB[BUFFERSIZE];

extern uint8_t activated;


void addtoA(uint16_t);

void addtoB(uint16_t);

uint16_t averageA();

uint16_t averageB();


#endif

