#include <stdio.h>
#include "lists.h"

/**
 * print_list - print the elements of lists_t list
 * @h: point to the list_t to print
 *
 * Return: the printed number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		l++;
	}
	return (l);
}
