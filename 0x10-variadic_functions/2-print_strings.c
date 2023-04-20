#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints a variable number of strings, separated by a given
 *                 separator string.
 *
 * @separator: The string to print between the strings (NULL to not print
 *             anything).
 * @n: The number of strings to print.
 * @...: The strings to print, separated by commas.
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);

for (unsigned int i = 0; i < n; i++)
{
const char *str = va_arg(args, const char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}

if (i < n - 1 && separator != NULL) {
printf("%s", separator);
}
}

printf("\n");
va_end(args);
}
