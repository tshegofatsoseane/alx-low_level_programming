#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * find_listint_loop - a function that finds loop
 * @head: linked list
 * Return: address
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	if (!head)
	{
		return (NULL);
	}
return (NULL);
}
