#include "main.h"
#include <stdio.h>

/**
 *
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 */

void print_alphabet(void)
{
	char alphbt;

	for (alphbt = 'a'; alphbt <= 'z'; alphbt++)
		putchar(alphbt);

	putchar('\n');
}
