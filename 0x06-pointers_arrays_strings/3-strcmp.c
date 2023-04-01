#include "main.h"
#include <string.h>
/**
* _strcmp - for comparing purpose
* @s1: parameter
* @s2: parameter
* Return: integer
*/
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (0);
}
