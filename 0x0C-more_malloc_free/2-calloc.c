#include "holberton.h"

/**
 * _memcpy - copy char
 * @s: string
 * @b: input
 * @n: bytes
 *
 * Return: string
 */

char *_memcpy(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	_memcpy(p, 0, (nmemb * size));
	return (p);
}
