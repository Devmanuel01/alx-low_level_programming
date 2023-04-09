#include <stdio.h>

/**
 * main - Program entry point and it prints the total,
 * number of arguments passed to the function in the,
 * command line.
 * @argc: This parameter contains teh total number of,
 * arguments passed to the program during execution.
 * @argv: This parameter contains the array of strings of,
 * arguments paased to the program.
 *
 * Return: This program returns 0.
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
