#include <stdio.h>
/**
 * main - Entry point
 *
 * Prints all possible combinations of double-digit numbers.
 * Numbers must be separated by a comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 48; i < 57; i++)
{
for (j = 49; j < 58; j++)
{
if (j > i)
{
putchar(i); /* print current number */
putchar(j);
if (i != 56 || j != 57) /* check if last number */
{
putchar(','); /* print comma and space */
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
