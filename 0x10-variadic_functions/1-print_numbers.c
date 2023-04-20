#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints a series of numbers, followed by a newline.
 *
 * @separator: The separator to print between numbers.
 *             If NULL, no separator is printed.
 * @n: The number of integers to print.
 * @...: The integers to print.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args; /* declare a variable of type va_list, named args */
unsigned int i; /* declare an unsigned int variable named i */

va_start(args, n); /* initialize the va_list with va_start, using the last fixed parameter as a reference */

for (i = 0; i < n; i++) { /* iterate through all the parameters passed to the function */
printf("%d", va_arg(args, int)); /* print the current argument using va_arg to access the next variable argument */
if (separator != NULL && i != n - 1)
{ /* check if separator is not NULL and we are not on the last argument */
printf("%s", separator); /* print the separator */
}
}

va_end(args); /* clean up the va_list with va_end */

printf("\n"); /* print a new line at the end */
}
