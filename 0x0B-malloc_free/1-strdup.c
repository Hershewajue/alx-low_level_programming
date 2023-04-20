#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: On success, a pointer to the duplicated string. On failure, NULL.
 *         Returns NULL if str is NULL or if insufficient memory was available.
 */
char *_strdup(char *str)
{
if (str == NULL) /* check for NULL input */
return (NULL);

size_t len = strlen(str) + 1; /* compute length of string, including null terminator */
char *dup = malloc(len); /* allocate memory for duplicated string */
if (dup == NULL) /* check for allocation failure */
return (NULL);

memcpy(dup, str, len); /* copy string to new memory location */
return (dup);
}
