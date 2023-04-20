#include "variadic_functions.h"

/**
 * print_all - Prints a list of arguments of different types, separated by commas.
 *             The types are specified by a format string.
 *
 * @format: A string containing the format codes for the types of arguments to print.
 *          Valid codes are "c" for char, "i" for int, "f" for double, and "s" for string.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, c = 0;
char *str;
const char valid_types[] = "cifs";

va_start(args, format);

while (format != NULL && format[i] != '\0')
{
if (i > 0)
{
printf(", ");
}

if (strchr(valid_types, format[i]) == NULL)
{
i++;
continue;
}

switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}

break;
}

i++;
}

printf("\n");
va_end(args);
}
