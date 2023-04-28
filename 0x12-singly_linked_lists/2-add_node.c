#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_node - function that prints new node at the beginning of a list_t list
 *@head - pointer to the list_t list
 *@str: string to be added to the node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;
	unsigned int i = 0;
       	while (str[i])
		i++;
	fresh = malloc(sizeof(list_t));
	if (!fresh)
		return (NULL);

	fresh->str = strdup(str);
	fresh->len = i;
	fresh->next = *head;
	*head = fresh;

	return (*head);
}
