#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: the lowest possible integer to start the array from
 * @max: the highest integer to end the array at.
 * Return: a pointer to the newly allocated array of integers.
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		p[i] = min + i;
	}

	return (p);
}
