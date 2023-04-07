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
unsigned int i = 0, j = 0;

if (!haystack || !needle)
return (NULL);

while (haystack[i] != '\0')
{
while (needle[j] != '\0' && haystack[i] == needle[0])
{
if (haystack[i + j] == needle[j])
j++;
else
break;
}
if (needle[j] != '\0')
{
i++;
j = 0;
}
else
return (haystack + i);
}

return (0);
}
