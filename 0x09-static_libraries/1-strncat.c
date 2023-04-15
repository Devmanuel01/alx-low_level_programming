#include "main.h"

/**
 * _strncat - This function concatenates two string passed in as arguments,
 * to the function.
 * @dest: The destination string to which to append some characters.
 * @src: The source string from which to append.
 * @n: The number string chars to be appended.
 *
 * Return: Returns a concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int length;
	int i;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	j = 0;

	if (n > i)
	{
		while (src[j] != '\0')
		{
			dest[length] = src[j];
			length++;
			j++;
		}
		dest[length] = '\0';
	}
	else
	{
		while (j < n)
		{
			dest[length] = src[j];
			length++;
			j++;
		}
	}
	return (dest);
}
