#include <stdio.h>
#include "dog.h"

/**
 * print_dog - This function prints a struct dog.
 * @d: This is the pointer to the address in memory,
 * of the struct to be printed.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		if ((*d).owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
