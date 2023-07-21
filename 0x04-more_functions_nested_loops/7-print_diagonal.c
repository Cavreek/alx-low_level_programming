#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: Integer
  *
  * Return: 0
  */

void print_diagonal(int n)
{
	int lin;
	int spac;

	if (n > 0)
	{
		for (lin = 0; lin < n; lin++)
		{
			for (spac = 0; spac < lin; spac++)
			{
				_putchar(' ');
			}

			_putchar('\\');

			if (lin == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
