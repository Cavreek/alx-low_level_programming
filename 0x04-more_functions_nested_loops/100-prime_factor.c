#include <stdio.h>

/**
  * main - prints the largest prime number
  * Return: 0
  */

int main(void)
{
	long numb = 612852475143;
	long div;

	while (div < (numb / 2))
	{
		if ((numb % 2) == 0)
		{
			numb /= 2;
			continue;
		}

		for (div = 3; div < (numb / 2); div += 2)
		{
			if ((numb % div) == 0)
				numb /= div;
		}
	}

	printf("%ld\n", numb);

	return (0);
}
