#include "main.h"

/**
 * _strcpy - returns the copy of a string.
 * @dest: the destination.
 * @src - the parameter soruce
 *
 * Return: it reyurns a ptr to a string of char and return,
 * Null if dest is equal to NULL.
 */
char *_strcpy(char *dest, char *src)
{
	if (dest == NULL)
	{
		return (NULL);
	}

	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';

	return (ptr);
}
