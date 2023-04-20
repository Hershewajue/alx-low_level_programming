#include "main.h"
/*
 * mul - a program that multiplies two positive numbers.
 *
 * Usage: mul num1 num2
 *        num1 and num2 will be passed in base 10
 *        Print the result, followed by a new line
 *
 * If the number of arguments is incorrect, print Error, followed by a new line,
 * and exit with a status of 98
 *
 * num1 and num2 should only be composed of digits. If not, print Error, followed
 * by a new line, and exit with a status of 98
 *
 * Return: 0 on success, 98 on failure
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string is a digit
 * @s: string to check
 *
 * Return: 1 if @s is a digit, 0 otherwise
 */
int is_digit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}

/**
 * print_error - prints error message and exits with status 98
 */
void print_error(void)
{
printf("Error\n");
exit(98);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
int len1 = 0, len2 = 0, i, j, carry = 0, digit;
int *result;

if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
print_error();

/* Get lengths of input numbers */
while (argv[1][len1 + 1])
len1++;
while (argv[2][len2 + 1])
len2++;

/* Allocate memory for result array */
result = malloc((len1 + len2) * sizeof(int));
if (!result)
return (1);

/* Initialize result array to zero */
for (i = 0; i < len1 + len2; i++)
result[i] = 0;

/* Multiply each digit of num1 with each digit of num2 */
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
digit = (argv[1][i] - '0') * (argv[2][j] - '0') + carry;
digit += result[i + j + 1];
carry = digit / 10;
result[i + j + 1] = digit % 10;
}
result[i + j + 1] += carry;
}

/* Print result */
if (result[0] != 0)
printf("%d", result[0]);
for (i = 1; i < len1 + len2; i++)
printf("%d", result[i]);
printf("\n");

free(result);
return (0);
}
