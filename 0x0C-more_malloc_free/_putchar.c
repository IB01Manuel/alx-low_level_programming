#include <unistd.h>

/**
 * _putchar - displays to stdout
 * @c: the character to be printed
 *
 * Return: Success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
