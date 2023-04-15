#include "main.h"

/**
 * _strcmp - This function compares two strings to find if they are both,
 * the same or not.
 * @s1: This is the first string to be compared.
 * @s2: This is the second string to be compared.
 *
 * Return: It Returns an integer.
 * It returns 1 when the length of the s1 and s2 do not match.
 * It returns 0 when the two strings are the same.
 * It returns positive integer or negative integer when the strings,
 * do not match.
 */
int _strcmp(char *s1, char *s2)
{
	int d = 0;
	int c = 0;

	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
		{
			d = s1[c] - s2[c];
			break;
		}
		c++;
	}
	return (d);
}
