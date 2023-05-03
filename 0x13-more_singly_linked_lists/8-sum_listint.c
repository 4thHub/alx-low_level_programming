#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *sum_listint - returns the sum of all data in list
 *@head: linker to the head of list
 *Return: (i) sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *tem = head;

	while (tem)
	{
		i += tem->n;
		tem = tem->next;
	}
	return (i);
}
