#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints a series of strings, separated by a given separator
 *                 string, followed by a newline.
 *
 * @separator: The separator string to print between the strings (or NULL to
 *             not print anything).
 * @n: The number of strings to print.
 * @...: The strings to print, separated by commas.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
const char *str;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, const char *);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}

if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}

printf("\n");
va_end(args);
}
