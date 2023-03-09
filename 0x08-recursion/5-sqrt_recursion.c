#include "main.h"
int _sqrt_recursion_formula(int n, int i);
/**
 * _sqrt_recursion - prints the square root of an integer
 * @n: the number we get the square root of
 * Return: an int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_formula(n, 0));
	}
}

/**
 * _sqrt_recursion_formula - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: the resulting square root
 */

int _sqrt_recursion_formula(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_recursion_formula(n, i + 1));
}
