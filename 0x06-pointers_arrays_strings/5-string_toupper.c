#include "main.h"

/**
 * string_toupper - This function returns a string with all,
 * the letters in capital.
 * @str: This is the string to be turned to capital letter.
 *
 * Return: This function returns a string that has been capitalized.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
	}
	return (str);
}
