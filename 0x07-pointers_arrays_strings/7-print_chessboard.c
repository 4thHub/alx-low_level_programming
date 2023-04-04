#include <stdio.h>
#include "main.h"
/**
 *print_chessboard - display a chess board
 *@a: To be printed
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
