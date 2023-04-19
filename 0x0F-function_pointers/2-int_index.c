#include <stddef.h>
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
int index;
bool y;

if (array != NULL && size > 0 && cmp != NULL)
{
if (size <= 0)
return (-1);
for (index = 0; index < size; index++)
{
y = cmp(array[index]);
if (y == TRUE)
return (index);
}
}
return (-1);
}
