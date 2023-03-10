#include <unistd.h>
#include "main.h"
/**
 * char *_strstr - returns the first occurence of the substring in the string
 * the terminating null bytes are not compared
 * @needle: the string we're looking for
 * @haystack: the string we're searching in
 *
 * Return: pointer to string needle.
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;
	char *q;

	while (*haystack != '\0')
	{
		p = haystack;
		q = needle;
		while (*q != '\0' && *p == *q)
		{
			p++;
			q++;
		}
		if (*q == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
