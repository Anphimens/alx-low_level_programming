#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute a function pointer on each element of array
 * @size: size of the array
 * @action: a pointer to the function
 * @array: array of integers
 * Return: 0
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
