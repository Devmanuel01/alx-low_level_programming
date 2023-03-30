#include "main.h"

/**
 * _strncpy - This function copies a string from one side to another.
 * @dest: The destination string to be copied to.
 * @src: The source string to be copied from.
 * @n: The number of characters to be copied from and copied to.
 *
 * Return: It returns a string of characters.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (src[b] != '\0')
	{
		b++;
	}

	if (n > b)
	{
		while (src[a] != '\0')
		{
			dest[a] = src[a];
			a++;
		}
	}
	else
	{
		while (a < n)
		{
			dest[a] = src[a];
			a++
		}
	}
	return (dest);
}
