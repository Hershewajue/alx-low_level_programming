#include "main.h"

/**
 * _strlen_recursion - function that returns 1 if a string is a palindrome & 0
 * @x: the string to be printed
 *
 * Return: the length of string
 */
int _strlen_recursion(char *x)
{
	if (x[0] != '\0')
		return (1 + _strlen_recursion(x + 1));
	return (0);
}

/**
 * pal_checker - the function check if x is palindrome.
 * @x: the string base address.
 * @i: left index.
 * @j: rigth index.
 *
 * Return: 1 if s is palindrome, 0 otherwise.
 */

int pal_checker(char *x, int i, int j)
{
	if (x[i] == x[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(x, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - the function check if x is palindrome
 * @x: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *x)
{
	return (pal_checker(x, 0, _strlen_recursion(x) - 1));
}
