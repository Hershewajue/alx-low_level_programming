#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function used to compare values.
 * Return: Index of the first element for which cmp does not
 * return 0, -1 if no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array == NULL || cmp == NULL || size <= 0)
return (-1);

int i;

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}

return (-1);
}
