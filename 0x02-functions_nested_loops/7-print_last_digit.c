#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer.
 * @s: The integer to find its remainder
 *
 * Return: it returns the last digit
 */
int print_last_digit(int s)
{
	int r;

	r = s % 10;
	_putchar("%d", r);
	return (r);
}
