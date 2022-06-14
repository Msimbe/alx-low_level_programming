#include "main.h"

/**
 * _puts - prints the string to stdout
 * @str: String to be printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putschar('\n');
}

