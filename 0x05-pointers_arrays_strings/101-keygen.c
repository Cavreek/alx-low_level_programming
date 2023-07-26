#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program 101-crackme
 * Return: 0
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0;
	int port_1, port_2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		port_1 = (sum - 2772) / 2;
		port_2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			port_1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + port_1))
			{
				password[index] -= port_1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + port_2))
			{
				password[index] -= port_2;
				break;
			}
		}
	}

	printf("%s", password);

	return (0);
}
