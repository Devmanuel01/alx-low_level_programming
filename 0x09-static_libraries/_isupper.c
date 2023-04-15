#include "main.h"

/**
 * _isupper - This function retruns 1 if the,
 * argument passed to it is a capital letter.
 * @c: The argument to be checked if it is a,
 * capital letter.
 *
 * Return: The function returns 1 if it is,
 * capital letter anf returns 0 if otherwise.
 */
int _isupper(int c)
{
	int i = 0;

	if (c >= 'A' && c <= 'Z')
		i = 1;
	return (i);
}
