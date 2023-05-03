#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 -  a function that frees a linked list
 * @head: pointer
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *tempor;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		tempor = (*head)->next;
		free(*head);
		*head = tempor;
	}

	*head = NULL;
}
