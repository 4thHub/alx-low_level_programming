#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - print function
 *@array: array parameter in function
 *@size: number of element
 *@action: pointer to the function
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
