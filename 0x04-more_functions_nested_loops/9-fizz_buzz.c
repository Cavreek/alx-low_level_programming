#include <stdio.h>

/**
  * main - Prints the numbers from 0 to 100
  * print Fizz for multiples of 3
  * print Buzz for multiples of 5
  * Return: 0
  */

int main(void)
{
	int az;

	for (az = 1; az <= 100; az++)
	{
		if ((az % 3) == 0 && (az % 5) == 0)
			printf("FizzBuzz ");
		else if ((az % 3) == 0)
			printf("Fizz ");
		else if (az == 100)
			printf("Buzz");
		else if ((az % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", az);
	}
	printf("\n");
	return (0);
}
