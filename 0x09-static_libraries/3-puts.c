#include "main.h"

/**
 * _puts - Prints a string
 * @str: the string
 * Return: The length of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
