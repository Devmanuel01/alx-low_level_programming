#include "main.h"

/**
 * _strlen - this functions takes in strings of char,
 * as a parameter and returns the lenght of the string.
 * @s: the string of chars passed as parameter to function.
 *
 * Return: Returns an integer which is the length of the string.
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
		c++;
	return (c);
}
