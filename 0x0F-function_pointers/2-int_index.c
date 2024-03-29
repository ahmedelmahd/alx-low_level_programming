#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an int
 * @array: an array that we want to search inside
 * @size: size of the array
 * @cmp: the function that we use.
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array == NULL || *cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
