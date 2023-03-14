#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer that contains a copy
 * of a newly allocated memory address
 * that has a string as a paramater
 * @str: the string provided as a parameter
 *
 * Return: a pointer on success, NULL if otherwise
 */
char *_strdup(char *str)
{
	int length;
	char *cp_str;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	cp_str = malloc(sizeof(char) * length + 1);
	if (cp_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		cp_str[i] = str[i];
	}
	return (cp_str);
}
