#include "main.h"

/**
 * print_most_numbers - this prints numbers from 0 to 9 except 2 and 4.
 *Return: void
 */
void print_most_numbers(void)
{
	char n = '0';
	int m = 0;

	while (m < 10)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
		n++;
		m++;
	}
	_putchar('\n');
}
