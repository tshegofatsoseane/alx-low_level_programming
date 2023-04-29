#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - displays a singly linked list
 * @h: Head of the linked list
 * Return: umber of nodes
 */

/** Author: Tshegofatso Seane */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}

	return (count);

}
