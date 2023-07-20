#include "main.h"

/**
  * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
  * Return: 0
  */

void print_most_numbers(void)
{
	int al;

	for (al = 0; al <= 9; al++)
	{
		if ((al == 2) || (al == 4))
			continue;
		_putchar(al + '0');
	}
	_putchar('\n');
}

