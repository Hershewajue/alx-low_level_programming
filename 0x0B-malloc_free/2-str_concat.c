#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: On success, a pointer to the concatenated string. On failure, NULL.
 */
char *str_concat(char *s1, char *s2)
{
char *result;
unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;

result = malloc(sizeof(char) * (len1 + len2 + 1));
if (result == NULL)
return (NULL);

a = 0;
b = 0;

if (s1)
{
while (a < len1)
{
result[a] = s1[a];
a++;
}
}

if (s2)
{
while (b < len2)
{
result[a] = s2[b];
a++;
b++;
}
}

result[a] = '\0';

return (result);
}
