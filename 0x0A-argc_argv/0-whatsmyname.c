#include <stdio.h>
/**
 * main - main function
 * @argc: command line arguments counter
 * @argv: a pointer to an array of pointers which points to the
 * command line arguments passed by the user
 * Return: an int ( usually the argc count )
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void) argc;
	return (0);
}
