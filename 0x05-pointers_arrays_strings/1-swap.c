#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @*a,*b: pointers
 * @a: integer variable
 * @b: integer variable
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
