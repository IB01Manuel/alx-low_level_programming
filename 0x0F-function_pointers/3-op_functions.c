#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - the sum of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the difference of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - result of the division of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - the remainder of the division of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
