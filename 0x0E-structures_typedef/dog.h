#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This forms a structure for data,
 * dog.
 * @name: this is a name of the data dog.
 * @owner: This is the name of the owner of,
 * the dog.
 * @age: This holds the age of the dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif