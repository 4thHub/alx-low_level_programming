#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end - a function that adds a node
 *@head: a linker to the head of the list
 *@n: use to place the data to be inserted
 *Return: (fresh) a fresh node at the end of list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh;
	listint_t *tem = *head;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);
	fresh->n = n;
	fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}
	while (tem->next)
		tem = tem->next;
	tem->next = fresh;
	return (fresh);
}

