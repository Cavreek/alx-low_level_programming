#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - length of a string
 * @s: input char
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int az = 0;

	while (*s != '\0')
	{
		s++;
		az++;
	}
	return (az);
}

/**
 * argstostr - concatenates all arguments
 * @ac: count
 * @av: vector
 *
 * Return: a pointer to a new string
 * NULL if ac == 0 or av == NULL, NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	int len, R = 0;
	char *p;

	if (!ac || !av)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]) + 1;
		R += len;
	}
	p = malloc(sizeof(char) * R + 1);

	if (!p)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);

		for (j = 0; j < len; j++, k++)
		{
			p[k] = av[i][j];
		}
		p[k++] = '\n';
	}
	p[k] = '\0';

	return (p);
}
