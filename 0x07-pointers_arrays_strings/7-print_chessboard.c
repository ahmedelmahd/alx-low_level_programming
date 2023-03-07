#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: a pointer to array of 8
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	}
}
