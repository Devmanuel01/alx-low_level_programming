#include "main.h"

/**
 * print_rev - This function prints the char of str passed as a parameter
 * in reverse form to the stdout, it first calaculates the total string
 * then it uses it to print each char from the last to the first.
 * @s: the string parameter to be reversed
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
