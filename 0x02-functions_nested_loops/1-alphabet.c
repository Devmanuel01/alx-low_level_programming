#include "main.h"

/**
 * print_alphabet - prints the small letters of the alphabet to the stdout
 *
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
