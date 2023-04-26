#include <stdio.h>

/**
 * main - This function prints the name of,
 * the file it was compiled from using a predefined,
 * macro (__FILE__);
 *
 * Return: It returns 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
