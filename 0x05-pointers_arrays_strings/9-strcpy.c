#include "main.h"

/**
 * _strcpy - copies the string pointed to by @src to @dest.
 * @src: source of the string file
 * @dest: Destination point which buffer point to
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
		dest[index] = '\0';
	}

	return (dest);
}
