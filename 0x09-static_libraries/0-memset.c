#include "main.h"

/**
  * _memset - fills the memory with a constant bite
  * @s: memory area pointer to be filled
  * @b: constant byte to fill the memory area
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
