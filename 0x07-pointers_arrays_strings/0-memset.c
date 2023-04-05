#include "main.h"

/**
 * _memset - This function fills a memory with constant byte.
 * @s: This is a void pointer that points to the starting,
 * address of the memory to be filled.
 * @b: Value to fill the the address with.
 * @n: The Number of bytes to be filled starting from,
 * ptr.
 *
 * Return: This returns a pointer to the string that has been set.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
