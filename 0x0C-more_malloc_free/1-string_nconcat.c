#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - This function concatenates two string,
 * by adding a specified amount from string s2 to string s1.
 * @s1: String to be concatenated to.
 * @s2: string to be concatenated from.
 * @n: number of first byte of s2 to be concatenated from.
 *
 * Return: It Returns an address to the concatenated string,
 * and returns NULL if the program fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, m = 0;
	char *p = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n < j)
		k = i + n;
	else
		k = i + j;
	p = malloc(k * sizeof(char));
	i = 0;
	j = 0;
	if (p != NULL)
	{
		while (m < k)
		{
			if (s1[i] != '\0')
			{
				p[m] = s1[i];
				i++;
			}
			else if (s2[j] != '\0')
			{
				p[m] = s2[j];
				j++;
			}
			m++;
		}
		p[m] = '\0';
	}
	return (p);
}
