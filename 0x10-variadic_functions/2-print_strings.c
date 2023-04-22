#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - This function prints the strings passed as arg,
 * to it.
 * @separator: This argument holds the string that separates the,
 * strings passed.
 * @n: This argument holds the number of variable arguments to be,
 * passed.
 * @...: This denotes the variable arguments to be passed.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int args = 0;
	va_list args_ptr;
	char *s;

	va_start(args_ptr, n);
	while (args < n)
	{
		s = va_arg(args_ptr, char *);
		if (!s)
			s = "(nil)";
		printf("%s", s);
		if (separator && (args != (n - 1)))
			printf("%s", separator);
		args++;
	}
	va_end(args_ptr);
	putchar('\n');
}
