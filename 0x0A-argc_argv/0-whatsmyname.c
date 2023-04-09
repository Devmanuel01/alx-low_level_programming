#include <stdio.h>

/**
 * main - Entry point of the c program,
 * it also prints its name to the stdout.
 * @argc: This argument contains the total,
 * number of arguments passed to the program,
 * in the command line.
 * @argv: This contains an array of strings of,
 * the arguments passed.
 *
 * Return: This returns a number 0.
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
