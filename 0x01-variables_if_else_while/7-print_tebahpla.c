#include <stdio.h>
/**
  *main - display the lower case alphabet upside down
  *Return: 0
  */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
