#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: pointer to memory n
 * @b: bytes to be entered into n
 * @n: number of the first bytes in memory
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b; /* or *(s + i) for pointer arithmetic */
	}
	return (s);
}
