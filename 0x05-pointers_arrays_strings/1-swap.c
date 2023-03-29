#include "main.h"
/**
* swap_int - Swaps the values of two integers
* @a: Pointer to the first integer
* @b: Pointer to the second integer
* Return nothing
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
