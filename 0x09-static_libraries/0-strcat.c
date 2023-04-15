#include "main.h"

/**
 * _strcat - This function prints appends the src param to the dest param.
 * @dest: The destination string where to append the incoming string.
 * @src: The src string is appended to the dest string.
 *
 * Return: This returns a conacactenated string
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int length;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[length] = src[j];
		length++;
		j++;
	}
	dest[length] = '\0';
	return (dest);
}
