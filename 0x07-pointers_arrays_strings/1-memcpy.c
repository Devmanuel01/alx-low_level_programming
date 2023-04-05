#include "main.h"

/**
 * _memcpy - This function copies memory Area.
 * @dest: This argument is a pointer to the address,
 * where the string of char are copied to.
 * @src: This argument is a pointer to the address,
 * of the source of the string char to be copied from.
 * @n: This argument is the number of bytes of memory being,
 * copied from the source address in memory.
 *
 * Return: A pointer to the address where the newly,
 * copied string are stored.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
