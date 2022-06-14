#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * a: The first integer to be swaped
 * b: Second integer to be swaped
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
