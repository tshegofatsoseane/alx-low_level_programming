#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head nod
 * @head: pointe
 * Return: Data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
	{
		return (0);
	}

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
