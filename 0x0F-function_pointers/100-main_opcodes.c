#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - a function that prints it's own opcodes
 * @start: the start of the block of memory
 * @size: the size of memory in bytes
 * Return: void
 */
void print_opcodes(unsigned char *start, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%02x ", *(start + i));
	}
	printf("\n");
}
/**
 * main - the main entry point for the program
 * @argc: the counter for the arguments given by end user
 * @argv: a pointer that points to the first element of argv[]
 * Return: int
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int num_bytes;

	num_bytes = atoi(argv[1]);
	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes((unsigned char *) main, num_bytes);
	return (0);
}
