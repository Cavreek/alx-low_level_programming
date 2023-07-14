#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always return 0
 */

int main(void)
{
	int space;

	for (space = 0; space < 10; space++)
	{
		putchar (space + '0');
		if (space != 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');

	return (0);
}
