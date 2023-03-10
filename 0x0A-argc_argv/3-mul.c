#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main entry point for the program
 * @argc: command line arguments counter
 * @argv: a pointer that points to an array of pointers
 * which point to command line arguments
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc <= 2)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
