#include "main.h"
#include <string.h>
/**
* _strncpy - for copying
* @dest: a parameter
* @src: a parameter
* @n: a parameter
* Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
