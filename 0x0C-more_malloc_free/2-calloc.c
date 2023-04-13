#include <stdlib.h>
#include "main.h"

/**
 * _calloc - This function allocates memory for an Array,
 * using malloc.
 * @nmemb: This holds the number of contigous block,
 * of memory to allocate.
 * @size: This is the size of each block of memory.
 *
 * Return: A void pointer to the address of the first,
 * element is returned.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p = NULL;

	if (nmemb != 0 || size != 0)
	{
		p = malloc(nmemb * size);
	}
	if (p != NULL)
	{
		while (i < nmemb)
		{
			p[i] = 0;
			i++;
		}
	}
	return ((void *)p);
}
