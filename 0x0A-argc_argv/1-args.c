#include <stdio.h>
/**
 * main - the main function in the program
 * @argc: the command line arguments counter
 * @argv: the command line arguments pointer to array of pointers
 * Return: an integer
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc);
	(void) **argv;
	return (0);
}
