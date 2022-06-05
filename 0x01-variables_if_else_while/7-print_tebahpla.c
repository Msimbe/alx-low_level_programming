#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
			putchar(rev);

	putchar('\n');

	return 0;
}
