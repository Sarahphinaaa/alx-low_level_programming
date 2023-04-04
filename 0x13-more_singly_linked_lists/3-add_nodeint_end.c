#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: head of a list.
 * @n: number to be used as content
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	(void)tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (*head);
}
