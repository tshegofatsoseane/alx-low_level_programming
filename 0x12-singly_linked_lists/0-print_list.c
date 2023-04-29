#include <stdio.h>
#include "lists.h"

/**
 * print_list - displays a singly linked list
 * @h: Head of the linked list
 * Return: umber of nodes
 */

/** Author: Tshegofatso Seane */

size_t print_list(const list_t *h)
{

	size_t count = 0;
	int counter;

	while (h != NULL)
	if (h->str == NULL)
	{
		printf("[%d] (nil)\n", h->len);
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}

	count++;
	h = h->next;
	return (count);
}
