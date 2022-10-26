#include "lists.h"

/**
 * get_nodeint_at_index - Locates a node of a list at a
 *                         given index.
 * @head: head of the list.
 * @index: index of the node to be located.
 *
 * Return: 0 if non-existent else return the located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
