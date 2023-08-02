#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: linked list to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t list = 0;

	while (h)
	{
		list++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (list);
}
