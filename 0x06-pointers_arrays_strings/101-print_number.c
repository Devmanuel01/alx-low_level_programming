#include "main.h"

/**
 * print_number - This function prints an integer using _putchar.
 * @n: The integer to be printed to the stdout.
 *
 * Return: Void
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}

	if ((x / 10) > 0)
	{
		print_number(x / 10);
	}

	_putchar((x % 10) + 48);
}
