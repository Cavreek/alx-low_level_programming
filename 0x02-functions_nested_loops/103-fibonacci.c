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
	long int result = 0;


	for (k = 1; ;k++)
	{
		sum = i + j;
		i = j;
		j = sum;

		if (sum > 4000000)
			break;
		else if (sum % 2 == 0)
		{
			result += sum;
		}
	}
	printf("%ld", result);
	printf("\n");

	return (0);
}
