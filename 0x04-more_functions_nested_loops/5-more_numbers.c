#include "main.h"
/**
* more_numbers - prints 10 times the numbers from 0 to 14 then a new line.
*/
void more_numbers(void)
{
int x, y;
for (x = 0; x < 10; x++)
{
for (y = 0; y <= 14; y++)
{
if (y > 9) /* if the number has 2 digits */
{
_putchar(y / 10 + '0'); /* print the first digit */
}
_putchar(y % 10 + '0'); /* print the last digit */
}
_putchar('\n');
}
}
