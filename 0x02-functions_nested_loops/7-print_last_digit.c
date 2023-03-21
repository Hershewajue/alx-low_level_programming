#include "main.h"
/**
* print_last_digit - Prints the last digit of a number.
*
* @n: The number to extract the last digit from.
*
* Return: The value of the last digit.
*/
int print_last_digit(int n)
{
int l;
l = n % 10;
if (l < 0)
{
_putchar(-l + 48);
return (-l);
}
else
{
_putchar(l + 48);
return (l);
}
}
