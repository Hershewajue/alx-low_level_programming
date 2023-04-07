include <main.h>
/**
* _memset - fills the first @n bytes of the memory area pointed to by @s with the constant byte @b
* 
* @s: pointer to the memory area to be filled with the constant byte.
* 
* @b: the constant byte that will be used to fill the memory area pointed to by @s.
* 
* @n: the number of bytes that will be filled with the constant byte @b, in the memory area pointed to by @s.
* 
* Return: a pointer to the memory area pointed by @s, after it has been filled with the constant byte @b.
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return s;
}
