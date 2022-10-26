#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: head of a list.
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
