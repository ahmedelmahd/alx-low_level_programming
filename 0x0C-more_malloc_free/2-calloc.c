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
	void *ptr;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	p = ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		*p++ = 0;
	}
	return (ptr);
}
