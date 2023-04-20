#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_numeric - Check if a string is numeric.
 * @s: The string to check.
 *
 * Return: 1 if @s is numeric, 0 otherwise.
 */
int is_numeric(const char *s)
{
if (*s == '-')
s++;

if (*s == '\0')
return (0);

while (*s != '\0')
{
if (!isdigit(*s))
return (0);
s++;
}

return (1);
}

/**
 * multiply - Multiply two positive numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The product of @num1 and @num2, as a string.
 */
char *multiply(const char *num1, const char *num2)
{
int len1, len2, len, i, j, k, carry, sum;
char *result;

len1 = strlen(num1);
len2 = strlen(num2);
len = len1 + len2;

result = calloc(len + 1, sizeof(char));
if (result == NULL)
return (NULL);

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;

for (j = len2 - 1; j >= 0; j--)
{
k = i + j + 1;
sum = (num1[i] - '0') * (num2[j] - '0') + carry + (result[k] - '0');
result[k] = (sum % 10) + '0';
carry = sum / 10;
}

result[i + j + 1] = carry + '0';
}

while (*result == '0' && *(result + 1) != '\0')
result++;

return (result);
}

/**
 * main - Entry point. Multiply two positive numbers.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char **argv)
{
char *num1, *num2, *result;

if (argc != 3)
{
printf("Error\n");
return (98);
}

if (!is_numeric(argv[1]) || !is_numeric(argv[2]))
{
printf("Error\n");
return (98);
}

num1 = argv[1];
num2 = argv[2];

result = multiply(num1, num2);
if (result == NULL)
{
printf("Error\n");
return (98);
}

printf("%s\n", result);
free(result);

return (0);
}
