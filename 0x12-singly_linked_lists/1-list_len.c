#include <stdio.h>
#include "lists.h"
/**
 *list_len - displays the number of elementin a linked list_t list
 *@h: the pointer to the list_ t list
 *Return: Return the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
