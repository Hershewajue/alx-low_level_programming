#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog
 *
 * This function prints the information of a struct dog, including its name,
 * age, and owner. If any element of the struct is NULL, it will print (nil)
 * instead of the element.
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: ");
d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: ");
d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
}
}
