#include "main.h"

/**
 * print_numbers - prints the number from 0 to 9
 */
void print_numbers(void)
{
	char n = '0';
	int p;

	for (p = 0; p < 10; p++)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
