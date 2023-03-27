#include "main.h"

/**
 * swap_int - this functions swaps the integer in memory.
 * @a: This is the first integer.
 * @b: This is the second integer.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
