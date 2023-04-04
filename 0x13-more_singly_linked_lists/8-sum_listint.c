#include "lists.h"

/**
 *sum_listint - sums up all the data in a linked list
 *@head: head of the list
 *
 *Return: sum of the number
 */
int sum_listint(listint_t *head)
{
	int sum;
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		sum = head->next;
	}
	return (sum);
}
