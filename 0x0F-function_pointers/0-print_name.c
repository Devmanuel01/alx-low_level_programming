#include "function_pointers.h"

/**
 * print_name - This Function accepts a pointer to,
 * a char and a pointer to a function and prints a,
 * name.
 * @name: This is the name to be printed.
 * @f: This the function that prints the name.
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
