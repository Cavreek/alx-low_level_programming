#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for a program
 * Return: 0
 */

int main(void)
{
	int password = 10;

	srand(time(0));

	for (int i = 0; i < password; i++)
	{
		return ((char)(rand() % 94 + 33));
	}

	printf("\n");

	return (0);
}
