#include "main.h"

/**
  * more_numbers - prints 10 times the numbers from 0 to 14
  * Return: 0
  */

void more_numbers(void)
{
	int az, bz;

	for (az = 0; az <= 9; az++)
	{
		for (bz = 0; bz < 14; bz++)
			_putchar(bz + '0');
		_putchar(az);
	}
	_putchar('\n');
}
