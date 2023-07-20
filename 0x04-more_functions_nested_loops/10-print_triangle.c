#include "main.h"

/**
  * print_triangle - prints a triangle
  * @size: The size of the triangle
  *
  * Return: 0
  */

void print_triangle(int size)
{
	int az;
	int bz;
	int cz;

	if (size > 0)
	{
		for (az = 1; az <= size; az++)
		{
			for (bz = 1; bz <= size - az; bz++)
				_putchar(35);
			for (cz = 1; cz <= az; cz++)
				_putchar(35);
		}
		_putchar('\n');

	}
	else if (size <= 0)
		_putchar('\n');
	_putchar('\n');
}

