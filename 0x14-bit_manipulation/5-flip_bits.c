#include "main.h"
/**
 * flip_bits - a function that returns the number of flips needed to flip n to m
 * @n: the first number
 * @m: the second number
 * Return: the number of flips needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int current;
	int flips, length;
	unsigned long int xclusive;

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
