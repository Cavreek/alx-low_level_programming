#include "main.h"

/**
  * print_line - function draws straight line in the terminal
  * @n: number of times the character _ is printed
  *
  * Return: 0
  */

void print_line(int n)
{
	int az;


	if (n > 0)
	{
		for (az = 1; az <= n; az++)
			_putchar(95);
		_putchar('\n');
	}
	else if (n <= 0)
		_putchar('\n');
}
