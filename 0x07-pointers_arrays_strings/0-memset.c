#include "main.h"

/**
 * _memset(char*s, char b, unsigned int n) - fills memory with a constant byte
 *
 * @s: pointer to memory n
 * @b: bytes to be entered into n
 * @n: number of the first bytes in memory
 * return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (b != '\0')
	{
		*s = b;
	}
	return (s);
}
