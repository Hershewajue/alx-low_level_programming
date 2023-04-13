#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @x: string
 *
 * Return 0;
*/

void _print_rev_recursion(char *x)
{
if (*x)
{
_print_rev_recursion(x + 1);
_putchar(*x);
}
}
