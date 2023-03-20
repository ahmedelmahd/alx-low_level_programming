#include <stdio.h>

/**
 * main - returns the file name it was compiled from
 * using __FILE__ predefined-macro
 * Return: Always 0 (successful)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
