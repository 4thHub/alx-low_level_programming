#include "main.h"
/**
 *print_alphabet - display the alphabets in lowercase followed by a new line
 */
void print_alphabet(void)
{
	char mr;

	for (mr = 'a'; mr <= 'z'; mr++)
		_putchar(mr);

	_putchar('\n');
}

