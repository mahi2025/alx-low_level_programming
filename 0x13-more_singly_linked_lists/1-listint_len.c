#include "lists.h"

/**
 * listint_len - return the number of elements in linked list
 * @h: linked list of type listint_t to return
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
