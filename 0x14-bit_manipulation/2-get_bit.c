#include "main.h"

/**
 * get_bit - a function that returns the specific bit value requested
 * at the given index, in the binary number n
 * @n: the binary we want to get the bit from
 * @index: the index on which we want to get the bit, from right to left
 * Return: an integer i.e the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
	{
		return (-1);
	}
	value = (n >> index) & 1;
	return (value);
}
