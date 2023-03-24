#include "main.h"
/**
* print_numbers - function to print numbers from 0 - 9
* @a: var name given to input also used in the for loop.
* void - returns no value, instead the numbers are printed to the screen
* Return: 0.
*/
void print_numbers(void);
{
    int a;
for (a = 48; a < 58; a++)
{
    putchar(a);
}
putchar("\n");
return (0);
}
