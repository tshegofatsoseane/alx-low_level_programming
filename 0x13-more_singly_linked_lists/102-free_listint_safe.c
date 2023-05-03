#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - a functions frees a linked list
 * @h: pointer to the first nod
 * Return: num of element
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int dif;
	listint_t *temp;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		dif = *h - (*h)->next;

		if (dif > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
