#include "main.h"

/**
  * _strspn - a function that gets the length of a prefix substring
  * @s: string
  * @accept: bytes accepted to be used
  *
  * Return: The number of bytes in the initial segment of s
  *         which consist only of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int az, bz;
	unsigned int inside;

	for (az = 0; *(s + az) != '\0'; ++az)
	{
		inside = 1;
		for (bz = 0; *(accept + bz) != '\0'; ++bz)
		{
			if (*(s + az) == *(accept + bz))
			{
				inside = 0;
				break;
			}
		}
		if (inside == 1)
			break;
	}
	return (i);
}
