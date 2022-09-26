#include "main.h"

/**
  * print_chessboard - Print the chessboard
  * @a: array of pieces
  *
  * Return: Nothing.
  */
void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(i[j][k]);
		}

		_putchar('\n');
	}
}
