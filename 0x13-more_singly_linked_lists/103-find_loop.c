#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *find_listint_loop - finds the loop in a linked list
 *@head: linked list to search for
 *Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *back = head;
	listint_t *hulk = head;

	if (!head)
		return (NULL);

	while (back && hulk && hulk->next)
	{
		hulk = hulk->next->next;
		back = back->next;
		if (hulk == back)
		{
			back = head;
			while (back != hulk)
			{
				back = back->next;
				hulk = hulk->next;
			}
			return (hulk);
		}
	}
	return (NULL);
}
