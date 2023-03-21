#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all numbers from input to 98
 * @n: the starting number
 *
 * Description: Takes an integer as input and prints all numbers from
 *              that integer up to 98
 *
 * Return: This function does not return a value.
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
