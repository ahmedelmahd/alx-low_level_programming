#include "main.h"
/**
 * _pow_recursion - returns an int to the power of an int
 * @y: the power
 * @x: the int
 * Return: an int.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
