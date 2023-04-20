#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Concatenates all the arguments of a program.
 *
 * @ac: Number of arguments.
 * @av: Array of arguments.
 *
 * Return: Pointer to the concatenated string on success,
 * NULL on failure.
 */
char *argstostr(int ac, char **av)
{
int a, b, c, length;
char *str_concatenated;

if (ac == 0 || av == NULL)
return (NULL);

length = 0;
/* Compute the length of the concatenated string */
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++)
length++;
length++; /* Add 1 for the newline character */
}

/* Allocate memory for the concatenated string */
str_concatenated = malloc(length * sizeof(char));
if (str_concatenated == NULL)
return (NULL);

/* Copy the arguments into the concatenated string */
c = 0;
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++)
{
str_concatenated[c] = av[a][b];
c++;
}
str_concatenated[c] = '\n';
c++;
}

/* Add the terminating null character */
str_concatenated[c] = '\0';

return (str_concatenated);
}
