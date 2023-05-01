#include "lists.h"
#include <stddef.h>

/**
 * listint_len - a function that returns the number of elements
 *		in an integer linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
