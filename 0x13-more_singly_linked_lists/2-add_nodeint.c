#include <stdio.h>
#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint-t));
	if (!fresh)
		return (NULL);
	fresh->n = n;
	fresh->n = *head;
	*head = fresh;

	return (fresh);
}
