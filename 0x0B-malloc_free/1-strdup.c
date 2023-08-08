#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string
 * @str: The string with the duplicate
 *
 * Return: Returns NULL if str = NULL
 * or if insufficient memory was available
 * or on success, a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *sec;
	int x;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		len++;

	second_copy = malloc(sizeof(char) * (len + 1));

	if (sec == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		sec[x] = str[x];
	sec[len] = '\0';

	return (sec);
}
