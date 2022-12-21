#include "main.h"

/**
 * _strcat - Concatenates 2 strings
 * @dest: character
 * @src: character
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
