#include "main.h"
/**
 * _puts_recursion - prints a string to stdout using recursion
 * @s: the string to print
 * Return : nothing
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
}
