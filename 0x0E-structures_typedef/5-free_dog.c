#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a struct dog
 * @d: pointer to the struct dog to free
 *
 * This function frees the memory allocated for a struct dog variable, including
 * the memory allocated for its name and owner strings.
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
