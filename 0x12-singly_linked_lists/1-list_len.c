#include "lists.h"
#include <stdlib.h>

/**
 * list_len - a function that displays no of things in a list
 * @h: pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);

}

