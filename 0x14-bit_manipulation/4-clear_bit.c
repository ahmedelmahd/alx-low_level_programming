#include "main.h"
/**
 * clear_bit - a function that sets the value at a given index to 0
 * @n: the binary number indexed
 * @index: the index at which we want to change the value of
 * Return: 1 if successful, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
