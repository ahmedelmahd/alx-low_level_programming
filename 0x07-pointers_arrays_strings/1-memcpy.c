#include "main.h"
/**
 * *_memcpy - copies n bytes from src to dest memory areas
 * @dest: the place to paste copied bytes to
 * @src: the place to copy bytes from
 * @n: number of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i;
	unsigned int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			dest[j] = src[i];
		}
	}
	return (ptr);
}
