#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - this function prints the result,
 * of basic calculation to the stdout.
 * @argc: This holds the total number of arg,
 * passed to the commandline.
 * @argv: This holds the array of string args.
 *
 * Return: This returns 0.
 */
int main(int argc, char *argv[])
{
	int j, k;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error1\n");
		exit(98);
	}
	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error2\n");
		exit(99);
	}
	j = atoi(argv[1]);
	k = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && k == 0)
	{
		printf("Error3\n");
		exit(100);
	}
	printf("%d\n", ptr(j, k));
	return (0);
}
