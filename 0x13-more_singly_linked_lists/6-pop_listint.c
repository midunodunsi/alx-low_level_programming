#include "lists.h"

/**
 * pop_listint -deletes the head node of a listint_t linked list.
 * @head: a double pointer
 *
 * Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}
