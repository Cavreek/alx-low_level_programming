#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes allocate
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
