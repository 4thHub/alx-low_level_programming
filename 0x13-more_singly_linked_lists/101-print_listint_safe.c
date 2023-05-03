#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t listint_t_loop(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 *listint_t_loop - Counts the number of unique nodes
 *in a looped listint_t linked list.
 *@head: A pointer to the head of the listint_t to check.
 *Return: If the list is not looped - 0.
 *Otherwise - the number of unique nodes in the list.
 */
size_t listint_t_loop(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t prom = 1;

	if (head->next == NULL || head == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				prom++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				prom++;
				slow = slow->next;
			}

			return (prom);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}
/**
 *print_listint_safe - Prints a listint_t list safely.
 *@head: A pointer to the head of the listint_t list.
 *Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t prom;
	size_t i = 0;

	prom = listint_t_loop(head);

	if (prom == 0)
	{
		for (; head != NULL; prom++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < prom; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (prom);
}
