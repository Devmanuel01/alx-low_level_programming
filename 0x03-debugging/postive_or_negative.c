#include <stdio.h>

/**
 * positive_or_negative - prints an integer that is positive or negative
 * @i: the integer to be checked if negative or not.
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
		printf("%d is negative\n", i);
}
