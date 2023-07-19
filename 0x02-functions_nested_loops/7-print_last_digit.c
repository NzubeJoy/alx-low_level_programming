#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit of a number
 */

int print_last_digit(int n)

{

	int l;

	l = n % 10;
	if (l < 0)
	{
		l = -1 * n;
	}
	_putchar(l + '0');
	return (l);
}
