#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabet in lower case
  * Return: Always return 0
  */

void print_alphabet_x10(void)
{
	char al;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
