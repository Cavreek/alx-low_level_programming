#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for a program
 * Return: 0
 */

int main(void)
{
	int pasLen = 40;
	char pass[passLen + 1];

	char word;
	char pass;

	int senLen = 0;

	while (word[senLen] != '\0')
	{
		senLen++;
	}

	srand(time(0));

	for (int i = 0; i < passLen; i++)
	{
		int ranIndex = rand() % senLen;

		pass[i] = word[ranIndex];
	}

	pass[passLen] = '\0';

	printf("%s\n", pass);

	return (0);
}
