#include "main.h"

/**
  * factorial - returns the factorial of a given number
  * @n: number
  *
  * Return: -1 indicating an error
  	     0 on success
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
	{
		n *= factorial(n - 1);
	}
	return (n);
}