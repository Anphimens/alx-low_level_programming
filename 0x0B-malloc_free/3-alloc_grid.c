#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a
 *	2-dimensional array of integers
 * @width: first parameter
 * @height: second parameter
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int  **matrix;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	matrix = malloc(height * sizeof(*matrix));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(**matrix));
		if (matrix[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < height; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
