#include "main.h"

/**
 * print_line - prints lines to the stdout.
 * @n: the total number of lines to be printed.
 * Return: void
 */
void print_line(int n)
{
	int p;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= n; p++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
