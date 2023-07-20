#include "main.h"

/**
  * print_numbers - prints numbers from 0 to 9
  * Return: 0
  */

void print_numbers(void)
{
	int al;

	for (al = 0; al <= 9; al++)
		_putchar(al + '0');
	_putchar('\n');
}
