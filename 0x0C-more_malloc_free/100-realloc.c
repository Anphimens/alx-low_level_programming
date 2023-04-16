#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using
 *		malloc and free
 * @ptr: previous pointer
 * @old_size: old size of previous pointer
 * @new_size: new size of previous pointer
 * Return: A new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;

	if (new_size > old_size)
	{
		newptr = malloc(new_size);
		free(ptr);
		return (newptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		free(ptr);
		return (newptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
