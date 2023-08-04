#include "main.h"

/**
 * flip_bits - a function that returns number of flips needed to flip n > m
 * @n: the first number
 * @m: the second number
 * Return: the number of flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int current, xclusive;
	int flips, length;

	flips = 0;
	xclusive = n ^ m;
	for (length = 63; length >= 0; length--)
	{
		current = xclusive >> length;
		if (current & 1)
		{
			flips++;
		}
	}
	return (flips);
}
