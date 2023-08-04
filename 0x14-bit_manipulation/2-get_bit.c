#include "main.h"

/**
 * get_bit - a function that returns the specific bit value requested
 * at the given index, in the binary number n
 * @n: the binary number in question
 * @index: the index
 * Return: an integer which is the bit value
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
