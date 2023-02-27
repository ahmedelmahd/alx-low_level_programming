#include "main.h"

/**
 * _puts - prints a string of chars followed by a newline to stdout
 * @str: the string of chars
 * return : void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
	}
	_putchar('\n');
}
