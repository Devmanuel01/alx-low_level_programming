#include "main.h"

/**
 * _toupper - This function turns a letter to capital letter.
 * @n: this parameter is to be changed to capital letter.
 *
 * Return: it Returns a char in capital letter.
 */
char _toupper(char n)
{
	if (n >= 'a' && n <= 'z')
	{
		n = n - 32;
	}
	return (n);
}
