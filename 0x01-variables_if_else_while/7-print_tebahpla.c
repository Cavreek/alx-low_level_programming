#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always return 0
 */

int main(void)
{
	char rev_alpha;

	for (rev_alpha = 'z'; rev_alpha >= 'a'; rev_alpha--)
		putchar (rev_alpha);
	putchar ('\n');
	return (0);
}
