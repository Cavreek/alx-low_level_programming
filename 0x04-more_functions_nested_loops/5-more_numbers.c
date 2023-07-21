#include "main.h"

/**
  * more_numbers - prints 10 times the numbers from 0 to 14
  * Return: 0
  */

void more_numbers(void)
{
	int line;
	int bz;

	for (line = 0; line <= 9; line++)
	{
		for (bz = 0; bz <= 14; bz++)
		{
			if (bz > 9)
			{
				_putchar((bz / 10) + '0');
			}
			_putchar((bz % 10) + '0');
		}

		_putchar('\n');
	}
}
