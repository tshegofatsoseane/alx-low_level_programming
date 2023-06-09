#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns the number of elements in a linked
 * @h: linked list
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
