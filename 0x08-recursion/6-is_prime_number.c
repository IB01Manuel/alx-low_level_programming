#include "main.h"

/**
 * check - checks to see if the number is a prime
 * @a: first int
 * @b: second int
 * Return: 0
 */
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the number
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
