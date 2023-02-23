#include "main.h"
/**
 * print_line - prints a line (n) times
 * @n: number of times the line should be printed
 * Doesn't require a return value
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
