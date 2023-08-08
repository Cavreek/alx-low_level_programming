#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size
 * @c: constant
 *
 * Return: pointer to the array, or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (0);
	p = malloc(sizeof(char) * size);

	if (p == '\0')
		return (0);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
