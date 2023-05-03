#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - a function that brings the node at a certain index
 * @head: first node
 * @index: index of node
 * Return: pointer or Null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tempor = head;

	while (tempor && count < index)
	{
		tempor = tempor->next;
		count++;
	}

	return (tempor ? tempor : NULL);
}
