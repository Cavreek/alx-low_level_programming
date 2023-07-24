#include "main.h"

/**
  * print_rev - prints a string in reverse order
  * @s: string to be reversed
  *
  * Return: 0
  */

void print_rev(char *s)
{
	int a;

	while (a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
