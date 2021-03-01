/*
golay.c: Implements the Binary Golay code [24,12,8].
Adapted from: http://aqdi.com/articles/using-the-golay-error-detection-and-correction-code-3/


Author: Axel Persinger
License: MIT License
*/

#include "golay.h"

int add(int i, int j)
{
    return i + j;
}

/**
 * @brief  Calculates and fills in the check-bits for a codeword
 * @note   
 * @param  code: codeword information
 * @retval None
 */
void calculate_check(st_codeword* code)
{
    code->check = 0;
    short c = code->information;
}


/**
 * @brief  Calculates and fills in the parity-bits for a codeword
 * @note   
 * @param  code: codeword information
 * @retval None
 */
void calculate_parity(st_codeword* code)
{
    code->parity = 0;
    short c = code->information;
    do
    {
        if (c & 0x1)
            code->parity = ~code->parity;
        
    } while (c >>= 1);
}


/**
 * @brief  Calculates and returns the weight of a codeword
 * @note   
 * @param  code: codeword information
 * @retval weight
 */
short calculate_weight(st_codeword* code)
{
    short weight = 0;
    short c = code->information;
    do
    {
        if (c & 0x1)
            weight += 1;
        
    } while (c >>= 1);

    return weight;
}


int main(int argc, char const *argv[])
{
    st_codeword* code;
    code = (st_codeword*) malloc(sizeof(st_codeword));

    code->information = 0b01101;

    // printf("code->parity = %d\n", code->check);
    calculate_parity(code);
    // int i = 0x3;
    printf("weight(%d) = %d\n", code->information, calculate_weight(code));

    return 0;
}

