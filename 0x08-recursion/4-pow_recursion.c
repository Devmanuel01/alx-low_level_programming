#include "main.h"

/**
 * _pow_recursion - This function returns the value,
 * of x raised to the power of y.
 * @x: this arg is the integer to be raised.
 * @y: this arg is the power to which the int x is,
 * raised to.
 *
 * Return: This returns an integer of the raised,
 * power of x.
 * it returns 1 if the power is 0.
 * it reurns -1 if the power is less than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		x = -1;
	}
	else if (y == 0)
	{
		x = 1;
	}
	else
	{
		x = x * _pow_recursion(x, y - 1);
	}
	return (x);
}
