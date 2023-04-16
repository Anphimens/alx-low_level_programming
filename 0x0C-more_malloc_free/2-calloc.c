#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of members of array
 * @size: size of array
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i = 0, num = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	num = nmemb * size;
	ptr = malloc(num);

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < num)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
