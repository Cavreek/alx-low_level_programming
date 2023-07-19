#include "main.h"

/**
*print_times_table - Prints the n times table
*@n: Integer
*
*Return: 0
*/

void print_times_table(int n)
{
	int i, j, mul;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= 15; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				mul = n * j;

				_putchar(mul);
				_putchar(44);
				_putchar(32);
				if (mul <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(mul + 48);
				}
				else if (mul <= 99)
				{
					_putchar(((mul / 10) % 10) + 48);
					_putchar(((mul / 10) % 10) + 48);
					_putchar((mul % 10);
				}
			}
			_putchar('\n');
		}
	}
}


