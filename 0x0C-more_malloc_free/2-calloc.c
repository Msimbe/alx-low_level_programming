#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * calloc - Allocate memory of an array
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: Null If nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}

