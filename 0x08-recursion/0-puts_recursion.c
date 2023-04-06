#include "main.h"

/**
 * _puts_recursion - This function prints a string, followed
 * by a new line.
 * @s: This is a pointer that points to the address of the
 * string to be printed to the screen.
 *
 * Return: Void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	if (s[i + 1] == '\0')
	{
		_putchar('\n');
		return;
	}
	s = s + 1;
	_puts_recursion(s);
}
