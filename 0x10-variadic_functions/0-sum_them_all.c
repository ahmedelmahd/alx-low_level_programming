#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all -  a function that returns the sum of all of it's arguments
 * @n: the number of parameters in the function
 * @...: the ellipsis, declaring that there will be more n number of arguments
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int total;
	unsigned int i;
	va_list args;

	total = 0;
	if (n <= 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	return (total);
}
