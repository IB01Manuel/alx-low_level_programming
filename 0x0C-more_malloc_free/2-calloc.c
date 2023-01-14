#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: memory allocator
 * @size: size allocator
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *f;
	unsigned int g;

	if (nmemb == 0 || size == 0)
		return (NULL);
	f = malloc(nmemb * size);
	if (f == NULL)
		return (NULL);
	for (g = 0; g < (nmemb * size); g++)
		f[g] = 0;
	return (f);
}
