#include "lists.h"

/**
 * sum_listint - returns the sum of all the data linked list.
 * @head: first node in the linked list
 *
 * Return Sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
