#include "main.h"

/**
 * _isalpha - it checks the alphabet for small or big alphabets.
 * @c: the alphabet to be checked
 *
 * Return: it returns 1 if it is an alphabet
 * and 0 if it is not.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
