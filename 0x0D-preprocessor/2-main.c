#include <stdio.h>

/**
 * main - returns the file name it was compiled from
 * using __FILE__ predefined-macro
 * Return: nothing
 */
int main(void)
{
	printf("%s\n", __FILE__);
}
