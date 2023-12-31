#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Return: If str1 < str2, the -ve difference of the unmatched characters
 * If str1 == str2, 0
 * If str1 > str2, the +ve difference of the unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
