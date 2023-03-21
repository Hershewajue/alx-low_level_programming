#include "main.h"
/**
* _islower - checks if a character is in lowercase
* @c: a character argument
*
* Description: Checks if the input character is a lowercase letter.
*
* Return: 1 if the character is lowercase, and 0 if not.
*/
int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}
