#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - a functon that frees a list
 *@head: the linker to the head of list
 */
void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head)
	{
		tem = head->next;
		free(head);
		head(tem);
	}
}
