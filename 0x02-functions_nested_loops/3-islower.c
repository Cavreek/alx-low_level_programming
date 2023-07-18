#include "main.h"
#include <ctype.h>
#include <stdbool.h>

/**
  * _islower - Checks for lowercase character
  *
  *@c: Character equivalent to its ASCII value
  *
  * Return: Returns 1 if character is lowercase otherwise return 0
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
