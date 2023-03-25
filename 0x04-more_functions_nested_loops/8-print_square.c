#include "main.h"

/**
 * print_square - print a square
 * @size: the integer which allows for the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	char m = 35;
	int p;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		p = 1;

		while (p <= size)
		{
			y = 1;

			while (y <= size)
			{
				_putchar(m);
				y++;
			}
			_putchar('\n');
			p++;
		}
	}
}
