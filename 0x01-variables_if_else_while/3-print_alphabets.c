/*
 * alphabets 
 * upper and lower
 */

#include <stdio.h>

/**
 * main - Entry point
 *
 * REturn: always 0
 */
int main(void)
{
	char alphabets;
	
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);

	for (alpahbets = 'A'; alphabets <= 'Z'; alphabets++)
		putchar(alphabets);
	putchar('\n');
	return (0);
}
