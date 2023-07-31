#include "main.h"

/**
  * _strchr - a function that locates a character in a string
  * @s: string
  * @c: character in a string
  *
  * Return: A pointer to the first occurance of character c
  *         NULL, if the character is not found
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
