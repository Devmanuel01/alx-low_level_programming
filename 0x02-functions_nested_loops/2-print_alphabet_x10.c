#include "main.h"

/**
 * print_alphabet_x10 - prints the small letters of alphabets 10x
 *
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		int ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
