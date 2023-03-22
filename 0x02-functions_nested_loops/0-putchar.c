#include "main.h"
void printNewChar(char *m);

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	char s[] = "_putchar";

	printNewChar(s);

	return (0);
}

/**
 * printNewChar - Runs through an array of char and prints out each char
 * @m: The string of char to run through
 *
 * _putchar: prints the char to stdout
 */
void printNewChar(char *m)
{
	int i = 0;

	while (m[i] != '\0')
	{
		_putchar(m[i]);
		i++;
	}
	_putchar('\n');
}
