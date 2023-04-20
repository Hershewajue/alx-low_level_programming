#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Description: This function creates an array of integers containing all values
 * from min (included) to max (included), ordered from min to max. The function
 * returns a pointer to the newly created array. If min is greater than max, the
 * function returns NULL. If malloc fails to allocate memory, the function also
 * returns NULL.
 *
 * Return: pointer to the newly created array, or NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
int *arr;
int i, len;

if (min > max)
return (NULL);

len = max - min + 1;
arr = malloc(sizeof(int) * len);
if (arr == NULL)
return (NULL);

for (i = 0; i < len; i++)
arr[i] = min + i;

return (arr);
}
