/*
 * alphabet program
 *
 */

#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main()
{
	char alphabet;
	alphabet = 'a';
	while(alphabet <= 'z')
	{
		putchar(alphabet);
		putchar('\n');

	alphabet++;
	}

	return (0);
}
