#include "function_pointers.h"

/**
 * int_index - This function searches for an integer,
 * using a pointer to a function as an argument.
 * @array: This is the array to search through.
 * @size: This is the size of the array.
 * @cmp: This is a pointer to function to run this,
 * integer check.
 *
 * Return: Returns -1 if size is <=0 or returns the index,
 * of the array that is an integer or returns -1 if the,
 * array or pointer to function was not passed.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int j = 0, k = -1;

	if (size <= 0)
		return (k);
	if (array && cmp)
	{
		while (i < size)
		{
			j = cmp(array[i]);
			if (j != 0)
			{
				k = i;
				break;
			}
			i++;
		}
		return (k);
	}
	else
		return (k);
}
