#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void print_alphabet()
{
	char alphbt;

	for (alphbt = 'a'; alphbt <= 'z'; alphbt++)
		putchar(alphbt);

	putchar('\n');
}
