include "main.h"
/**
 * _memcpy - copies a specified number of bytes from one memory location to another
 *
 * @dest: a pointer to the memory location where the bytes will be copied to
 * @src: a pointer to the memory location where the bytes will be copied from
 * @n: the number of bytes to be copied
 *
 * Return: pointer to the memory location @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
