#include "function_pointers.h"

/**
 * print_name -  a function that prints a name
 * @name: the name to be printed
 * @f: a pointer to the function print_name that takes an argument of type char
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
