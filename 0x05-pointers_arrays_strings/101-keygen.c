#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for a program
 * Return: 0
 */

int main(void)
{
	int numPasswords = 10;
	int passwordLength = 10;

	srand(time(0));

	for (int i = 0; i < numPasswords; i++)
	{
		for (int j = 0; j < passwordLength; j++)
		{
			char passwordChar = (char)(rand() % 94 + 33);

			putchar(passwordChar);
		}
		putchar('\n');
	}
	return (0);
}
