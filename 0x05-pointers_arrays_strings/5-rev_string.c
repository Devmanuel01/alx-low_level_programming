#include "main.h"

/**
 * rev_string - changes the value in the memory of a sting with its reverse.
 * @s: the string of char to be reversed and stored in memory
 *
 * Return: void
 */
void rev_string(char *s)
{
	int c = 0;
	int d = 0;
	char *n = "";
	char ch*;

	ch = &s;

	while (s[c] != '\0')
		c++;
	c--;

	while (c >= 0)
	{
		n[d] = s[c];
		d++;
		c--;
	}
	ch* = n;
}
