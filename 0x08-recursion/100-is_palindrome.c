#include "main.h"

int strlen_check(char *s);
int pa_lin(char *s, int az);
int is_palindrome(char *s);

/**
 * strlen_check - size
 * @s: pointer to string
 *
 * Return: recursion
 */

int strlen_check(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + strlen_check(++s));
}

/**
 * pa_lin - palindrome
 * @s: pointer to string
 * @l: position
 *
 * Return: boolean
 */

int pa_lin(char *s, int az)
{
	if (az < 1)
		return (1);
	if (*s == *(s + az))
		return (pa_lin(s + 1, az - 2));
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 *
 * Return: recusion
 */

int is_palindrome(char *s)
{
	int len = strlen_check(s);

	return (pa_lin(s, len - 1));
}
