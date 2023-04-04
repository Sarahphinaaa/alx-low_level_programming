#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodess = 0;

	while (h)
	{
		nodess++;
		h = h->next;
	}
	return (nodess);
}
