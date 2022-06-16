#include "main.h"
#include <stdio.h>

/**
 * print_sign - Prints the sign of a number.
 * @n: The number of which the sign will be printed
 * Return: 1 if the number is greater than zero,
 *  0 if the number is zero,
 *  -1 if the number is less than zero.
 */
int Print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		putchar('0');
		return (0);
	}

	else
	{
		putchar('-');
		return (-1);
	}
}
