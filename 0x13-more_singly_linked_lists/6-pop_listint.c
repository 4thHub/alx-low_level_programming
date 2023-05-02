#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *pop_listint - a fuction that deletes the head node
 *@head: a pointer to the head of the linker
 *Return: (i) diplay content of deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *tem;
	int i;

	if (!*head || !head)
		return (0);

	i = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (i);
}
