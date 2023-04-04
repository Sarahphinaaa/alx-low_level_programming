#include "lists.h"

/**
*get_nodeint_at_index - return the nth node of a linked list
*@head: pointer to the head of the listint
*@index: index of the node needed
*
*Return: the address of the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t;
	for (t = 0; t < index && head != NULL; t++)
	{
		head = head->next;
	}
	return (head);
}
