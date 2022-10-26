#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *point, *tmp;

	point = malloc(sizeof(listint_t));

	if (point == NULL)
		return (NULL);
	point->n = n;
	tmp = *head;

	if (tmp == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
	{
		point->next = *head;
		*head = point;
	}
	else
	{
		for (a = 0; a < idx - 1 && tmp != NULL; a++)
		{
			tmp = tmp->next;
			if (tmp == NULL)
			{
				return (NULL);
			}
		}
		point->next = tmp->next;
		tmp->next = point;
	}
	return (point);
}
