#include "main.h"

/**
 * set_bit - a function taht sets the value of a bit to 1 at a given index
 * @n: an array of binary
 * @index: the index on which we wanna change the bit value
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
