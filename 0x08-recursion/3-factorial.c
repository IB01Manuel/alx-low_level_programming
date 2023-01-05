#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the number
 * Return: 0
 */
int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);

}
