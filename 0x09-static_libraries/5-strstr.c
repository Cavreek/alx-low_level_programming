#include "main.h"

/**
 * _strstr - finds the first occurrence of the string needle
 *           in the string haystack
 * @haystack: string
 * @needle: the occurance in string haystack
 *
 * Return: pointer to the beginning of located substring or
 *         NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
