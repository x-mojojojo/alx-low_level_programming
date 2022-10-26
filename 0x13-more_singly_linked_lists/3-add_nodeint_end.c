#include "lists.h"

/**
 * add_nodeint_end - add node at the end of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *point, *tmp;

	point = malloc(sizeof(struct listint_s));
	if (point == NULL)
	{
		return (NULL);
	}
	else
	{
		point->n = n;
		if (*head == NULL)
		{
			point->next = NULL;
			*head = point;
		}
		else
		{
			tmp = *head;
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = point;
			point->next = NULL;
		}
	}
	return (point);
}
