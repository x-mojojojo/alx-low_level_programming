#include "lists.h"

/**
 * listint_len - prints number of elements in a list.
 * @h: head of a list.
 *
 * Return: numbers of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t elements;

	for (elements = 0; h != NULL; elements++, h = h->next)
		;
	return (elements);
}
