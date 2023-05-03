#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node at
 * @head: head
 * @n: data to insert
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *next;

	next = malloc(sizeof(listint_t));
	if (!next)
	{
		return (NULL);
	}

	next->n = n;
	next->next = *head;
	*head = next;

	return (next);
}
