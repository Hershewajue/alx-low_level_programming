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
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * typedef dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
