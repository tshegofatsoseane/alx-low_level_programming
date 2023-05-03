#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head)
	{
		tem = head->next;
		free(head);
		head = tem;
	}
}

