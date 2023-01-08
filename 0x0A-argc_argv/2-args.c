#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: argument counts
 * @argv: string_array argument
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
