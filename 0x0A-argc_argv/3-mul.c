#include <stdio.h>
int _strtoint(char *s);

/**
 * main - Program entry point and it also prints,
 * the multiplication of two numbers to the stdout.
 * @argc: This parameter holds the total argument,
 * passed to the function in the command line.
 * @argv: This parameter contains an array of strings.
 *
 * Return: The function returns 0 on successful and,
 * 1 on Error.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", _strtoint(argv[1]) * _strtoint(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}

/**
 * _strtoint - This function converts a string of char,
 * in numbers of base 10 to integers of base 10.
 * @s: This is the argument that holds the string of char,
 * to be converted to integer.
 *
 * Return: This returns the integer that has been converted.
 */
int _strtoint(char *s)
{
	int num = 0, i = 0, j = 1;

	if (s[i] == '-')
	{
		while (s[j] != '\0')
		{
			num = (num * 10) + (s[j] - 48);
			j++;
		}
		num = -1 * num;
	}
	else
	{
		while (s[i] != '\0')
		{
			num = (num * 10) + (s[i] - 48);
			i++;
		}
	}
	return (num);
}
