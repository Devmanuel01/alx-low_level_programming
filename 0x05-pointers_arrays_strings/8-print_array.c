#include <stdio.h>
#include "main.h"

/**
 * print_array - prints each item of an array to the stdout.
 * @a: The arrayed to run through and print out its value.
 * @n: The Total number of array element.
 */
void print_array(int *a, int n)
{
	int i = 0;

	n--;

	while (i <= n)
	{
		if (i != n)
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
