#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - a function that prints numbers entered as it's arguments
 * followed by a new line
 * @separator: the comma separator between every two numbers
 * @n: the number of the function parameters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int arg;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		printf("%d", arg);
	}
	va_end(args);
	printf("\n");
}
