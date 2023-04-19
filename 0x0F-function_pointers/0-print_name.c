#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer to apply to name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
