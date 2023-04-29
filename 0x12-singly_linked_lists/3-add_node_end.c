#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node§
 * @head: double pointer
 * @str: string
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *tempo = *head;
	unsigned int length = 0;

	while (str[length])
	{
		length++;
	}

	n = malloc(sizeof(list_t));

	if (!n)
	{
		return (NULL);
	}

	n->str = strdup(str);
	n->len = length;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (tempo->next)
	{
		tempo = tempo->next;
	}

	tempo->next = n;

	return (n);
}
