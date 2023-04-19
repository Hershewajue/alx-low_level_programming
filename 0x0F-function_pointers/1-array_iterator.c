#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: array to iterate through
 * @size: size of the array
 * @action: function pointer to apply to each element of the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
for (size_t i = 0; i < size; i++)
action(array[i]);
}
}
