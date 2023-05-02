#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint2 - a function that frees a list
 *@head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tem;

	if (head == NULL)
		return;
	while (*head)
	{
		tem = (*head)->next;
		free(*head);
		*head = tem;
	}
	*head = NULL;
}
