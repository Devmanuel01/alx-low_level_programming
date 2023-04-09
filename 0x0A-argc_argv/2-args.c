#include <stdio.h>

/**
 * main - Program entry point and it prints all the arguments,
 * passed to the program in the command line to the stdout.
 * @argc: This paarmeter holds the total number of arguments,
 * passed to the program and it starts counting from 1 and the,
 * fisrt argument cou ted is the program name.
 * @argv: This Parameter is an array that holds the strings,
 * passed to the function in the command line.
 *
 * Return: This program returns 0 if it is successful.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
