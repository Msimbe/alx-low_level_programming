#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: The string whose lenghtis to be returned
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
