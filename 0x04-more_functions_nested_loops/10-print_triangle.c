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
			for (bz = size - az; bz > 0; bz--)
				_putchar(' ');
			for (bz = 0; bz < az; bz++)
				_putchar('#');
			if (az == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}

