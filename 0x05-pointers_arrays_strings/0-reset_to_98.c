#include "main.h"

/**
 * reset_to_98 - This changes the value of
 * a variable at a particular address.
 * @n: this the pointer to the address which the value will
 * changed.
 */
void reset_to_98(int *n)
{
	int p = 98;
	*n = p;
}
