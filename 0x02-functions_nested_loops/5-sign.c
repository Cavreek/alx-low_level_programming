#include "main.h"

/**
  * print_sign - prints the sign of a number
  *
  * @n: Equivalent ASCCI value
  *
  * Return: returns 1 if @n > 0, returns 0 if @n = 0, returns -1 if @n < 0
  */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
}
