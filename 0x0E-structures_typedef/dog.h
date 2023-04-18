#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 *
 * Description: This structure represents a dog and contains information about
 *              its name, age, and owner.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
}
dog_t;

#endif /* DOG_H */

