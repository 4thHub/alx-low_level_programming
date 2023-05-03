#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint_safe - frees a linked list
 *@h: pointer to the first node in the linked list
 *Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int sub;
	listint_t *tem;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		sub = *h - (*h)->next;
		if (sub > 0)
		{
			tem = (*h)->next;
			free(*h);
			*h = tem;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;

	return (i);
}
