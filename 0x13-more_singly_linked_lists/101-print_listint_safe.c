#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - a function that counts the number of node
 * @head: A pointer
 * Return: 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t inodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				inodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				inodes++;
				tortoise = tortoise->next;
			}

			return (inodes);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - a function that prints a list
 * @head: Pointer
 * Return: nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t inodes = 0;
	size_t	pos = 0;

	inodes = looped_listint_len(head);

	if (inodes == 0)
	{
		for (; head != NULL; inodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (pos = 0; pos < inodes; pos++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (inodes);
}
