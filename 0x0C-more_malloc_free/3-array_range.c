#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that create an array of int
 * @min: minimum values
 * @max: maximum values
 * Return: a pointer to newly created arrays
 */
int *array_range(int min, int max)
{
	int *ptr = 0;
	int r = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[r] = min;
		r++;
		min++;
	}
	return (ptr);
}
