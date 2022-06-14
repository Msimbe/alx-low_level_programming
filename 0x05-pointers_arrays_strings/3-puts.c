#include "main.h"
#include <stdio.h>

/**
 * _puts - prints the string to stdout
 * @str: String to be printed
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}

