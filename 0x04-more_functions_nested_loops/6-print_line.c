#include "main.h"
/**
* print_line - function to print lines
* @n: integer parameter
*/
void print_line(int n)
{
int x;
if (n <= 0)
{
_putchar('\n');
return;
}
for (x = 0; x < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
