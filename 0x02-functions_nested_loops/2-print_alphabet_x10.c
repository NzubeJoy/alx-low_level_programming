#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabet ten times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{

	char h;
	int i;

	i = 0;
	while (i < 10)
	{
		for (h = 'a'; h <= 'z'; h++)
		{
			_putchar(h);
		}
		_putchar('\n');
		i++;
	}
}
