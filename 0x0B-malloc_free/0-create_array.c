#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *create_array - create an array of characters and inicializes it
 *@size: Size of array
 *@c: Characters being inicialized
 *Return: NULL || ptr
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
