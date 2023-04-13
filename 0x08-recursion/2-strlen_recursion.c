#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @x: this is a string
 *
 * Return:int
 */
int _strlen_recursion(char *x)
{
int index = 0;
if (*x)
{
index++;
index += _strlen_recursion(x + 1);
}
return (index);
}
