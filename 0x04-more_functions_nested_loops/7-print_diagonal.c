#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: Integer
  *
  * Return: 0
  */

void print_diagonal(int n)
{
	int az;

	if (n > 0)
	{
		for (az = 1; az <= n; az++)
			_putchar(47);
		_putchar('\n');
	}
	else if (n <= 0)
		_putchar('\n');
}
