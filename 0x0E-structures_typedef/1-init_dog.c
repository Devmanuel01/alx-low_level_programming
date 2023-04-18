#include "dog.h"

/**
 * init_dog - This function intializes a varaible of type,
 * struct dog.
 * @d: The pointer that holds the varaible with the struct,
 * dog.
 * @name: The name to iitialize the name value to.
 * @age: The age of the Dog.
 * @owner: The owner of the Dog.
 *
 * Return: Void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> owner = owner;
	d -> age = age;
}
