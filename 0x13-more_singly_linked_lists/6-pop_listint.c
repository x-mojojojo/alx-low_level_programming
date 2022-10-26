#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
    listint_t *point;
    int temp;

    if (*head == NULL)
    {
        return (0);
    }
    else
    {
        point = *head;
        temp = (*head)->n;
        *head = point->next;
        free(point);
        return (temp);
    }
}
