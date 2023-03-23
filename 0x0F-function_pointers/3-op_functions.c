#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - a function that returns the sum of two ints
 * @a: first int
 * @b: second int
 * Return: an int sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/*---------------------------------------------------*/
/**
 * op_sub - a function that subtracts two ints
 * @a: the first int
 * @b: the second int
 * Return: an int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/*---------------------------------------------------*/
/**
 * op_mul - a function that multiplies two ints and returns the result
 * @a: the first int
 * @b: the second int
 * Return: an int - the result of multiplacation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/*--------------------------------------------------*/
/**
 * op_div - a function that divides two ints and returns the result
 * @a: the first int
 * @b: the second int
 * Return: an int - the result of the divison
 */
int op_div(int a, int b)
{
	return (a / b);
}
/*--------------------------------------------------*/
/**
 * op_mod - a function that returns the remainder of the division of 2 ints
 * @a: the first int
 * @b: the second int
 * Return: an int - the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
