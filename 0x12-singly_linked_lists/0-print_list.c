#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that prints all the element of a linked list
 * @h: the link to the list being printed
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}

