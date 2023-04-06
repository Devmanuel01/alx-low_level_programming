#include "main.h"

/**
 * factorial - This function returns the factorial,
 * of a number.
 * @n: This is the number whose factorial is to be,
 * calculated.
 *
 * Return: it returns the factorial of the arg passed.
 */
int factorial(int n)
{
	if (n < 0)
	{
		n = -1;
	}
	else if (n == 1 || n == 0)
	{
		n = 1;
	}
	else
	{
		n = n * factorial(n - 1);
	}
	return (n);
}
