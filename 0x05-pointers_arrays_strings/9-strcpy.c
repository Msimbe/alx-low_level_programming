#include "main.h"

/**
 * strcpy - copies the string pointed to by src to dest.
 * @src: source of the string file
 * @dest: Destination point which buffer point to
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index ++;
	}

	return (dest);
}
