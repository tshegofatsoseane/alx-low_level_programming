#include <string.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds new node
 * @head: double pointer
 * @str: new string
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
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
	n->next = (*head);
	(*head) = n;

	return (*head);
}
