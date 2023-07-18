#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @al: The integer to be accessed
  *
  * Return: Return 0
  */

int print_last_digit(int al)
{
	int lt;

	lt = al % 10;
	if (lt < 0)
	{
		_putchar(-lt + 48);
		return (-1);
	}
	else
	{
		_putchar(lt + 48);
		return (1);
	}
}
