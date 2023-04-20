#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints a series of numbers followed by a newline character.
 *
 * @separator: A pointer to a constant separator string.
 * @n: The number of input variables to print.
 * @...: The input variables themselves.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (separator != NULL && i != n - 1)
printf("%s", separator);
}

va_end(args);
printf("\n");
}
