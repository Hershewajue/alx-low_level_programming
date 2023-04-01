#include <main.h>
#include <stdio.h>
/**
 * rot13 - Encodes a string using ROT13 substitution cipher
 *
 * @str: The string to encode
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
char *result = str;
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 13 && str[i] != '\0'; j++)
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
}
else if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
}
i++;
}
i--;
}

return (result);
}
