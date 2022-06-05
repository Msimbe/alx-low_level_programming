#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	char letters;

	n = 0;
	letters = 'a';

	while (n < 10)
		putchar((n % 10) + '0');
	n++;
	
	while (letters <= 'f')
		putchar(letters);
	letters++;

	putchar('\n');

	return (0);
}
