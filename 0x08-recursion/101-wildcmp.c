#include "main.h"

/**
 * str_checker - a function which compares if two strings are identical.
 * @x1: this is string_1 base address.
 * @x2: this is string_2 base address.
 * @i: left index.
 * @j: special index. (joker)
 *
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int str_checker(char *x1, char *x2, int i, int j)
{
if (x1[i] == '\0' && x2[j] == '\0')
return (1);
if (x1[i] == x2[j])
return (str_checker(x1, x2, i + 1, j + 1));
if (x1[i] == '\0' && x2[j] == '*')
return (str_checker(x1, x2, i, j + 1));
if (x2[j] == '*')
return (str_checker(x1, x2, i + 1, j) || str_checker(x1, x2, i, j + 1));
return (0);
}

/**
 * wildcmp - write a function compare if strings could be considered identical
 * @x1: this is a base address for string.
 * @x2: this is a base address for string.
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *x1, char *x2)
{
return (str_checker(x1, x2, 0, 0));
}
