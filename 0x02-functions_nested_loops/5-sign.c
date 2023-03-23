#include "main.h"

/**
 * print_sign - it prints the sign of an input
 * @n: An integer whose sign is proccessed
 *
 * Return: On positive sign 1.
 * On zero, 0 is returned and on negative -1 is returned.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		_putchar ('\n');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		_putchar ('\n');
		return (0);
	}
	else
	{
		_putchar ('-');
		_putchar ('\n');
		return (-1);
	}
}
