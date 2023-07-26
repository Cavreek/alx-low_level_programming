#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest: string
  * @src: n bytes of string src will be appended to dest string
  * @int: number of bytes to be appended
  *
  * Return: a pointer to the string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (*(dest + i) != 0)
		i++;

	for (i = 0; src[i] && i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
