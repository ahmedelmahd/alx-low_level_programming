#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: the integer to turn into binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int current;
	int count, length;

	count = 0;
	for (length = 63; length >= 0; length--)
	{
		current = n >> length;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}
