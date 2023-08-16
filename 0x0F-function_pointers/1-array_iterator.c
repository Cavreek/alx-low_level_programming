#include <stdio.h>

/**
 * array_iterator - executes a function
 * @array: array of elements
 * @size: size of array
 * @action: pointer to function
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
