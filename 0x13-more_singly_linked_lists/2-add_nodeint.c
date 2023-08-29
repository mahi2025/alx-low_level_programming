#include "lists.h"

/**
 * add_nodeint - add a new node at the begining of listint_t list
 * @head: point to the first node
 * @n: data that are insert to new node
 *
 * Return: the address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
