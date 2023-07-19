#include <stdio.h>

/**
  * main - Entry point
  * Return: 0
  */

int main(void)
{
	long int i, j, sum, result;

	i = 1;
	j = 2;
	sum = result = 0;

	while (sum <= 4000000)
	{
		sum = i + j;
		i = j;
		j = sum;
		if ((i % 2) == 0)
		{
			result += i;
		}
	}
	printf("%ld\n", result);
	return (0);
}
