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
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
