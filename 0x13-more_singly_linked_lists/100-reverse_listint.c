#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *reverse_listint - reverses a linked list
 *@head: pointer to the first node in the list
 *Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *fron = NULL;

	while (*head)
	{
		fron = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = fron;
	}

	*head = back;

	return (*head);
}
