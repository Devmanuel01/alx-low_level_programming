#include "main.h"

/**
 * print_number - This function prints an integer using _putchar.
 * @n: The integer to be printed to the stdout.
 *
 * Return: Void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n ;
	}

	if ((n / 10) > 0)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + 48);
}
