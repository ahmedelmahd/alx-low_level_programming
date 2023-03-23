#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints a string passed to it as an argument
 * @separator: the separator between the strings
 * @n: the number of parameters in function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, const char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
