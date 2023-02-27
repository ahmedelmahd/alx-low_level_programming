#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 * return: void
 */
void rev_string(char *s)
{
	int j = 0;
	int i = 0;

	while (s[i] != '\n')
	{
		i++;
	}
	while (s[j] != i - 1)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
