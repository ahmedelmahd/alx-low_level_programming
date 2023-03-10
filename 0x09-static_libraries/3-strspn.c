#include "main.h"
/**
 * _strspn - returns the length of a prefixed substring
 * @s: the string itself.
 * @accept: the prefixed substring that we want to get the length of
 *
 * Return: the number of bytes (length)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;
	char *q;

	for (p = s; *p != '\0'; p++)
	{
		for (q = accept; *q != '\0'; q++)
		{
			if (*p == *q)
			{
				count++;
				break;
			}
		}
		if (*q == '\0')
		{
			return (count);
		}
	}
	return (count);
}
