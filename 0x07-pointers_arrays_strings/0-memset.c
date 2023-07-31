#include "main.h

/**
* _memset - a function that fills memory with a constant byte
* @s: memory area pointer to be filled
* @b: constant byte used to fill memory area
* @n: bytes of memory to be filled
*
* Return: *s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
