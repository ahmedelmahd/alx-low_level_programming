#include "main.h"
#include <unistd.h>
/**
 * char *_strchr - a function that locates a character in a string
 * @s: the string we are looking in for char c
 * @c: the char we are looking for in *s
 *
 * Return: a pointer to char c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return (s);
	}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
