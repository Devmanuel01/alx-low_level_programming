#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - This function executes a function given as a,
 * parameter on each element of an array.
 * @array: The array element to be worked on.
 * @size: The size of the array.
 * @action: The function being pointed to.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	int j = 0;

	if (action && array)
	{
		while (i < size)
		{
			action(array[j]);
			j++;
			i++;
		}
	}
}
