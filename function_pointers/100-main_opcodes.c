#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, 1 for wrong argument count,
 * or 2 for a negative byte count
 */
int main(int argc, char *argv[])
{
	int bytes;
	int i;
	unsigned char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	opcode = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", opcode[i]);

		if (i == bytes - 1)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
