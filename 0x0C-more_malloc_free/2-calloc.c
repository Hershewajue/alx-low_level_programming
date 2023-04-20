#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Description: This function allocates memory for an array of nmemb elements,
 * each of size bytes. The memory is initialized to zero and a pointer to the
 * allocated memory is returned. If nmemb or size is 0, the function returns
 * NULL. If malloc fails to allocate memory, NULL is returned.
 *
 * Return: pointer to the allocated memory, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;
unsigned int i;
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

arr = malloc(nmemb * size);
if (arr == NULL)
return (NULL);

ptr = arr;
for (i = 0; i < nmemb * size; i++)
ptr[i] = 0;

return (arr);
}
