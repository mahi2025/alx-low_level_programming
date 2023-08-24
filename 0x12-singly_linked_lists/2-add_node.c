#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new odd the begining of a lists_t list
 * @head: double pointer to the list_t list
 * @str: new string
 *
 * Return: the address of the new element, otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

