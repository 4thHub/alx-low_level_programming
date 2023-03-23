#include "main.h"
#include <stdio.h>
/**
 *main - point of entry
 *Description - check code
 *Return: 0
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
