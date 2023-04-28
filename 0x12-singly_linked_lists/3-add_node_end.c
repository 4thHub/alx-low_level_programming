#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh;
	list_t *tem = *head;
	unsigned int i = 0;

	while(str[i])
		i++;
	fresh = malloc (sizeof(list_t));

	if (!i)
		return(NULL);
	fresh->next = NULL;
	fresh->len = i;
	fresh->str = strdup(str);

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}
	while (tem->next)
		tem->next = tem;
	tem->next = fresh;

	return(fresh);
}
