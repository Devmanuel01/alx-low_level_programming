#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - This function prints numbers, followed
 * by a new line.
 * @seperator: This holds the char used to seperate the,
 * numbers.
 * @n: This holds the total number of variable args.
 * @...: This signifies variable args.
 *
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int args = 0;

	if (seperator != NULL)
	{
		if (n > 0)
		{
			va_start(arg_ptr, n);
			while (args < n)
			{
				if (args != (n - 1))
					printf("%d%c ", va_arg(arg_ptr, int), *seperator);
				else
					printf("%d", va_arg(arg_ptr, int));
				args++;
			}
			putchar('\n');
		}
	}
}
