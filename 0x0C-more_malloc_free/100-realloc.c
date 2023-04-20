#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Description: This function reallocates a memory block using malloc and free.
 * The function takes in a pointer to the memory previously allocated with malloc,
 * the size, in bytes, of the allocated space for ptr, and the new size, in bytes,
 * of the new memory block. The function returns a pointer to the newly allocated
 * memory block, with the contents copied from the start of ptr up to the minimum
 * of the old and new sizes. If new_size > old_size, the added memory is not initialized.
 * If new_size == old_size, the function does not do anything and returns ptr.
 * If ptr is NULL, the function is equivalent to malloc(new_size) for all values of
 * old_size and new_size. If new_size is zero and ptr is not NULL, the function is
 * equivalent to free(ptr) and returns NULL. If malloc fails to allocate memory, the
 * function returns NULL and does not free ptr.
 *
 * Return: pointer to the newly allocated memory block, or NULL if realloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *old_ptr, *new_ptr;
unsigned int i, min_size;

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (old_size == new_size)
return (ptr);

old_ptr = ptr;
new_ptr = malloc(new_size);

if (new_ptr == NULL)
return (NULL);

min_size = old_size < new_size ? old_size : new_size;

for (i = 0; i < min_size; i++)
new_ptr[i] = old_ptr[i];

free(ptr);

return (new_ptr);
}
