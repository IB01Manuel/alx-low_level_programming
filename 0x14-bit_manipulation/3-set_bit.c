#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: starting from 0 of the bit to be set
 * @n: pointer
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
