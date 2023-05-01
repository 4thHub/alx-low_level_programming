#include <stdio.h>
#include "lists.h"
/**
 *listint_len - displays the number of elements in linked in it's return
 *@h: the linker to the list
 *Return: (i) the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
