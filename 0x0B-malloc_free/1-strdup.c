#include <stdlib.h>
#include "main.h"

/**
 * _strdup - This function returns a pointer to a newly allocated,
 * space in memory, which contains a copy of the string given as a,
 * parameter.
 * @str: This holds the string to be copied to the new allocated,
 * memory.
 *
 * Return: This returns a pointer to the newly allocated memory,
 * which holds the dopied string.
 */
char *_strdup(char *str)
{
	int i, j;
	char *p = NULL;

	i = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			i++;
		}
		p = (char *)malloc(i * sizeof(char));
	}

	j = 0;
	if (p != NULL)
	{
		while (str[j] != '\0')
		{
			*(p + j) = str[j];
			j++;
		}
		*(p + j) = '\0';
	}
	return (p);
}
