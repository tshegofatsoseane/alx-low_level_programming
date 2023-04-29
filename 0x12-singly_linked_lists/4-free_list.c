#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list.
 * @head: the list
 */

void free_list(list_t *head)
{
	list_t *temp;
	int count;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
		count++;
	}
}

