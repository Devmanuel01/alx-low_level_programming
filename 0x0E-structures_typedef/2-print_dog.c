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
		if (d->name == '\0')
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age == 0)
			prinf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == '\0')
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
