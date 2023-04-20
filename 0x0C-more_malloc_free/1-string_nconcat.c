#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of bytes to concatenate from s2
 *
 * Description: This function concatenates two strings, s1 and s2,
 * by allocating memory for a new string that contains s1 followed
 * by the first n bytes of s2. If n is greater than or equal to the
 * length of s2, the entire s2 string is used. The new string is null
 * terminated and a pointer to the new string is returned. If the function
 * fails to allocate memory, NULL is returned.
 *
 * Return: pointer to the new string, or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *concat;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;

while (s2[len2])
len2++;

if (n >= len2)
n = len2;

concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];

for (j = 0; j < n; j++)
concat[i + j] = s2[j];

concat[i + j] = '\0';

return (concat);
}
