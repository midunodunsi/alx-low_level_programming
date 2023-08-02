#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: linked list to go through
 *
 * Return: Number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
