#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *get_nodeint_at_index - return the nth node
 *@head: linker to the head of the list
 *@index: node to return
 *Return: a pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tem = head;

	while (tem && x < index)
	{
		tem = tem->next;
		x++;
	}
	return (tem ? tem : NULL);
}
