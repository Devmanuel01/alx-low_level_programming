#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 integers
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 1098;
	b = 1098;
	c = 12;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
