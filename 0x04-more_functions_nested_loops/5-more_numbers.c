#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 * on 10 diffrent lines on the stdout.
 * Return: void
 */
void more_numbers(void)
{
	char n = '0';
	int m;

	for (m = 0; m < 15; m++)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
