#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
 
size_t print_listint(const listint_t *h)
{
    size_t elements;

    for (elements = 0;h != NULL; elements++, h = h->next)
        printf("%d\n", h->n);

    return (elements);
}
