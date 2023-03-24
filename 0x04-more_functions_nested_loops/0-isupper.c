#include "main.h"
#include <stdio.h>
/**
 * _isupper - Check if a letter is uppercase letters
 * @c: The number character to checked
 * Return: 1 for upper letter or 0 for any elser
 */
int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
