#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat -  a function that concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: returns a pointer to the allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *cat_str;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	cat_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (cat_str != NULL)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			cat_str[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j] != '\0')
		{
			cat_str[i] = s2[j];
			i++;
			j++;
		}
		cat_str[i] = '\0';
	}
	return (cat_str);
}
