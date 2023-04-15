#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: a pointer to the string to be searched
 * @accept: a pointer to the string of bytes to be matched
 *
 * Return: the number of bytes in the initial segment of @s which consist only
 *         of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, len = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
len++;
break;
}
}
if (accept[j] == '\0')
{
return (len);
}
}
return (len);
}
