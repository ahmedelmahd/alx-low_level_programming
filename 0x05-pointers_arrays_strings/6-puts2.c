#include "main.h"

/**
 * _puts2 - prints every other char in a string
 * @str: the string
 * return: void
 */
void puts2(char *str)
{
	int j = 0;
	int i;

	while (str[j] != '\n')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
