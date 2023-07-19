#include "main.h

/**
*print_times_table - Prints the n times table
*@n: Integer
*
*Return: 0
*/

void print_times_table(int n)
{
	int j, mul;

	if (n < 0 || n > 15)
		continue;
	else
		for (n = 0; n <= 15; n++)
		{
			_putchar(48);
			for (j = 1; j <= 15; j++)
			{
				mul = n * j;

				_putchar(mul);
				_putchar(44);
				_putchar(32);
				if (mul <= 15)
				{
					_putchar(32);
					_putchar(mul + 48);
				}
				else
				{
					_putchar((mul / 10) + 48);
					_putchar((mul % 10) + 48);
				}
			}
			_putchar('\n');
		}
}
