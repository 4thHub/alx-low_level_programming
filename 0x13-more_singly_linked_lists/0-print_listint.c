#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t i  = 0;

	while (h)
	{
		printf("%u\n", h->n);

		i++;
		h = h->next;
	}
	return (i);
}
