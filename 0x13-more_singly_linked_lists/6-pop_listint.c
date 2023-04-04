#include "lists.h"

/**
*pop_listint - deletes the head node of a linked list
*@head: head of the listint
*
*Return: head node's data.
*/

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int tmp;

	if (*head == NULL)
		return (0);
	pop = *head;
	tmp = pop->n;
	free(pop);
	*head = (*head)->next;
	return (tmp);
}
