#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to take from s2
 * Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}
	concat_str = malloc(sizeof(char) * (len1 + (n < len2 ? n : len2) + 1));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < n && j < len2; j++)
	{
		concat_str[i + j] = s2[j];
	}
	concat_str[i + j] = '\0';
	return (concat_str);
}
