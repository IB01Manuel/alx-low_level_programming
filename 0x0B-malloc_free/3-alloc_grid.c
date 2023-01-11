#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **array, c, d;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (c = 0; c < height; c++)
	{
		array[c] = (int *)malloc(sizeof(int) * width);
		if (array[c] == NULL)
		{
			for (c--; c >= 0; c--)
				free(array[c]);
			free(array);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
		for (d = 0; d < width; d++)
			array[c][d] = 0;

	return (array);
}
