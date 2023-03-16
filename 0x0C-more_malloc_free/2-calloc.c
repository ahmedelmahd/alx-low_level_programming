#include "main.h"
#include "stdlib.h"
#include "stddef.h"
/**
 * _calloc - a function that allocates memory to an array
 * @nmemb: the number of elements in the array
 * @size: the size of bytes to allocate to the memory
 * Return: a pointer to the newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
