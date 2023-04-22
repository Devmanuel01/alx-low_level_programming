#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - This function returns the sum of,
 * its arguments.
 * @n: The arg that holds the total number of args,
 * to be passed.
 * @...: The varaible number of args.
 *
 * Return: It returns the sum of the args. it returns,
 * 0 if n == 0.
 */
 int sum_them_all(const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int args = 0;
	int sum = 0;

	if (n <= 0)
		return (sum);
	va_start(arg_ptr, n);
	while (args < n)
	{
		sum = sum + va_arg(arg_ptr, int);
		args++;
	}
	va_end(arg_ptr);
	return (sum);
}
