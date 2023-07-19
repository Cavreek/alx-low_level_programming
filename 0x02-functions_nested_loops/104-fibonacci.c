#include <stdio.h>

/**
  * main - Prints the first 98 fibonacci numbers
  * Return: 0
  */

int main(void)
{
	long int h, i, j, sum1, hh, ii, sum2;
	long int positive, positive2;


	h = 1;
	i = 2;
	positive = positive2 = 1;
	printf("%ld, %ld", h, i);

	for (j = 0; j < 96; j++)
	{
		if (positive)
		{
			sum1 = h + i;
			printf(", %ld", sum1);
			h = i;
			i = sum1;
		}
		else
		{
			if (positive2)
			{
				hh = h % 1000000000;
				ii = i % 1000000000;
				h = h / 1000000000;
				i = i / 1000000000;
				positive2 = 0;
			}
			sum2 = (hh + ii);
			sum1 = h + i + (sum2 / 1000000000);
			printf(", %ld", sum1);
			printf("%ld", sum2 % 1000000000);
			h = i;
			hh = ii;
			i = sum1;
			ii = (sum2 % 1000000000);
		}
		if (((h + i) < 0) && positive == 1)
			positive = 0;
	}
	printf("\n");
	return (0);
}
