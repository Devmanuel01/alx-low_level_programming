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
	int i = 0;
	char *p = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else if(p == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			p = p + i;
			*p = c;
			i++;
		}
	}
	return (p);
}
