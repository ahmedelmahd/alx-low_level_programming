#include "main.h"

/**
 * _puts - prints a string of chars followed by a newline to stdout
 * @str: the string of chars
 * return : void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
