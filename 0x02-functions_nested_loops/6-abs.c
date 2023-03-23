#include "main.h"

/**
 * _abs - prints the absolute value of a value
 * @c: the integer to return its absolute
 *
 * Return: The positive value of the int
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * (-1));
	}
	return (c);
}
