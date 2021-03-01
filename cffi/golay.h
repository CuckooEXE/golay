/*
golay.h: Implements the Binary Golay code [24,12,8]

Author: Axel Persinger
License: MIT License
*/

#ifndef _GOLAY_H
#define _GOLAY_H

/*
Include Statements

stdio - Standard I/O
stdlib - Standard Library
*/
#include <stdio.h>
#include <stdlib.h>


/*
Preprocessor Definitions

POLY - Characteristic polynomial for Golay (you can choose either 0xAE3 or 0xC75, doesn't matter)
*/
#define POLY 0xAE3


/*
Type Definitions

codeword - Stores a single codeword with all information needed
*/
typedef struct codeword { 
    unsigned short parity: 1;
    unsigned short check: 12;
    unsigned short information: 12;
} st_codeword;


/*
Function Declarations

add - Dumb CFFI Example
calculate_check - Calculates and fills in the checkbits of the codeword
calculate_parity - Calculates and fills in the parity bit of the codeword
*/
int add(int i, int j);
void calculate_check(st_codeword* code);
void calculate_parity(st_codeword* code);


#endif