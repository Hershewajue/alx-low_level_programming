#include <main.h>
/**
 * print_number - Prints an integer using _putchar function
 *
 * @n: The integer to print
 */
void print_number(int n)
{
int digit, divisor = 1;

if (n < 0)
{
_putchar('-');
n *= -1;
}

while (n / divisor > 9)
divisor *= 10;

while (divisor != 0)
{
digit = n / divisor;
_putchar(digit + '0');
n -= digit * divisor;
divisor /= 10;
}
}
