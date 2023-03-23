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
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
