#include "main.h"
void printNewChar(char *m);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "_putchar";
	
	printNewChar(s);

	return (0);
}

void printNewChar (char *m)
{
	int i = 0;
	
	while (m[i] != '\0')
	{
		_putchar(m[i]);
		i++;
	}
	_putchar('\n');
}
