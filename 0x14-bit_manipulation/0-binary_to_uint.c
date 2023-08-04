#include "main.h"
/**
 * binary_to_uint - a function that turns a binary number to an unsigned int
 * @b: the string of binary numbers
 * Return: uint
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int iterator, converted_int;

	if (b == NULL)
	{
		return (0);
	}
	iterator = 0;
	converted_int = 0;
	while (b[iterator] != '\0')
	{
		if ((b[iterator] == '0' | b[iterator] == '1'))
		{
			converted_int = converted_int * 2 + (b[iterator] - '0');
		}
		else
		{
			return (0);
		}
		iterator++;
	}
	return (converted_int);
}
