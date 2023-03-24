#include "main.h"
/**
*_isdigit - this function checks if the input is a digit
*@c: an integer
*Return: 1 if true and 0 if false
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
