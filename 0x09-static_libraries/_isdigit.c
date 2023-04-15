#include "main.h"

/**
 * _isdigit - This function checks if the arg,
 * passed to the function is a digit.
 * @c: The arg to be checked if it is a digit.
 *
 * Return: Returns 1 if arg is digit and returns,
 * 0 if otherwise.
 */
int _isdigit(int c)
{
	int i = 0;

	if (c >= '0' && c <= '9')
		i = 1;
	return (i);
}
