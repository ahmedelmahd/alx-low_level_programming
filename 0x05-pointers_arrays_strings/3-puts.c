#include "main.h"

/**
 * _puts - prints a string of chars followed by a newline to stdout
 * @str: the string of chars
 * return : void
 */
void _puts(char *str)
{
	_putchar(*str);
	while (*str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

