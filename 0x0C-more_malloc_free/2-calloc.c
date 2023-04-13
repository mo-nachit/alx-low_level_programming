#include "main.h"
#include <stdlib.h>

/**
* _calloc - Allocates memory for an array using malloc
* @nmemb: array num
* @size: size of array element
* Return: 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newArr;
	unsigned int i, asize;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newArr = malloc(nmemb * size);
	if (newArr == NULL)
		return (NULL);

	asize = nmemb * size;
	for (i = 0; i < asize; i++)
		newArr[i] = 0;
	return (newArr);
}
