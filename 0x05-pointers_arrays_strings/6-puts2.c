#include "main.h"

/**
 * puts2 - Prints character of a string
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
					}
					k++;
					}
					_putchar('\n');
}
