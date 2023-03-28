#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half part of the string to the stdout.
 * @str: the parametr to be printed to the stdout
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int c = 0;
	int i;

	while (str[c] != '\0')
		c++;
	i = c / 2;
	printf("%d\n", i);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
