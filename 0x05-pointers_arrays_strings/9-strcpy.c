#include "main.h"

/**
  * _strcpy - copies the string pointed to by src
  * to the buffer pointed to by dest
  * @dest: the buffer pointer that copies the string
  * @src: the buffer pointer that the string is copied from
  *
  * Return: 0
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
