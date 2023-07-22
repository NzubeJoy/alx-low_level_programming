#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * prints the numbers one to hundred in a new line
 * prints fizz for multiples of 3, buzz for 5
 * prints fizzbuzz for multiples of both 3 and 5
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
