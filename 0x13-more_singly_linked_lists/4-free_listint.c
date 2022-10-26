#include "lists.h"

/**
 * free_listint - deletes a linked list
 * @head: head of a list.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *delete;

	while (head)
	{
		delete = head->next;
		free(head);
		head = delete;
	}
}
