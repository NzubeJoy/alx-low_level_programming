#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for digit zero through nine
 * @int c: The digit to be checked
 * Return: Returns 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
