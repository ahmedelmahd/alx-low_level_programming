#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string of characters
 *
 * Return: Always 0 ( Successful )
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s++)
	{
		count++;
	}
	return (count);
}
