#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: string
  *
  * Return: 0
  */

int _strlen(char *s)
{
	int r;

	for (r = 0; r <= *s; r++)
	{
		if (r < *s)
			continue;
		else if (r == s)
			_putchar(r + '0');
	}
	_putchar('\n');
}
