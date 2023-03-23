#include <stdio.h>
#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - a function that selects the correct function to perform
 * based on the operator given as input by user
 * @s: the operator passed to the program
 * Return: an int
 */
int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*(ops[i].op) == *s && !*(s + 1))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
