#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always return 0
 */

int main(void)
{
	char lower_first;
	char upper_second;

	for (lower_first = 'a'; lower_first <= 'z'; lower_first++)
		putchar (lower_first);
	for  (upper_second = 'A'; upper_second <= 'Z'; upper_second++)
		putchar (upper_second);
	putchar('\n');

	return (0);
}	
