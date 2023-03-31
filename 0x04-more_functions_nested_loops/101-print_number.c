#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_number - Prints an integer using only _putchar function
 * @n: The integer to print
 */
void print_number(int n)
{
int divisor = 1;

if (n < 0)
{
_putchar('-');
n *= -1;
}

while (n / divisor >= 10)
divisor *= 10;

while (divisor != 0)
{
_putchar((n / divisor) % 10 + '0');
divisor /= 10;
}
}
