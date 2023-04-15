#include "main.h"

/**
 * _puts - prints each character of a string to the stdout.
 * @str: An array of characters as the parameter.
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
