#include "main.h"
/**
*_isupper - this function checks if the char is an uppercase letter
*@c: an integer
*Return: 1 if true and 0 if false
*/
int _isupper(int c)
{
    if (c >= 65 && c <= 90)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
