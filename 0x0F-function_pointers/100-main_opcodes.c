#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the opcode of itself
 * @argc: record number of argument(s) entered
 * @argv: stores all argument entered
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int byte, i;
	int (*ptr)(int, char **) = &main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < byte; i++)
	{
		opcode = *(unsigned char *)ptr;
		printf("%.2x", opcode);
		if (i == byte - 1)
			continue;
		printf(" ");
		ptr++;
	}
	printf("\n");
	return (0);
}
