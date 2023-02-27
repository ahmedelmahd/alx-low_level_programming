#include "main.h"

/**
 * swap_int - swaps the values of 2 ints
 * @a: the first int
 * @b: the second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *tmp;

	*a = *tmp;
	*b = *a;
	*tmp = *b;
}
