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
	listint_t *popp;
	int content;

	if (*head == NULL)
		return (0);

	popp = *head;
	content = popp->n;
	free(popp);

	*head = (*head)->next;
	return (content);
}
