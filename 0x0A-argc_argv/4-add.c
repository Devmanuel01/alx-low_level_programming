#include <stdio.h>
#include "main.h"

/**
 * main - Program entry point and the function also,
 * prints the sum of numbers and prints an Error if,
 * input is not a number.
 * @argc: This holds the total number of inputs passed,
 * to the program in the command line
 * @argv: This is an array of the strings of characters,
 * passed to the program in the command line.
 *
 * Return: This returns an integer 0 if program was,
 * successful and it returns 1 if there was an error.
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1, k, n;

	if (argc == 1)
	{
		printf("0\n");
		k = 0;
	}
	else
	{
		while (i < argc)
		{
			n = _strtoint(argv[i]);
			if (n != 0)
			{
				sum = sum + n;
			}
			else
			{
				k = 1;
				break;
			}
			i++;
		}
		if (k == 1)
			printf("Error\n");
		else
			printf("%d\n", sum);
	}
	return (k);
}
