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

	if (size > 0)
	{
		for (az = 1; az <= size; az++)
		{
			for (bz = 1; bz <= size; bz++)
			{
				_putchar(32);
			}
			for (bz = 1; bz <= az; bz++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else if (size >= 0)
		_putchar('\n');
}
