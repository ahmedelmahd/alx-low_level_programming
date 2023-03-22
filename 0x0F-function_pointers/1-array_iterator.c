#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - a function that executes a function on each elem. of array
 * @array: the array where we want to execute a function in
 * @size: the size of the array
 * @action: is a pointer to the function we're using on each element of array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
