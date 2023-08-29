#include "lists.h"

/**
 * pop_listint -  deletes the node of a listint_t list
 * @head: pointer to first element in listint_t list
 *
 * Return: the head node's data otherwise 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
