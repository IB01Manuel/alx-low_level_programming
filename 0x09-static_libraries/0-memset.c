#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: the string
 * @b: constant byte
 * @n: memory
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
