#include "main.h"

/**
 * _puts - Prints a string
 * @str: string to be printed
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
