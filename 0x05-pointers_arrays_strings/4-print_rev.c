#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s : the string to print in reverse
 *
 * return : void
 */
void print_rev(char *s)
{
	int length;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	for (i = length - 2; i >= 0; i--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
