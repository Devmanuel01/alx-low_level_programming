#include "main.h"

/**
 * puts2 - This function prints everyother
 * character of string
 * @str: the string parameter to be printed.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
