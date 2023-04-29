#include "lists.h"
#include <stdlib.h>

/**
 * list_len - number of elemnts
 * @h: pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
		count++;
		h = h->next;
	return (count);
}

