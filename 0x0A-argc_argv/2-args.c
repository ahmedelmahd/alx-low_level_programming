#include <stdio.h>
/**
 * main - the entry point for the program
 * @argc: the command line-arguments counter
 * @argv: a pointer to an array of pointers which point to a CL argument passed by the user
 * Return: an integer
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return argc;
}
