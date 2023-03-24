#include "main.h"
/**
*
* _isupper - this function will check if a char is uppercase or not
*Return: 1 if true, and 0 if false
*
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
