#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always return 0
 */

int main(void)
{
	int first;
	int second;

	for (first = 0; first < 99; first++)
	{
		for (second = first + 1; second < 100; second++)
		{
			putchar ((first / 10) + '0');
			putchar ((first % 10) + '0');
			putchar (' ');
			putchar ((second / 10) + '0');
			putchar ((second % 10) + '0');
			if (first == 98  && second == 99)
				continue;
			putchar (',');
			putchar (' ');
		}
	}

	putchar ('\n');
	return (0);
}
