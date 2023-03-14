#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings together
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1])
		len1++;

	len2 = 0;
	while (s2[len2])
		len2++;

	res = malloc(len1 + len2 + 1);
	if (!res)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	for (i = 0; i < len2; i++)
		res[i + len1] = s2[i];

	res[len1 + len2] = '\0';
	return (res);
}
