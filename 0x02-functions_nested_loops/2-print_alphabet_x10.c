#include "main.h"
/**
  *print_alphabet_x10 - display alpha 10 times
  */
void print_alphabet_x10(void)
{
	int cap;
	char mr;

	for (cap = 0; cap <= 9; cap++)
	{
		for (mr = 'a'; mr <= 'z'; mr++)
			_putchar(mr);

		_putchar('\n');
	}
}
