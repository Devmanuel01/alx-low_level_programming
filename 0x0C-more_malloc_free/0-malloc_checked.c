#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - This function allocates memory,
 * using malloc function.
 * @b: The size of memory in bytes to be reserved.
 *
 * Return: This function returns a void pointer,
 * that holds the address of the memory allocated.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
