#include "main.h"

/**
  * print_square - prints a square
  * @size: size of the square
  *
  * Return: 0
  */

void print_square(int size)
{
	int az;
	int bz;


	if (size > 0)
	{
		for (az = 0; az < size; az++)
		{
			for (bz = 0; bz < size; bz++)
				_putchar(35);
			if (az == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
