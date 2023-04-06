#include "main.h"

/**
 * _strlen_recursion - This function returns the length,
 * of a string.
 * @s: This is a pointer to the address of the string,
 * to be counted.
 *
 * Return: This an int of the lenth of the string.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
