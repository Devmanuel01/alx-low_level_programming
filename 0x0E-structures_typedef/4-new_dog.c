#include <stdio.h>
#include "dog.h"

/**
 * new_dog - This function creates a new dog.
 * @name: The name of the Dog.
 * @age: The age of the Dog.
 * @owner: The Owner of the Dog.
 *
 * Return: A pointer thatr holds the address in,
 * memory of the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = NULL;

	if (name != NULL)
	{
		ptr = {name, age, owner};
	}
	return (ptr);
