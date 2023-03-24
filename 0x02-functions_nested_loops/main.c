#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int y = 'd';

	for (n = 97; n < 123; n++)
	{
		if (_putchar(y) == _putchar(n))
		{
			break;
			return (1);
		}
	}
	_putchar('\n');
	return (0);
}
