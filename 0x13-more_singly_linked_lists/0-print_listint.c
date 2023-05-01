#include <stdio.h>
#include "lists.h"
/**
 *print_listint - display all elements of a certain list
 *@h: linker to the head of the list
 *Return: the number in figures of the node
 */
size_t print_listint(const listint_t *h)
{
	size_t i  = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
