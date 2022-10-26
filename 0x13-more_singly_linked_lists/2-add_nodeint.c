#include "lists.h"

/**
 * add_nodeint - add an int n at the beginning of a list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NEW;

	NEW = malloc(sizeof(listint_t));

	if (NEW == NULL)
		return (NULL);

	NEW->n = n;
	NEW->next = *head;
	*head = NEW;

	return (NEW);
}
