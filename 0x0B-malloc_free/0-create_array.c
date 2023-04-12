#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: first parameter for size of array
 * @c: second parameter for specific character
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(*p));

	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
	return (0);
}
