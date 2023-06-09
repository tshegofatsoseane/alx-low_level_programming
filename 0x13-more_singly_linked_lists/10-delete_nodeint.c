#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes a node in a linked list
 * @head: pointer pointing to first elemnt
 * @index: deleted index
 * Return: 1 if successful, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (count < index - 1)
	{

		if (!temp || !(temp->next))
		{
			return (-1);
		}

		temp = temp->next;
		count++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
