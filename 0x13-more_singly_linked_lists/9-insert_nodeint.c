#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *insert_nodeint_at_index - function that inserts new node to given position
 *@head: pointer to the head of link
 *@idx: index new node are added
 *@n: data new node is added
 *Return: NULL || pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *fresh;
	listint_t *tem = *head;

	fresh = malloc(sizeof(listint_t));
	if (!head || !fresh)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	if (idx == 0)
	{
		fresh->next = *head;
		*head = fresh;
		return (fresh);
	}

	for (x = 0; tem && x < idx; x++)
	{
		if (x == idx - 1)
		{
		fresh->next = tem->next;
			tem->next = fresh;
			return (fresh);
		}
		else
			tem = tem->next;
	}
	return (NULL);
}
