#include "main.h"

/**
 * leet - encodes some characters of a stringwith,
 * numbers.
 * @s: the string passed as a parameter to be encoded.
 *
 * Return: It returns an encoded string.
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char encStr[] = "aAeEoOtTlL";
	char encoding[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;

		while (j < 10)
		{
			if (s[i] == encStr[j])
			{
				s[i] = encoding[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
