#include "main.h"

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
