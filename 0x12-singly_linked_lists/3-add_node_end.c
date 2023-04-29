#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_node_end - adds a new node to the end of the list_t list
 *@head: pointer to the head of the list_t list
 *@str: address to put the new node
 *Return: fresh(he adress of a new element or NULL)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh;
	list_t *tem = *head;
	unsigned int i = 0;

	while (str[i])
		i++;
	fresh = malloc(sizeof(list_t));

	if (!fresh)
		return (NULL);
	fresh->next = NULL;
	fresh->len = i;
	fresh->str = strdup(str);

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
