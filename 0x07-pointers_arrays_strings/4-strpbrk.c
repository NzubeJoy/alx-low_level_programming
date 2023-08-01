#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set bytes.
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for.
 * Return: pointer that matches one of the bytes, else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
