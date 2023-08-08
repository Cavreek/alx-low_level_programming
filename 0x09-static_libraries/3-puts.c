#include "main.h"

/**
  * _puts - prints a string to stdout
  * @str: string to be printed
  *
  * Return: 0
  */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
