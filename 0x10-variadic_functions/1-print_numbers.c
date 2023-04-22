#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - This function prints numbers, followed
 * by a new line.
 * @separator: This holds the char used to seperate the,
 * numbers.
 * @n: This holds the total number of variable args.
 * @...: This signifies variable args.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int args = 0;

	if (n > 0)
	{
		va_start(arg_ptr, n);
		while (args < n)
		{
			printf("%d", va_arg(arg_ptr, int));
			if (separator && (args != (n - 1)))
				printf("%s", separator);
			args++;
		}
		va_end(arg_ptr);
		putchar('\n');
	}
}
