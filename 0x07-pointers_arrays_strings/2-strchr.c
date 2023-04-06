#include "main.h"

/**
 * _strchr - This function locates a char,
 * in a string of char.
 * @s: This argument contains a pointer that
 * points to the address of a string to be,
 * searched through.
 * @c: The char to be searched for in the string.
 *
 * Return: It returns a pointer to the address of the,
 * char found after the searching through the string,
 * or returns a NULL pointer if no char is found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p = NULL;

	while (s[i] <= '\0')
	{
		if (s[i] == c)
		{
			p = s;
			break;
		}
		i++;
	}
	return (p);
}
