#include "main.h"

/**
 * print_numbers - prints the number from 0 to 9
 */
void print_numbers(void)
{
	char n = '0';

	while (n != '10')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n')
}
