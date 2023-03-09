#include "main.h"

/**
 * factorial - returns the factorial of an int
 * @n: the number that we return the factorial of
 * Return: Always 0 (Successful)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
