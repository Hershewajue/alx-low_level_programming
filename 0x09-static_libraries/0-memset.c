include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory area with
 * @n: the number of bytes to be filled
 * 
 * Return: The pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
/* TODO: Implement this function. */
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
