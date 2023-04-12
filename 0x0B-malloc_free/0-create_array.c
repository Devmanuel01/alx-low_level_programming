#include <stdlib.h>
#include "main.h"

/**
 * create_array - This function allocates a memory at runtime,
 * and stores the value of any char passed by the user.
 * @size: This is the size of memory to be allocated.
 * @c: This is the char to be passed.
 *
 * Return: This returns a pointer to the char in arg c.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p = NULL;

	if (size > 0)
	{
		p = (char *)malloc(size * sizeof(char));
	}
	if (p != NULL)
	{
		while (i < size)
		{
			p[i] = c;
			i++;
		}
	}
	return (p);
}
