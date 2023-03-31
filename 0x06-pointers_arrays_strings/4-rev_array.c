#include <stdio.h>
#include "main.h"
void reverse_array(int *a, int n)
{
	int i;

	i = 0;

	while (n >= 0)
	{
		printf("%d\n", a[n - 1]);
		n--;
	}
}
