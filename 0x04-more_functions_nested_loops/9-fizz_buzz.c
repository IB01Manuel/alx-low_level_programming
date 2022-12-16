#include <stdio.h>
#include "main.h"

/**
 * main - Entry
 * Description: Prints the numbers from 1 t0 100
 * for multiples of three Fizz, for multiples of
 * five Buzz, for muliples of both FizzBuzz.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
