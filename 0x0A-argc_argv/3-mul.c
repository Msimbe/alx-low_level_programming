#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 * If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int n1, n2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	product = n1 * n2;

	printf("%d\n", product);
	return (0);
}

