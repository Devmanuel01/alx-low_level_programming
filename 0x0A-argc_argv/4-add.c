#include <stdio.h>
int _strtoint(char *);

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

/**
 * _strtoint - This function converts a string,
 * of char into integers.
 * @s: This point to the address in memory of the string,
 * of characters to be convereted to integers.
 *
 * Return: This returns the converted integer or it returns,
 * 0 if the char to be converted is not a number char.
 */
int _strtoint(char *s)
{
	int i = 0, j = 1;
	int num = 0;

	if (s[i] == '-')
	{
		while (s[j] != '\0')
		{
			if (s[j] >= '0' && s[j] <= '9')
			{
				num = (num * 10) + (s[j] - 48);
			}
			else
			{
				num = 0;
				break;
			}
			j++;
		}
	}
	else
	{
		while (s[i] != '\0')
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				num = (num * 10) + (s[i] - 48);
			}
			else
			{
				num = 0;
				break;
			}
			i++;
		}
	}
	return (num);
}
