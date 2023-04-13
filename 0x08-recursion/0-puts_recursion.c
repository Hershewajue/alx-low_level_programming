#include "main.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @x:this this is string to be printed
 * Return:void
 */
void _puts_recursion(char *x)
{
if (*x)
{
_putchar(*x);
_puts_recursion(x + 1);
}
else
{
_putchar('\n');
}
}
