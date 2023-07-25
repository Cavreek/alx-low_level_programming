#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string
  *
  * Return: 0
  */

void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int a;

	while (str[i++])
		len++;

	if ((len % 2) == 0)
		a = len / 2;
	else
		a = (len + 1) / 2;

	for (i = a; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
