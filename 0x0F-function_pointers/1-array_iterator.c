/**
 * array_iterator - Iterates over an array and executes a
 * given function on each element
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to be executed
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int index;

if (array != NULL && size > 0 && action != NULL)
for (index = 0; index < size; index++)
action(array[index]);
}
