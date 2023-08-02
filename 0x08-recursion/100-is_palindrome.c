#include "main.h"

int _strlen_recursion(char *s);
int pa_lin(char *s, int l);
int is_palindrome(char *s);

/**
 * _strlen_recursion - size
 * @s: pointer to string
 *
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * pa_lin - palindrome
 * @s: pointer to string
 * @l: position
 *
 * Return: boolean
 */

int pa_lin(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + l))
		return (p1(s + 1, l - 2));
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
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
