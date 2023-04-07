#include "main.h"
/**
* _strstr - locates a substring within a given string
*
* @haystack: pointer to string to be searched
*
* @needle: pointer to substring to be located
*
* Return: pointer to beginning of located substring, or NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
char *h, *n;

if (needle == '\0') /* empty needle */
return (haystack);

while (haystack != '\0') /* search until end of haystack */
{
h = haystack;
n = needle;

while (*n != '\0' && *h == *n) /* compare needle to haystack */
{
h++;
n++;
}

if (*n == '\0') /* needle found */
return (haystack);

haystack++;
}

return (NULL); /* needle not found */
}
