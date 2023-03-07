#include "main.h"
#include <unistd.h>
/**
 * *_strpbrk - returns the occurence of a substring of char in string of char
 * @s: the string of chars
 * @accept: the substring of chars
 * Return: a pointer to the bytes found or NULL if nothing matches
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	char *a;

	for (p = s; *p != '\0'; p++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*p == *a)
			{
				return (p);
			}
		}
	}
	return (NULL);
}
