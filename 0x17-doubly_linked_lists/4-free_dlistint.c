#include "lists.h"

/**
 * free_dlistint - a funct to release list.
 * @head: point to head
 * Return: no output
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
