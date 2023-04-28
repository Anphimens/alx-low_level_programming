#include "lists.h"
#include <stdlib.h>

/**
 * list_len - a function that returns the number of elements in a
 *		linked list
 * @h: a pointer to the head of the list
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
