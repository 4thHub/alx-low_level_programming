#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_list - free the list_t list
 *@head: the link of the list_t listt
 */
void free_list(list_t *head)
{
	list_t *tem;
	while (head)
	{
		tem = head->next;
		free(head->str);
		free(head);
		head =tem;
	}
}

