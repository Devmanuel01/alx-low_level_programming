#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - This function prints all arguments,
 * of specified formats.
 * @format: This is the format of the argument to be,
 * printed.
 * @...: The arguments to be printed according to,
 * format.
 *
 * Return: Void.
 */
void print_all(const char * const format, ...)
{
	char *str;
	int args_len = strlen(format);
	va_list args_ptr;
	int args = 0;

	va_start(args_ptr, format);
	while (format[args] != '\0')
	{
		switch (format[args])
		{
			case 'c':
				printf("%c", va_arg(args_ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(args_ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(args_ptr, double));
				break;
			case 's':
				str = va_arg(args_ptr, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		if ((args != (args_len - 1)) && (format[args] == 'c' || format[args] == 'i' || format[args] == 'f' || format[args] == 's'))
			printf(", ");
		args++;
	}
	va_end(args_ptr);
	putchar('\n');
}
