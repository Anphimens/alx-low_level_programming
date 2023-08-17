#include "lists.h"

/**
 * dlistint_len - A function returns the number of elements in a linked list
 * @h: Struct to return elements
 *
 * Return: Number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
