#include <stdlib.h>
#include "main.h"

/**
 * str_concat - This function concatenates two string,
 * and store it in a new address in memory.
 * @s1: The base string to be concatenated to.
 * @s2: The string to be concatenated from.
 * Return: A pointer to the address of the concatenated,
 * string is returned.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *p = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	k = j + i;
	p = (char *)malloc(k * sizeof(char));
	i = 0;
	j = 0;
	l = 0;
	if (p != NULL)
	{
		while (l < k)
		{
			if (s1[i] != '\0')
			{
				*(p + l) = s1[i];
				i++;
			}
			else if (s2[j] != '\0')
			{
				*(p + l) = s2[j];
				j++;
			}
			l++;
		}
		*(p + l) = '\0';
	}
	return (p);
}
