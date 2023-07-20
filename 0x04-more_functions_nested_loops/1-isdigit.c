#include "main.h"

/**
  * _isdigit - checks for digit
  * @c: Integer
  *
  * Return: Returns 1 if @c is a digit otherwise returns 0
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
	_putchar('\n');
}
