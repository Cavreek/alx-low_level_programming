#include "main.h"

/**
 * _strncpy - copies n number of character from a string
 * @dest: string
 * @src: string to be copied
 * @n: the number of bytes to copied from src.
 *
 * Return: a pointer to the string dest.
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (src[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
