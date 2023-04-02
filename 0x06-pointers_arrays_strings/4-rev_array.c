#include "main.h"

/**
 * reverse_array - This function reverses the Array.
 * @a: The array to be reversed.
 * @n: The total number of array item.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	i = 0;
	k = n / 2;
	n = n - 1;

	while (i < k)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
