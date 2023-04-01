#include "main.h"

/**
 * cap_string - It takes in a string and capitalize,
 * each word.
 * @n: The string to be worked on.
 *
 * Return: it Returns a string whose first char word,
 * is capitalized.
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (i == 0)
		{
			n[i] = _toupper(n[i]);
		}
		else if (n[i] == '\n' || n[i] == '\t' || n[i] == ' ')
		{
			n[i + 1] = _toupper(n[i + 1]);
		}
		else if (n[i + 1] == ')' || n[i] == '(' || n[i] == ';')
		{
			n[i + 1] = _toupper(n[i + 1]);
		}
		else if (n[i] == '}' || n[i] == '{' || n[i] == '.')
		{
			n[i + 1] = _toupper(n[i + 1]);
		}
		else if (n[i] == '"' || n[i] == '!' || n[i] == '?')
		{
			n[i + 1] = _toupper(n[i + 1]);
		}
		else if (n[i] == ',')
		{
			n[i + 1] = _toupper(n[i + 1]);
		}
		i++;
	}
	return (n);
}
