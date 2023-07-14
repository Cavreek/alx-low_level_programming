#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always return 0
 */

int main(void)
{
	int dig_it;
	int alp_ha;

	for (dig_it = 0; dig_it < 10; dig_it++)
		putchar (dig_it + '0');
	for (alp_ha = 'a'; alp_ha <= 'f'; alp_ha++)
		putchar (alp_ha);
	putchar ('\n');
	return (0);
}
