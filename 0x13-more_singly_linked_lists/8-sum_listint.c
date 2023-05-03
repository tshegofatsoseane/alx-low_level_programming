#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - a function that calculates a sum
 * @head: 1st node
 * Return: resuls
 */

int sum_listint(listint_t *head)
{
	int res = 0;
	listint_t *temp = head;

	while (temp)
	{
		res += temp->n;
		temp = temp->next;
	}

	return (res);
}
