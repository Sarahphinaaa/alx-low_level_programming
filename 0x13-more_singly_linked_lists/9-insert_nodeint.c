#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int t;
	listint_t *tmp;
	listint_t *h;

	h = *head;
	if (idx != 0)
	{
		for (t = 0; t < idx - 1 && h != NULL; t++)
		{
			h = h->next;
		}
	}
	if (h == NULL && idx != 0)
		return (NULL);

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	if (idx == 0)
	{
		tmp->>next = *head;
		*head = tmp
	}
	else
	{
		tmp->next = h->next;
		h->next = tmp;
	}
	return (tmp);
}
