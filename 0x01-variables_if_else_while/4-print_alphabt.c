#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always return 0
 */

int main(void)
{
	char lower_alpha;

	for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
	{
		if (lower_alpha == 'q' || lower_alpha == 'e')
			continue;
		putchar (lower_alpha);
	}
	putchar ('\n');
	return (0);
}
