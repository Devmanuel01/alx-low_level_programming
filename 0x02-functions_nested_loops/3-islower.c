#include "main.h"

/**
 * _islower - checks the alphabets that are small alphabets
 * @c: the argument to be checked if it is a small letter.
 *
 * Return: it returns 1 if it is a small letter,
 * and it returns 0 for the opposite.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
