#include "main.h"

/**
 * rot13 - Encodes the char of a string,
 * with the 13th letter after it.
 * @n: The string whose char will be encoded.
 *
 * Return: It returns an encoded string;
 */
char *rot13(char *n)
{
	int i, j;

	char arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char bArr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	while (n[i] != '\0')
	{
		j = 0;

		while (arr[j] != '\0')
		{
			if (n[i] == arr[j])
			{
				n[i] = bArr[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (n);
}
