#include <stdio.h>

/**
  * main - Entry point
  * Return: 0
  */

int main(void)
{
	long int i = 1;
	long int j = 2;
	long int k;
	long int sum;

	printf("%ld, %ld", i, j);

	for (k = 0; k < 48; k++)
	{
		sum = i + j;
		printf(", %ld", sum);
		i = j;
		j = sum;
	}
	printf("\n");

	return (0);
}
