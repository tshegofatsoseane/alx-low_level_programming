#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - a function that releases a list_t list.
 * @head: the list
 */

void free_list(list_t *head)
{
	list_t *tempo;
	int count;

	while (head)
	{
		tempo = head->next;
		free(head->str);
		free(head);
		head = tempo;
		count++;
	}
}

