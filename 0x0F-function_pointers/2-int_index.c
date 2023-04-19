#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array of integers
 * @size: number of elements in the array
 * @cmp: pointer to a function used to compare values
 *
 * Return: index of the first element for which the cmp function does not return 0,
 * or -1 if no element matches or if size is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
/* check if size is valid */
if (size <= 0)
{
return (-1);
}

/* loop through the array */
for (int i = 0; i < size; i++)
{
/* call the cmp function for each element */
if (cmp(array[i]) != 0)
{
/* return the index of the first match */
return (i);
}
}

/* no match found */
return (-1);
}
