#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint - function that adds a new a new node to list
 *@n: what to place in new node
 *@head: linker to the first node
 *Return: (fresh) the new node and NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);
	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (fresh);
}
