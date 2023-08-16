#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name of main
 * @f: void function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
