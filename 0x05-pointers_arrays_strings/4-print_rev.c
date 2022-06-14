#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print the string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		putchar(s[index]);

	putchar('\n');
}
